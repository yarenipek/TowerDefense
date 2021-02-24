//Grid.h

#ifndef Grid_H_
#define Grid_H_

#include "rlutil.h"
#include <iostream>
using namespace std;

class Grid {
    private:
        float CoordX;
        /* float CoordX stores the current X coordinate of the object. */
        float CoordY;
        /* float CoordY stores the current Y coordinate of the object. */
    public:
        Grid(float x, float y);
        /* Default constructor is used in beginning of the game.*/
        
        float getCoordX();
        float getCoordY();
        void setCoordX(float x);
        void setCoordY(float y);
        /* Get and set methods are used for the security of the private variables.*/
};

#endif