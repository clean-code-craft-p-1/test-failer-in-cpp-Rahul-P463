#pragma once
#include<string>
#include "IWeather.h"

using namespace std;

namespace WeatherSpace
{
	string Report(const IWeatherSensor& sensor);
}
