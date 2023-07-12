#pragma once
#include <iostream>
#include <list>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

class dataStream
{
private:
    std::string cmdStr = "cmd";
    std::string dataStr;

public:
    void dataEntry();
    std::string openBracket();
    std::string closeBracket();
};
