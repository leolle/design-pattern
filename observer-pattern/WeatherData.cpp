#include <stdio.h>
#include <string.h>
#include <iostream>
#include "WeatherData.hpp"
#include "Observer.hpp"
#include <sstream>

using namespace std;
WeatherData::WeatherData()
    : temperature(12234.34), pressure(123.234), humidity(22.65346)
{
	cout << "default WeatherData constructor " << endl;
}

//copy constructor
WeatherData::WeatherData(const WeatherData& w)
    : temperature(12), pressure(123), humidity(22)		//initiate m_id with a random number
{
//	cout << "copy shape constructor." << endl;
}

void WeatherData::removeObserver(Observer *ob)
{
  std::vector<Observer *>::iterator found = std::find(observers.begin(), observers.end(), ob);
  if (found != observers.end())
  {
    observers.erase(found);
  }
}

void WeatherData::notifyObserver()
{
  for (std::vector<Observer *>::iterator it = observers.begin(); it != observers.end(); it++)
  {
    (*it) -> update();
  }

}

void WeatherData::registerObserver(Observer *ob)
{
  observers.push_back(ob);
}

double WeatherData::getHumidity()
{
  return humidity;
}

double WeatherData::getPressure()
{
  return pressure;
}

double WeatherData::getTemperature()
{
  return temperature;
}

void WeatherData::measurementChanged()
{
  notifyObserver();
}

void WeatherData::setMeasurement(double t, double h, double p)
{
  temperature = t;
  pressure = p;
  humidity = h;
  measurementChanged();
}
// Assignment operator.
WeatherData& WeatherData::operator = (const WeatherData& source)
{
	// Avoid doing assign to myself
	if (this == &source)
		return *this;

	temperature = source.temperature;
  pressure = source.pressure;
  humidity = source.humidity;

	return *this;
}
