#pragma once

#include "Vehicle.h"
#include <string>

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);
    void closeWindows();

    void pullOver();
};

