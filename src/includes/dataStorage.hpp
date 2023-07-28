#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "../includes/dataTime.hpp"

struct dataStorage
{
private:
    int N;
    int step = 1;
    bool dynamicBlock = false;
    bool staticBlock = true;

public:
    std::vector<std::string> bulk;
    std::string dataBulk(std::string strBalk);
    std::string outBalk(std::vector<std::string> &);
    void iniN(int &x);
};
