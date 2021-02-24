//Hero.h

#ifndef Hero_H_
#define Hero_H_

#include "Level.h"
#include "Grid.h"
#include "rlutil.h"
#include <iostream>
using namespace std ;

class Hero:public Level, public Grid{
   private:
        int Health;
        /* int 'Health' stores the current health of the hero.*/
        int Attack;
        /* int 'Attack' stores the current attack power of the hero.*/
        int Defence;
        /* int 'Defence' stores the current defence power of the hero.*/
    public:
        int getHealth();
        void setHealth(int H);
        int getAttack();
        void setAttack(int A);
        int getDefence();
        void setDefence(int D);
        /* Get and set methods are used for the security of the private variables.*/

        void MoveHero();
        /*Moves hero according to keyboard commands.*/
        
        void AttackUp();
        void DefenceUp();
        void HealthUp();
        /* If player is successful and game is not over yet,
         * AttackUp, DefenceUp and HealthUp methods upgrades private 'Health', 'Defence' and 'Attack' variable the hero,
         * and player starts to new level with stronger hero.*/
         
        void HealthDown(int damage);
         
        void AttackUp(int bonus);
        void DefenceUp(int bonus);

};

#endif