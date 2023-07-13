#pragma once
#include <iostream>
#include <list>

#include "controlsData.hpp"

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

class dataStream
{
    
private:
    int step = 0;   
    std::string dataStr;
    std::string cmdStr[25] {"cmd1","cmd2","cmd3",
    "cmd4","cmd5"," ","cmd1","cmd2","{","cmd3",
    "cmd4","}","{","cmd5","cmd6","{","cmd7","cmd8",
    "}","cmd9","}","{","cmd10","cmd11"," "};

public:
    std::string dataEntry(bool &request);
};
