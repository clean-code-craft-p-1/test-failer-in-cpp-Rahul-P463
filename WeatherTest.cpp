#include "WeatherTest.h"
#include<iostream>
#include <assert.h>
#include "SensorStub.h"
#include "WReport.h"
#include "RainSensorStub.h"
#include <string>
using namespace std;

void WeatherSpace::TestRainy()
{
	SensorStub sensor;
	string report = Report(sensor);
	std::cout << report << std::endl;
	assert(report.find("rain") != string::npos);
}

void WeatherSpace::TestHighPrecipitation()
{
	// This instance of stub needs to be different-
	// to give high precipitation (>60) and low wind-speed (<50)
	RainSensorStub sensor;

	// strengthen the assert to expose the bug
	// (function returns Sunny day, it should predict rain)
	string report = Report(sensor);
	assert(report.find("rain") != string::npos);
}