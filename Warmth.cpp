#include <iostream>
#include <vector>
#include <cstdlib>

#include "Weather.h"
#include "Outfit.h"
#include "Warmth.h"

using namespace std;

Warmth::Warmth()
{
    warmth_points = 0;
}

void Warmth::calcOutfits(int warmth_points)
{

    Outfit::Clothes fit;
    fit.value = 0;
    fit.type = "";

    int count = rand() % shoes.size();
    fit.value += shoes[count].value;
    fit.type += shoes[count].type;
    fit.type += ", ";

    count = rand() % pants.size();
    fit.value += pants[count].value;
    fit.type += pants[count].type;
    fit.type += ", ";

    count = rand() % shirts.size();
    fit.value += shirts[count].value;
    fit.type += shirts[count].type;
    fit.type += ", ";

    count = rand() % jackets.size();
    fit.type += jackets[count].type;
    fit.value += jackets[count].value;

    while (abs(warmth_points - fit.value) > 3)
    {
        fit.value = 0;
        fit.type = "";

        count = rand() % shoes.size();
        fit.value += shoes[count].value;
        fit.type += shoes[count].type;
        fit.type += ", ";

        count = rand() % pants.size();
        fit.value += pants[count].value;
        fit.type += pants[count].type;
        fit.type += ", ";

        count = rand() % shirts.size();
        fit.value += shirts[count].value;
        fit.type += shirts[count].type;
        
        count = rand() % jackets.size();
        fit.type += ", ";
        fit.type += jackets[count].type;
        fit.value += jackets[count].value;

    }

    cout << fit.type;

}

void Warmth::get_weatherWarmth(Weather w)
{

    warmth_points += currTempWarmth(w.get_currTemp());
    warmth_points += windWarmth(w.get_windSpeed());
    warmth_points += dayTypeWarmth(w.get_dayType());
    warmth_points += precipWarmth(w.get_precipitation());

    if (warmth_points > 25)
        warmth_points = 25;

    outfitPusher(w);
    calcOutfits(warmth_points);

}


void Warmth::outfitPusher(Weather w)
{

    if (w.get_currTemp() < 60)
    {
        pants.push_back(o.get_warmPants());

        shirts.push_back(o.get_tanktop());
        shirts.push_back(o.get_shortSleeve());
        shirts.push_back(o.get_longSleeve());
        shirts.push_back(o.get_heavyLongSleeve());

        if (w.get_currTemp() < 50)
            jackets.push_back(o.get_snowcoat());

        jackets.push_back(o.get_coverUp());
        jackets.push_back(o.get_raincoat());
        jackets.push_back(o.get_sweatshirt());

        shoes.push_back(o.get_sneakers());
        shoes.push_back(o.get_heavyBoots());
    
    }
    else
    {
        pants.push_back(o.get_shorts());
        pants.push_back(o.get_thinPants());

        // if wind is strong don't suggest skirt
        if(w.get_windSpeed() < 5)
            pants.push_back(o.get_skirt());

        shirts.push_back(o.get_tanktop());
        shirts.push_back(o.get_shortSleeve());
        shirts.push_back(o.get_longSleeve());

        jackets.push_back(o.get_noJacket());
        jackets.push_back(o.get_coverUp());
        jackets.push_back(o.get_raincoat());
        jackets.push_back(o.get_sweatshirt());

        shoes.push_back(o.get_sandals());
        shoes.push_back(o.get_sneakers());
        shoes.push_back(o.get_heavyBoots());
    }


    // if precipitation != 0, dont suggest SANDALS
    if (w.get_precipitation() == 1)
    {
        shoes.clear();
        shoes.push_back(o.get_rainBoots());
    }
    else if (w.get_precipitation() == 2 or w.get_currTemp() < 45)
    {
        jackets.clear();
        shoes.clear();

        jackets.push_back(o.get_snowcoat());
        shoes.push_back(o.get_heavyBoots());
    }

}


int Warmth::windWarmth(int wind_speed)
{
    if (wind_speed >= 15)
        return 7;
    else if (wind_speed >= 10)
        return 4;
    else if (wind_speed < 10 and wind_speed >= 7)
        return 2;
    else if (wind_speed < 7)
        return 0;
}

int Warmth::currTempWarmth(int curr_temp)
{
    if (curr_temp > 110)
        return 0;
    else if (curr_temp >= 106 and curr_temp <= 110)
        return 1;
    else if (curr_temp >= 101 and curr_temp <= 105)
        return 2;
    else if (curr_temp >= 96 and curr_temp <= 100)
        return 3;
    else if (curr_temp >= 91 and curr_temp <= 95)
        return 4;
    else if (curr_temp >= 86 and curr_temp <= 90)
        return 5;
    else if (curr_temp >= 81 and curr_temp <= 85)
        return 6;
    else if (curr_temp >= 76 and curr_temp <=80)
        return 7;
    else if (curr_temp >= 71 and curr_temp <= 75)
        return 8;
    else if (curr_temp >= 66 and curr_temp <= 70)
        return 9;
    else if (curr_temp >= 61 and curr_temp <= 65)
        return 10;
    else if (curr_temp >= 56 and curr_temp <= 60)
        return 11;
    else if (curr_temp >= 51 and curr_temp <= 55)
        return 12;
    else if (curr_temp == 46 or curr_temp == 50)
        return 13;
    else if (curr_temp == 41 or curr_temp == 45)
        return 14;
    else if (curr_temp >= 36 and curr_temp <= 40)
        return 15;
    else if (curr_temp >= 31 and curr_temp <= 35)
        return 16;
    else if (curr_temp >= 26 and curr_temp <= 30)
        return 17;
    else if (curr_temp >= 21 and curr_temp <= 25)
        return 18;
    else if (curr_temp >= 16 and curr_temp <= 20)
        return 19;
    else if (curr_temp >= 11 and curr_temp <= 25)
        return 20;
    else if (curr_temp >= 6 and curr_temp <= 10)
        return 21;
    else if (curr_temp >= 1 and curr_temp <= 5)
        return 22;
    else if (curr_temp < 0)
        return 23;

}

int Warmth::dayTypeWarmth(int day_type)
{
    return day_type;
}

int Warmth::precipWarmth(int precip)
{
    return precip;
}