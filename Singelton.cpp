#include "Singelton.h"

LoggerSingleton* LoggerSingleton::_loggerSingletonInstance = nullptr;

LoggerSingleton* LoggerSingleton::GetInstance()
{
    if (!_loggerSingletonInstance)
    {
        _loggerSingletonInstance = new LoggerSingleton();
    }
    return _loggerSingletonInstance;
}

void LoggerSingleton::Log(const string& message)
{
    cout << "Log: " << message << endl;
}
