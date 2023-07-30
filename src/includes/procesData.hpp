#pragma once
#include <iostream>
#include <vector>
#include <boost/signals2.hpp>
#include "../includes/dataTime.hpp"
#include "../includes/writeFaile.hpp"
#include "../includes/outConsole.hpp"

class procesData
{
private:
    int N;
    int step = 1;
    bool dynamicBlock = false;
    bool staticBlock = true;
    bool bracketOpen = false;
    std::vector<std::string> bulk;

public:
    procesData(int out_N)
    {
        N = out_N;
    }
    ~procesData(){};
    void sortData(std::string in_data);
    void outBulk(std::vector<std::string> &bulk);
};