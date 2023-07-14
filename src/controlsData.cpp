#include "includes/controlsData.hpp"

void controlsData::controls()
{
    std::string data;
    dataStream dataStr;
    dataStorage dataStor{N};

    while (request)
    {
        data = dataStr.dataEntry(request);
        dataStor.dataBulk(data);
    }
}