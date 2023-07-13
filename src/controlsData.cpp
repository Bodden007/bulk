#include "includes/controlsData.hpp"

void controlsData::controls()
{
    std::string data;
    dataStream dataStr;
    dataStorage dataStor{N};
    dataTime dataT;
    std::string timeDat = dataT.timeSyst();
    std::cout << timeDat << std::endl;

    while (request)
    {
        data = dataStr.dataEntry(request);
        dataStor.dataBulk(data);
    }
}