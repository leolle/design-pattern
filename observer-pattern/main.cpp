#include <stdio.h>
#include <string.h>
#include <iostream>
#include <sstream>
#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"


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

wd.setMeasurement(2323, 2323, 123);
wd.removeObserver(&ccd);
}
