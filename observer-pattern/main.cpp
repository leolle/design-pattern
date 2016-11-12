#include <stdio.h>
#include <string.h>
#include <iostream>
#include <sstream>
#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"
#include "TemperatureOnlyDisplay.hpp"

//#include "lineSegment.hpp"
//#include "circle.hpp"
//#include "shape.hpp"
//#include "array.hpp"

using namespace std;

//implement both exception classes in the array header file for simplicity
int main()
{
WeatherData wd;
CurrentConditionsDisplay ccd = CurrentConditionsDisplay(&wd);
TemperatureOnlyDisplay tod = TemperatureOnlyDisplay(&wd);
wd.setMeasurement(std::rand(), std::rand(), std::rand());

wd.removeObserver(&ccd);
wd.setMeasurement(std::rand(), std::rand(), std::rand());
//ccd.display();

return 0;
}
