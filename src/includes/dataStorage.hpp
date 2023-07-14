#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "../includes/dataTime.hpp"

class dataStorage
{
private:
    int N;
    int step = 1;
    bool dynamicBlock = false;
    bool staticBlock = true;

public:
    std::vector<std::string> bulk;
    std::string dataBulk(std::string &);
    std::string outBalk(std::vector<std::string> &);
    dataStorage(int p_N)
    {
        N = p_N;
    }
    ~dataStorage() {}
};
