#ifndef __WARMTH_H__
#define __WARMTH_H__

#include <iostream>
#include <vector>

#include "Weather.h"
#include "Outfit.h"

using namespace std;

class Warmth {

    public:

        Warmth();

        void get_weatherWarmth(Weather w);
        

    private:

        void outfitPusher(Weather w);
        void calcOutfits(int warmth_points);

        int windWarmth(int wind_speed);
        int currTempWarmth(int curr_temp);
        int dayTypeWarmth(int day_type);
        int precipWarmth(int precip);


        int warmth_points;
        Outfit o;

        vector<Outfit::Clothes> pants;
        vector<Outfit::Clothes> shoes;
        vector<Outfit::Clothes> shirts;
        vector<Outfit::Clothes> jackets;

};


#endif