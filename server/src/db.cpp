#include "db.h"

#include <my_global.h>
#include <mysql.h>

#include <sstream>

namespace
{
    MYSQL *con = nullptr;
}

namespace DB
{

void finish_with_error(MYSQL *con)
{
    fprintf(stderr, "%s\n", mysql_error(con));
    mysql_close(con);
    exit(1);
}

void connect(const char * address, const char * login, const char * password, const char * dbname) {
    
    con = mysql_init(NULL);
    
    if (con == NULL)
    {
        fprintf(stderr, "%s\n", mysql_error(con));
        exit(1);
    }
    
    if (mysql_real_connect(con, address, login, password,
                           dbname, 0, "/Applications/MAMP/tmp/mysql/mysql.sock", 0) == NULL)
    {
        finish_with_error(con);
    }
}

void write(int id, const char* phrase) {
    std::stringstream ss;
    ss << "INSERT INTO ctin VALUES("
        << id
        << ", " << "'" << phrase << "'"
        << ", " << time(0)
        << ")";
    const char* data = ss.str().data();
    if(mysql_query(con, data)) {
        finish_with_error(con);
    }
}

void close() {
    mysql_close(con);
}

}
