#include "includes/controlsData.hpp"

void controlsData::controls()
{
    dataStream dataStream;

    while (request)
    {
        std::cout << dataStream.dataEntry(request) << std::endl;
    }
}