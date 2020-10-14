#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& s) : Vehicle(s)
{

}

void SemiTruck::closeWindows()
{
    setSpeed(65);
    std::cout << name << ": closing the windows!" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": hello officer, how can I help you?" << std::endl;
}
