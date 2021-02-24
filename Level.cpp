//Level.cpp

#include "Level.h"

Level::Level(){
    setLevel(1);
    /* Assigns 1 to 'level' variable as beggining of the game.*/
}

int Level::getLevel(){
    return level;
    /* Returns current level to where this mehtod is called.*/
}

void Level::setLevel(int lvl){
    level=lvl;
    /* Assigns 'lvl' parameter to private 'level' variable.
     * Then 'level' variable stores the current level.*/
}

void Level::LevelUp(){
    setLevel(getLevel()+1);
    setCoin(getCoin()*10/100);
    /* If player is successful and game is not over yet,
     * LevelUp method upgrades private 'level' variable by 1,
     * upgrades players coin and player starts to new level.*/
}
