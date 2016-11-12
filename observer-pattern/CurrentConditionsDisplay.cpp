#include <stdio.h>
#include <string.h>
#include <iostream>
#include "CurrentConditionsDisplay.hpp"
#include <sstream>

using namespace std;

CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData *wd)
{
  weatherData = wd;
  wd->registerObserver(this);
}

void CurrentConditionsDisplay::update()
{
  temperature = weatherData->getTemperature();
  humidity = weatherData->getHumidity();
  pressure = weatherData->getPressure();
  display();
}

void CurrentConditionsDisplay::display()
{
  cout << "CurrentConditionsDisplay displaying:" << endl;
  cout << "Temperuture: " << std::fixed << cout.precision(10) << temperature << endl;
  cout << "Humidity: " << humidity << endl;
  cout << "Pressure: " << pressure << endl;
  cout << endl;
}
