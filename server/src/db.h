#pragma once

namespace DB {
void connect(const char * address, const char * login, const char * password, const char * dbname);
void write(int id, const char* phrase);
void close();
}
