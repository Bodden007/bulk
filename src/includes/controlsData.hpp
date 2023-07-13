#pragma once
#include <iostream>
#include "dataStream.hpp"
#include "dataTime.hpp"
#include "dataStorage.hpp"

class controlsData
{
private:
    int N = 3;

public:
    bool request = true;
    void controls();
};
