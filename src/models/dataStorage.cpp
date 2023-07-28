#include "../includes/dataStorage.hpp"

std::string dataStorage::dataBulk(std::string strBalk)
{    
    bulk.push_back(strBalk);

    if (staticBlock)
    {
        if (step == N)
        {
            outBalk(bulk);
        }
        else if (strBalk == " ")
        {
            bulk.pop_back();
            outBalk(bulk);
        }

        step++;
    }

    if (strBalk.compare("{") == 0 && !dynamicBlock)
    {
        bulk.pop_back();
        outBalk(bulk);
        dynamicBlock = true;
        staticBlock = false;
    }
    else if (strBalk.compare("}") == 0 && dynamicBlock)
    {
        bulk.pop_back();
        dynamicBlock = false;
    }
    else if (strBalk.compare("{") == 0)
    {
        bulk.pop_back();
    }
    else if (strBalk.compare("}") == 0)
    {
        bulk.pop_back();
    }

    return std::string();
}

std::string dataStorage::outBalk(std::vector<std::string> &bulk)
{
    dataTime dataT;
    std::string timeDat = dataT.timeSyst();
    std::string fileName = "bulk";
    fileName += timeDat + ".log";

    std::string out_balk;
    if (!bulk.empty())
    {
        out_balk = "bulk: ";
        for (bool isFirst{true}; auto &outBal : bulk)
        {
            out_balk += (isFirst ? isFirst = false, "" : ", ") + outBal;
        }
        std::cout << out_balk << std::endl;
        bulk.clear();
        std::cout << std::endl;

        std::ofstream out;
        out.open(fileName);

        if (out.is_open())
        {
            out << out_balk << std::endl;
        }

        out.close();
    }
    return std::string();
}

void dataStorage::iniN(int &x)
{
    N = x;
}
