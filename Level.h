//Level.h

#ifndef Level_H
#define Level_H

#include <iostream>
using namespace std;

class Level{
    private:
        int level;          
        /* int 'level' stores the current game level.*/
    public:
        Level();
        /* Default constructor is for begin to the game.*/
        
        int getLevel();
        void setLevel(int lvl);
        /* Get and set methods are used for the security of the private variable.*/
        
        void LevelUp();
         /*Level up is for starting of the next levels until game is over.*/
         
        virtual void AttackUp()=0;
        virtual void HealthUp()=0;
        virtual void DefenceUp()=0;
        virtual void HealthDown(int damage)=0;
        /* Virtual methods are declerated for sub-classes of 'level' class,
         * which are: Enemy and MainTower classes.*/
        
};

#endif

