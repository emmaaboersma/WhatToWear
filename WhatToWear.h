#ifndef __WHATTOWEAR_H__
#define __WHATTOWEAR_H__

#include <iostream>
#include <fstream>

#include "Weather.h"
#include "Outfit.h"
#include "Warmth.h"

using namespace std;

class WhatToWear
{

    public:
        WhatToWear();

        void run();

    private:
        
        void commandLoop();
        void quit();
        bool currTempPrompt();
        bool windPrompt();
        bool dayPrompt();
        bool precipPrompt();

        Weather w;
        Warmth f;

};

#endif