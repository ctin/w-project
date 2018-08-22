#include "db.h"

#include <my_global.h>
#include <mysql.h>

#include <sstream>
#include <chrono>
#include <ratio>

namespace DB
{

struct Context {
    MYSQL *con = nullptr;
};

Context* create() {
    return new Context();
}

void finish_with_error(MYSQL *con)
{
    fprintf(stderr, "%s\n", mysql_error(con));
    mysql_close(con);
    exit(1);
}

bool connect(Context* context, const char * address, const char * login, const char * password, const char * dbname) {
    
    context->con = mysql_init(NULL);
    
    if (context->con == NULL)
    {
        fprintf(stderr, "%s\n", mysql_error(context->con));
        exit(1);
    }
    
    if (mysql_real_connect(context->con, address, login, password,
                           dbname, 0, "/Applications/MAMP/tmp/mysql/mysql.sock", 0) == NULL)
    {
        finish_with_error(context->con);
        return false;
    }
    return true;
}

bool write(Context* context, int id, const char* phrase) {

    long long timepoint = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count();

    std::stringstream ss;
    ss << "INSERT INTO ctin VALUES("
        << id
        << ", " << "'" << phrase << "'"
        << ", " << timepoint
        << ")";
    const char* data = ss.str().data();
    if(mysql_query(context->con, data)) {
        finish_with_error(context->con);
        return false;
    }
    return true;
}

void close(Context* context) {
    mysql_close(context->con);
    delete context;
}

}
