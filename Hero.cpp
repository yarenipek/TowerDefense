//Hero.cpp

#include "Hero.h"
#include "Grid.h"
#include "Level.h"

int Hero::getHealth(){
    return Health;
    /* Returns current health of the hero to where this mehtod is called.*/
}

void Hero::setHealth(int H){
     Health=H;
     /* Assigns 'H' parameter to private 'Health' variable.
     * Then 'Health' variable stores the current health of the hero.*/
}

int Hero::getAttack(){
	return Attack;
    /* Returns current attack power of the hero to where this mehtod is called.*/
}

void Hero::setAttack(int A){
	Attack=A ;
    /* Assigns 'A' parameter to private 'Attack' variable.
     * Then 'Attack' variable stores the current attack power of the hero.*/
}

int Hero::getDefence(){
	return Defence;
    /* Returns current defence power of the hero to where this mehtod is called.*/
}

void Hero::setDefence(int D){
	Defence=D;
    /* Assigns 'D' parameter to private 'Defence' variable.
     * Then 'Defence' variable stores the current defence of the hero.*/
}

void Hero::MoveHero(float x, float y){
    rlutil::locate(x,y);
    /* Sets current location of the hero.*/
}

void Hero::AttackUp(){
    Attack += (Attack*10)/100;
    /* Beginning of every level, hero's attack power is upgraded.*/
}

void Hero::AttackUp(int bonus){
    Attack += (Attack*bonus)/100 ;
    /* Player can win bonus points by killing the enemies,
     * and with this bonus point, s/he upgrades his hero's attack power.*/
}

void Hero::DefenceUp(){
    Defence += (Defence*10)/100;
    /* Beginning of every level, hero's defence power is upgraded.*/
}

void Hero::DefenceUp(int bonus){
    Defence += (Defence*bonus)/100;
    AttackUp(bonus);
    /*If the player buys an item, s/he upgrades his hero's defence and attack power.*/
}

void Hero::HealthUp(){
    Health += (Health*10)/100;
    /* Beginning of every level, hero's health is upgraded.*/
}

void Hero::HealthDown(int damage){
    Health -= (Health*damage)/100;
    /* If enemy attacks to hero, the player loses some defence power of the hero.*/
}

