#include <iostream>

#include "Outfit.h"

using namespace std;

Outfit::Outfit()
{}


Outfit::Clothes Outfit::get_warmPants()
{
    return get_warmPants(c);
}
Outfit::Clothes Outfit::get_warmPants(Clothes c)
{
    c.value = 6;
    c.type = "warm pants";

    return c;
}


Outfit::Clothes Outfit::get_thinPants()
{
    return get_thinPants(c);
}
Outfit::Clothes Outfit::get_thinPants(Clothes c)
{
    c.value = 6;
    c.type = "thin pants";

    return c;
}


Outfit::Clothes Outfit::get_shorts()
{
    return get_shorts(c);
}
Outfit::Clothes Outfit::get_shorts(Clothes c)
{
    c.value = 2;
    c.type = "shorts";

    return c;
}


Outfit::Clothes Outfit::get_skirt()
{
    return get_skirt(c);
}
Outfit::Clothes Outfit::get_skirt(Clothes c)
{
    c.value = 1;
    c.type = "skirt";

    return c;
}


Outfit::Clothes Outfit::get_shortSleeve()
{
    return get_shortSleeve(c);
}
Outfit::Clothes Outfit::get_shortSleeve(Clothes c)
{
    c.value = 2;
    c.type = "short sleeve shirt";

    return c;
}


Outfit::Clothes Outfit::get_longSleeve()
{
    return get_longSleeve(c);
}
Outfit::Clothes Outfit::get_longSleeve(Clothes c)
{
    c.value = 4;
    c.type = "long sleeve shirt";

    return c;
}


Outfit::Clothes Outfit::get_heavyLongSleeve()
{
    return get_heavyLongSleeve(c);
}
Outfit::Clothes Outfit::get_heavyLongSleeve(Clothes c)
{
    c.value = 6;
    c.type = "warm long sleeve shirt";

    return c;
}


Outfit::Clothes Outfit::get_tanktop()
{
    return get_tanktop(c);
}
Outfit::Clothes Outfit::get_tanktop(Clothes c)
{
    c.value = 1;
    c.type = "tank top";

    return c;
}


Outfit::Clothes Outfit::get_coverUp()
{
    return get_coverUp(c);
}
Outfit::Clothes Outfit::get_coverUp(Clothes c)
{
    c.value = 2;
    c.type = "cover up";

    return c;
}


Outfit::Clothes Outfit::get_sweatshirt()
{
    return get_sweatshirt(c);
}
Outfit::Clothes Outfit::get_sweatshirt(Clothes c)
{
    c.value = 5;
    c.type = "sweatshirt";

    return c;
}


Outfit::Clothes Outfit::get_raincoat()
{
    return get_raincoat(c);
}
Outfit::Clothes Outfit::get_raincoat(Clothes c)
{
    c.value = 3;
    c.type = "raincoat";

    return c;
}


Outfit::Clothes Outfit::get_snowcoat()
{
    return get_snowcoat(c);
}
Outfit::Clothes Outfit::get_snowcoat(Clothes c)
{
    c.value = 10;
    c.type = "heavy coat";

    return c;
}

Outfit::Clothes Outfit::get_noJacket()
{
    return get_noJacket(c);
}
Outfit::Clothes Outfit::get_noJacket(Clothes c)
{
    c.value = 0;
    c.type = "no jacket";

    return c;
}


Outfit::Clothes Outfit::get_sandals()
{
    return get_sandals(c);
}
Outfit::Clothes Outfit::get_sandals(Clothes c)
{
    c.value = 0;
    c.type = "sandals";

    return c;
}


Outfit::Clothes Outfit::get_sneakers()
{
    return get_sneakers(c);
}
Outfit::Clothes Outfit::get_sneakers(Clothes c)
{
    c.value = 1;
    c.type = "sneakers";

    return c;
}


Outfit::Clothes Outfit::get_rainBoots()
{
    return get_rainBoots(c);
}
Outfit::Clothes Outfit::get_rainBoots(Clothes c)
{
    c.value = 2;
    c.type = "rain boots";

    return c;
}


Outfit::Clothes Outfit::get_heavyBoots()
{
    return get_heavyBoots(c);
}
Outfit::Clothes Outfit::get_heavyBoots(Clothes c)
{
    c.value = 2;
    c.type = "heavy boots";

    return c;
}