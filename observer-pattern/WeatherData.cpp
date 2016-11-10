#include <stdio.h>
#include <string.h>
#include <iostream>
#include "WeatherData.hpp"
#include <sstream>

using namespace std;
WeatherData::WeatherData()
    : temperature(12.0), pressure(123.0), humidity(22.0)		//initiate m_id with a random number
{
//	cout << "default shape constructor " << endl;
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

void WeatherData::notifyObserver(Observer *ob)
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

int WeatherData::getHumidity()
{
  return humidity;
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
