#pragma once
#include <boost/signals2.hpp>
#include <iostream>
#include <memory>
#include <functional>
#include <string>
#include "dataStream.hpp"
#include "dataTime.hpp"
#include "dataStorage.hpp"

class controlsData
{
private:
    int N;

public:
    bool request = true;
    void controls();
};
