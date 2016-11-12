#ifndef TEMPERATUREONLYDISPLAY_HPP
#define TEMPERATUREONLYDISPLAY_HPP
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cmath>
#include "WeatherData.hpp"
#include "Observer.hpp"
#include "DisplayElements.hpp"

using namespace std;

class TemperatureOnlyDisplay : public Observer, public DisplayElement	//derived from shape, access specifier public
{
private:
	WeatherData *weatherData;
	double temperature;
public:
	TemperatureOnlyDisplay(WeatherData *wd);

	void update();
	void display();


};

#endif
