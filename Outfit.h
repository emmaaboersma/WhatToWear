#ifndef __OUTFIT_H__
#define __OUTFIT_H__

#include <iostream>
#include <vector>

using namespace std;

class Outfit {

    public:

        Outfit();

        struct Clothes {
            int value;
            string type;
        };

        // bottoms
        Clothes get_warmPants();
        Clothes get_thinPants();
        Clothes get_shorts();
        Clothes get_skirt();

        // tops
        Clothes get_shortSleeve();
        Clothes get_longSleeve();
        Clothes get_heavyLongSleeve();
        Clothes get_tanktop();

        // jackets
        Clothes get_coverUp();
        Clothes get_sweatshirt();
        Clothes get_raincoat();
        Clothes get_snowcoat();
        Clothes get_noJacket();

        // shoes
        Clothes get_sandals();
        Clothes get_sneakers();
        Clothes get_rainBoots();
        Clothes get_heavyBoots();

    private:

        Clothes get_warmPants(Clothes c);
        Clothes get_thinPants(Clothes c);
        Clothes get_shorts(Clothes c);
        Clothes get_skirt(Clothes c);

        // tops
        Clothes get_shortSleeve(Clothes c);
        Clothes get_longSleeve(Clothes c);
        Clothes get_heavyLongSleeve(Clothes c);
        Clothes get_tanktop(Clothes c);

        // jackets
        Clothes get_coverUp(Clothes c);
        Clothes get_sweatshirt(Clothes c);
        Clothes get_raincoat(Clothes c);
        Clothes get_snowcoat(Clothes c);
        Clothes get_noJacket(Clothes c);

        // shoes
        Clothes get_sandals(Clothes c);
        Clothes get_sneakers(Clothes c);
        Clothes get_rainBoots(Clothes c);
        Clothes get_heavyBoots(Clothes c);

        Clothes c;

};

#endif 