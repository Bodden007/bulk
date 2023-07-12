#include "includes/dataStream.hpp"

void dataStream::dataEntry()
{
    for (int i = 1; i < 6; i++)
    {
        dataStr = cmdStr + std::to_string(i);
        std::cout << dataStr << std::endl;
        Sleep(1000);
    }
    dataStr.clear();
    std::cout << dataStr << std::endl;
    Sleep(1000);

    for (int i = 1; i < 12; i++)
    {
        dataStr = cmdStr + std::to_string(i);
        std::cout << dataStr << std::endl;
        Sleep(1000);
        if (i == 2 || i == 6)
        {
            dataStr = openBracket();
            std::cout << dataStr << std::endl;
            Sleep(1000);
        }
        else if (i == 8)
        {
            dataStr = closeBracket();
            std::cout << dataStr << std::endl;
            Sleep(1000);
        }
        else if (i == 4 || i == 9)
        {
            dataStr = closeBracket();
            std::cout << dataStr << std::endl;
            Sleep(1000);
            dataStr = openBracket();
            std::cout << dataStr << std::endl;
            Sleep(1000);
        }
    }
    dataStr.clear();
    std::cout << dataStr << std::endl;
}

std::string dataStream::openBracket()
{
    return "{";
}

std::string dataStream::closeBracket()
{
    return "}";
}
