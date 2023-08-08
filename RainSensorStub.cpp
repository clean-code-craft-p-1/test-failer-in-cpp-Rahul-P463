#include "RainSensorStub.h"

int WeatherSpace::RainSensorStub::Humidity() const
{
	return 72;
}

int WeatherSpace::RainSensorStub::Precipitation() const
{
	return 70;
}

double WeatherSpace::RainSensorStub::TemperatureInC() const
{
	return 35;
}

int WeatherSpace::RainSensorStub::WindSpeedKMPH() const
{
	return 30;
}
