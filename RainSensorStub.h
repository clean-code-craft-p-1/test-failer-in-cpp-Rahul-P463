#pragma once
#include "IWeather.h"

namespace WeatherSpace
{
	class RainSensorStub : public IWeatherSensor {
		int Humidity() const override;
		int Precipitation() const override;
		double TemperatureInC() const override;
		int WindSpeedKMPH() const override;
	};
}
