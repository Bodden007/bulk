#include "../includes/writeFaile.hpp"

void writeFaile::outFaile(std::string out_balk)
{
    dataTime dataT;
    std::string timeDat = dataT.timeSyst();
    std::string fileName = "bulk";
    fileName += timeDat + ".log";

            std::ofstream out;
        out.open(fileName);

        if (out.is_open())
        {
            out << out_balk << std::endl;
        }

        out.close();
    
}