#pragma once

#include "Vehicle.h"
#include <string>

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& s);
    ~SemiTruck() override;
    SemiTruck(const SemiTruck&);
    SemiTruck& operator=(const SemiTruck&);

    void closeWindows();

    void pullOver();
};

