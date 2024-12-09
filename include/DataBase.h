#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>

class Database {
    std::string dbType;
    void* connection;
public: 
    void saveData(std::string data);
    std::string loadData(int id);
    void connect();
    void disconnect();
};

#endif 