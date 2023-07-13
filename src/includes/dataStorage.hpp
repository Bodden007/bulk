#pragma once
#include <iostream>
#include <vector>

class dataStorage
{
private:
    std::vector<std::string> bulk;
    int N;

public:
    std::string dataBulk(std::string&);
    dataStorage(int p_N)
    {
        N = p_N;
    }
    ~dataStorage() {}
};
