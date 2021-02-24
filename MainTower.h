#ifndef MainTower_H_
#define MainTower_H_

#include <iostream>

using namespace std ;

class MainTower : public Level , public Grid
{
    private :
    //Health stores the health value of the Main Tower.
    int Health;
    
    
    
    public :
    //Sets x and y coordinates of the main tower.
    MainTower();
    
    /* If player is successful and game is not over yet,
     * AttackUp and HealthUp methods upgrades private 'Health' and 'Attack' variable of each enemy,
     * and player starts to new level with stronger enemies.*/  
     
	int getHealth();
	void setHealth(int H);


	//Upgrades the health value of Main Tower
	void HealthUp(int H);
	
	//checks if the health is 0 or not and returns 1 or 0.
    int checkTower();
    
    
    
    
};

#endif
