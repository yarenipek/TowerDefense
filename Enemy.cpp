//Enemy.cpp

#include "Enemy.h"

int Enemy::getHealth(){
    return Health;
    /* Returns current health of the enemy to where this mehtod is called.*/
}

void Enemy::setHealth(int H){
     Health=H;
     /* Assigns 'H' parameter to private 'Health' variable.
     * Then 'Health' variable stores the current health of the enemy.*/
}

int Enemy::getAttack(){
	return Attack;
    /* Returns current attack power of the enemy to where this mehtod is called.*/
}

void Enemy::setAttack(int A){
	Attack=A ;
    /* Assigns 'A' parameter to private 'Attack' variable.
     * Then 'Attack' variable stores the current attack power of the each enemy.*/
}

void Enemy::Shape(){
    Shape='X';
    rlutil::setColor(7);
    /* The player sees the enemy as grey-colored X on the screen.*/
}

int Enemy::MoveEnemy(){
    if(getHealth()!=0){
        setCoordX(getCoordX()+1);
        Locate(getCoordX(),getCoordY);
        /*If the enemy is not defeated yet, it keeps moving to the main tower along x coordinate.*/
        return 1;
    }
    else return 0;   
    /* If enemy is dead, this function return 0 to main and program deletes the object in main.*/
}

void Enemy::AttackUp(){
    Attack += (Attack*10)/100;
    /* Beginning of every level, each enemy's attack power is upgraded.*/
}

void Enemy::HealthUp(){
    Health += (Health*10)/100;
    /* Beginning of every level, each enemy's health is upgraded.*/
}

void Enemy::HealthDown(int damage){
    Health -= (Health*damage)/100;
    /* If sentinel attacks to enemy, enemy loses health.*/
}
