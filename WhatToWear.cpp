#include <iostream>
#include <fstream>

#include "Weather.h"
#include "Outfit.h"
#include "Warmth.h"
#include "WhatToWear.h"


WhatToWear::WhatToWear()
{}

void WhatToWear::commandLoop()
{
        if (not currTempPrompt())
        {
            cout << "Invalid temperature. Goodbye.\n";
            return;
        }
            

        if (not windPrompt())
        {
            cout << "Invalid speed. Goodbye.\n";
            return;
        }

        if (not dayPrompt())
        {
            cout << "That wasn't an option. Goodbye.\n";
            return;
        }

        if (not precipPrompt())
        {
            cout << "That wasn't an option. Goodbye.\n";
            return;
        }


        cout << "Cool! You should wear ";
        f.get_weatherWarmth(w);
        cout << ".\n";

        cout << "I hope these suggestions were helpful! Goodbye.\n";

}

void WhatToWear::run()
{
    cout << endl;
    cout << "Welcome to WhatToWear!\nAnswer some questions about" << 
    " the weather and I'll tell you what to wear!\n";

    cout << endl;
    cout << "Would you like to begin? (begin/quit)\n";

    string start;
    cin >> start;

    if (start == "begin")
        commandLoop();
    else if (start == "quit")
        quit();
    else
        cout << "That's not an option. Goodbye.\n";
}


void WhatToWear::quit()
{

    cout << "Thank you for using WhatToWear! Goodbye.\n";

    return;

}

bool WhatToWear::currTempPrompt()
{
    int nums;   

    cout << "What is the current temperature? (F)\n";
        cin >> nums;
        if (nums > -10 and nums < 120)
        {
            w.set_currTemp(nums);
            return true;
        }
        else
            return false;
}

bool WhatToWear::windPrompt()
{
    int nums;

    cout << "What is the wind speed? (mph)\n";
        cin >> nums;
        if (nums > 0 and nums < 30)
        {
            w.set_windSpeed(nums);
            return true;
        }
        else
            return false;
            
}

bool WhatToWear::dayPrompt()
{
    string words;

    cout << "Is it sunny or cloudy?\n";
        cin >> words;
        // cout << words << endl;
        if (words != "sunny" and words != "cloudy")
            return false;
        else
        {
            w.set_dayType(words);
            return true;
        }
            
}

bool WhatToWear::precipPrompt()
{
    string words;

    cout << "Is it clear or is there rain/snow?\n";
        cin >> words;
        if (words != "clear" and words != "rain" and words != "snow")
            return false;
        else
        {
            w.set_precipitation(words);
            return true;
        }
            
}