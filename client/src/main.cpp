//
// blocking_tcp_echo_client.cpp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2018 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <boost/asio.hpp>
#include <boost/chrono.hpp>
#include <boost/thread/thread.hpp>

#include "response.pb.h"
#include "request.pb.h"

using boost::asio::ip::tcp;

enum { max_length = 1024 };

int main(int argc, char* argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage: wclient <host> <port> <id>\n";
        return 1;
    }
    int count = 0;
    int id = atoi(argv[3]);

    while(true)
    {
        boost::asio::io_context io_context;

        tcp::socket s(io_context);
        tcp::resolver resolver(io_context);


        try 
        {
            boost::asio::connect(s, resolver.resolve(argv[1], argv[2]));

            while(true) 
            {
                {
                    //prepare packet
                    wproject::Request request;
                    request.set_id(id);
                    
                    std::stringstream ss;
                    ss << "id: " << id << "; count: " << count;
                    request.set_phrase(ss.str());
                    
                    std::string dataToSend;
                    bool converted = request.SerializeToString(&dataToSend);
                    if(!converted)
                    {
                        std::cerr << "can not serialize to String!" << std::endl;
                        return 1;
                    }
                    
                    //write packet
                    boost::asio::write(s, boost::asio::buffer(dataToSend.data(), dataToSend.size()));
                }
                {
                    char reply[max_length];
                    size_t reply_length = boost::asio::read(s,
                                                            boost::asio::buffer(reply, max_length),
                                                            boost::asio::transfer_at_least(1));
                    wproject::Response response;
                    response.ParseFromArray(reply, reply_length);
                    if(response.type() == wproject::Response::SUCCESS) {
                        count++;
                    }
                }
                boost::this_thread::sleep_for(boost::chrono::milliseconds(1000));
            }
        }
        catch(const std::exception& e) 
        {
            std::cerr << "got exception: " << e.what() << std::endl;
            boost::this_thread::sleep_for(boost::chrono::milliseconds(1000));
        }
    }

    return 0;
}
