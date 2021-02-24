//Enemy.h

#ifndef Enemy_H_
#define Enemy_H_ 

#include "Level.h"
#include "Grid.h"
#include "rlutil.h"
#include <iostream>
using namespace std;

class Enemy: public Level, public Grid{
    private:
        int Health;
        /* int 'Health' stores the current health of the each enemy.*/
        int Attack;
        /* int 'Attack' stores the current attack power of the each enemy.*/
        char Shape;
        /* char 'Shape' refers to shape of the enemies.*/
    public:
        Enemy();
         /* Default constructor is for begin to the new level.*/
    
        int getHealth();
        void setHealth(int H);
        int getAttack();
        void setAttack(int A);
        /* Get and set methods are used for the security of the private variables.*/
        
        void Shape();
        /* Arrenges the enemy's shape and background.*/
        
        int MoveEnemy();
        /* Controls enemy's moves until the enemy is destroyed by the sentinel.*/
 
        void AttackUp();
        void HealthUp();
        /* If player is successful and game is not over yet,
         * AttackUp and HealthUp methods upgrades private 'Health' and 'Attack' variable of each enemy,
         * and player starts to new level with stronger enemies.*/
         
        void HealthDown(int damage);
};

#endif
