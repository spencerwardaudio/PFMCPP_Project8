#pragma once 

#include "Vehicle.h"
#include <string>

struct Vehicle;
struct Highway;

struct HighwayPatrol : Vehicle 
{
    HighwayPatrol();
    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h );

    std::string vehicleClass;
};

