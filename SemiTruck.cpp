#include "SemiTruck.h"

SemiTruck(const std::string& s);

SemiTruck::closeWindows()
{
    setSpeed(65);
    std::cout << name << ": closing the windows!" << std::endl;
}

SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": hello officer, how can I help you?" << std::endl;
}
