#include <iostream>

#include "Weather.h"

using namespace std;

// default constructor
Weather::Weather()
{
    today.currTemp = 0;
    today.windSpeed = 0;
    today.dayType = 0;
    today.precipitation = 0;

}

int Weather::get_currTemp()
{
    return get_currTemp(today);
}
int Weather::get_currTemp(Day today)
{
    return today.currTemp;
}
void Weather::set_currTemp(int temp)
{
    today.currTemp = temp;
}


int Weather::get_windSpeed()
{
    return get_windSpeed(today);
}
int Weather::get_windSpeed(Day today)
{
    return today.windSpeed;
}
void Weather::set_windSpeed(int wind)
{
    today.windSpeed = wind;
}


int Weather::get_dayType()
{
    return get_dayType(today);
}
int Weather::get_dayType(Day today)
{
    return today.dayType;
}
void Weather::set_dayType(string day)
{
    if (day == "sunny")
        today.dayType = -1;
    else if (day == "cloudy")
        today.dayType = 1;
}


int Weather::get_precipitation()
{
    return get_precipitation(today);
}
int Weather::get_precipitation(Day today)
{
    return today.precipitation;
}
void Weather::set_precipitation(string type)
{
    if (type == "clear")
        today.precipitation = 0;
    else if (type == "rain")
        today.precipitation = 1;
    else if (type == "snow")
        today.precipitation = 2;
}