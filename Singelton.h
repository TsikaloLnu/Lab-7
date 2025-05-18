#ifndef SINGLETON_H
#define SINGLETON_H

#include <string>
#include <iostream>

using namespace std;

class LoggerSingleton
{
private:
    static LoggerSingleton* _loggerSingletonInstance;

    LoggerSingleton() {}

public:
    static LoggerSingleton* GetInstance();

    void Log(const string& message);
};

#endif
