#pragma once

namespace DB {
struct Context;
Context* create();

bool connect(Context* context, const char * address, const char * login, const char * password, const char * dbname);
bool write(Context* context, int id, const char* phrase);
void close(Context* context);
}
