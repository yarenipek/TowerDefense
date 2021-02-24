#include "MiniTower.h"

void MiniTower::Upgrade() {
	//menüye göre ayarlanacak. secilen deger göre 
}

float MiniTower::getX() {
	return this->x;
}

void MiniTower::setX(float x) {
	this->x = x;
}

float MiniTower::getY() {
	return this->y;
}

void MiniTower::setY(float y) {
	this->y = y;
}

int MiniTower::getAttack() {
	return this->Attack;
}

void MiniTower::setAttack(int gelen_atack_degeri) {
	this->Attack = this->Attack + gelen_atack_degeri;//mini kulenin atak deðeri fonksiyona gelen parametere ile toplanýyor.
}
