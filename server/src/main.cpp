//
// async_tcp_echo_server.cpp
// ~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2018 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <cstdlib>
#include <iostream>
#include <memory>
#include <utility>
#include <boost/asio.hpp>

#include "db.h"

#include "response.pb.h"
#include "request.pb.h"

using boost::asio::ip::tcp;



class session
: public std::enable_shared_from_this<session>
{
public:
    session(tcp::socket socket)
    : socket_(std::move(socket))
    {
    }
    
    ~session() {
        DB::close(context);
    }
    
    void start()
    {
        context = DB::create();
        DB::connect(context, "localhost", "ctin", "ctin", "ctin");
        do_read();
    }
    
    
private:
    void do_read()
    {
        auto self(shared_from_this());
        socket_.async_read_some(boost::asio::buffer(data_, max_length),
                                [this, self](boost::system::error_code ec, std::size_t length)
                                {
                                    if (!ec)
                                    {
                                        wproject::Request request;
                                        request.ParseFromArray(data_, length);
                                        
                                        bool writeOK = DB::write(context, request.id(), request.phrase().data());
                                        
                                        wproject::Response response;
                                        response.set_type(writeOK ? ::wproject::Response::SUCCESS : ::wproject::Response::ERROR);
                                        response.set_text(writeOK ? "success" : "error");
                                        do_write(response);
                                    }
                                });
    }
    
    void do_write(const wproject::Response& response)
    {
        
        std::string dataToSend;
        bool converted = response.SerializeToString(&dataToSend);
        if(!converted) {
            std::cerr << "can not serialize to String!" << std::endl;
        }
        
        auto self(shared_from_this());
        boost::asio::async_write(socket_, boost::asio::buffer(dataToSend.data(), dataToSend.size()),
                                 [this, self](boost::system::error_code ec, std::size_t /*length*/)
                                 {
                                     if (!ec)
                                     {
                                         do_read();
                                     }
                                 });
    }
    
    tcp::socket socket_;
    enum { max_length = 1024 };
    char data_[max_length];
    DB::Context* context = nullptr;
};

class server
{
public:
    server(boost::asio::io_context& io_context, short port)
    : acceptor_(io_context, tcp::endpoint(tcp::v4(), port))
    {
        do_accept();
    }
    
private:
    void do_accept()
    {
        acceptor_.async_accept(
                               [this](boost::system::error_code ec, tcp::socket socket)
        {
            if (!ec)
            {
                std::make_shared<session>(std::move(socket))->start();
            }
            
            do_accept();
        });
    }
    
    tcp::acceptor acceptor_;
};

int main(int argc, char* argv[])
{
    try
    {
        if (argc != 2)
        {
            std::cerr << "Usage: wserver <port>\n";
            return 1;
        }
        
        boost::asio::io_context io_context;
        
        server s(io_context, std::atoi(argv[1]));
        
        io_context.run();
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << "\n";
    }
    return 0;
}
