#include "SensorStub.h"

int WeatherSpace::SensorStub::Humidity() const
{
	return 72;
}

int WeatherSpace::SensorStub::Precipitation() const
{
	return 70;
}

double WeatherSpace::SensorStub::TemperatureInC() const
{
	return 26;
}

int WeatherSpace::SensorStub::WindSpeedKMPH() const
{
	return 52;
}


