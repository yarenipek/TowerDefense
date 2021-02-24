//Grid.cpp

#include "Grid.h"

void Grid::Locate(float x, float y){
    rlutil::locate(x,y);
    /* Changes current positions of the object.*/
}

void Grid::setCoordX(float x){
    CoordX=x;
    /* Assigns 'x' parameter to private 'CoordX' variable.
     * Then 'CoordX' variable stores the current x position.*/
}

void Grid::setCoordY(float y){
    CoordY=y;
    /* Assigns 'y' parameter to private 'CoordY' variable.
     * Then 'CoordY' variable stores the current y position.*/
}

float Grid::getCoordX{
    return CoordX;
    /* Returns current x coordinate to where this mehtod is called.*/
}

float Grid::getCoordY{
    return CoordY;
    /* Returns current y coordinate to where this mehtod is called.*/
}


