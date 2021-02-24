#ifndef MÝNÝTOWER_H
#define MÝNÝTOWER_H
#include <iostream>

using namespace std;

class MiniTower : public Grid , public Level {

private:
	float x;
	float y;
	int Attack;

public:
	void Upgrade();

	float getX();

	void setX(float x);

	float getY();

	void setY(float y);

	int getAttack();

	void setAttack(int gelen_atack_degeri);
};

#endif
