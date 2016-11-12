#include <stdio.h>
#include <string.h>
#include <iostream>
#include "TemperatureOnlyDisplay.hpp"
#include <sstream>

using namespace std;

TemperatureOnlyDisplay::TemperatureOnlyDisplay(WeatherData *wd)
{
  weatherData = wd;
  wd->registerObserver(this);
}

void TemperatureOnlyDisplay::update()
{
  temperature = weatherData->getTemperature();
  display();
}

void TemperatureOnlyDisplay::display()
{
  cout << "CurrentTemperatureDisplay displaying:" << endl;
  cout << "Temperuture: " << std::fixed << cout.precision(10) << temperature << endl;
  cout << endl;
}
