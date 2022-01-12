#ifndef __WEATHER_H__
#define __WEATHER_H__

#include <iostream>

using namespace std;

class Weather {

    public:
        Weather();

        // currTemp
        int get_currTemp();
        void set_currTemp(int temp);
        // wind
        int get_windSpeed();
        void set_windSpeed(int wind);
        // day
        int get_dayType();
        void set_dayType(string day);
        // precipitation
        int get_precipitation();
        void set_precipitation(string type);




    private:

    struct Day {
        int currTemp;
        int windSpeed;
        int dayType;
        int precipitation;
    };

    int get_currTemp(Day today);
    int get_windSpeed(Day today);
    int get_dayType(Day today);
    int get_precipitation(Day today);

    Day today;

};

#endif 