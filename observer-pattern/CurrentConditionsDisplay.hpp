#ifndef POINT_HPP
#define POINT_HPP
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cmath>
#include "WeatherData.hpp"
#include "Observer.hpp"
#include "DisplayElements.hpp"

using namespace std;

class CurrentConditionsDisplay : public Observer, public DisplayElement	//derived from shape, access specifier public
{
private:
	WeatherData *weatherData;
	double temperature;
	double humidity;
	double pressure;
public:
	CurrentConditionsDisplay(WeatherData *wd);

	void update();
	void display();


};

#endif // Point_H
