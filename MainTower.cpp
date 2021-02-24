//MainTower.cpp

#include"MainTower.h" 
#include"Grid.h"
#include"Level.h"
//Sets x and y coordinates of the main tower.
MainTower :: MainTower()
{
	setCoordX() ;
	setCoordY() ;
	Locate() ;
	
}

//returns the health value of Main Tower
int MainTower::getHealth() {
	return Health ;
}

//sets the health value of Main Tower
void MainTower::setHealth(int H) {
    Health = H ;
}

//upgrades health value of Main Tower
void MainTower::HealthUp(int H) {
	Health += (Health*5)/100 ;
}

//checks if the health is 0 or not and returns 1 or 0.
int checkTower()
{
    if(Health == 0)
        return 0 ;
        
    else
        return 1 ;
}
