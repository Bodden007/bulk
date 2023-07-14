#include "../includes/dataStream.hpp"

std::string dataStream::dataEntry(bool &ptrrequest)
{
    dataStr = cmdStr[step];
    if (step == 24)
    {
        ptrrequest = false;
    }
    step++;
    Sleep(1000);
    return dataStr;
}
