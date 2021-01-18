#include "Road.h"
#include "Bike.h"

int main()
{
    Road road(20);
    Bike bike;
    bike.run(road);

    Road longRoad(40);
    bike.run(longRoad);
    return 0;
}
