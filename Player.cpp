#include "Player.h"
#include "rlutil.h"

int Player::coin=0;

int Player::BuyTower() {
	//sira numarasi al�nacak ve ona g�re bir deger atanacak. 1 - 6 aras� olur.
	int sira = 0;
	cout << "Enter the Number of Tower : ";
	cin >> sira;
	
	return sira ;
}

void Player::BuyItem() {
	//item classlar�ndan gelen degerler eklenecek.
}

string Player::getName() {
	return this->Name;//name i d�nd�r�r.
}

void Player::setName(string Name) {
	this->Name = Name;//name i atar.
}

int Player::getCoin() {
	return this->Coin;//coin i d�nd�r�r.
}

void Player::setCoin(int Coin) {
	//fonksiyona gelen parametreye de�er kontrol� yap�yor ona g�re i�lem yapmak i�in.
	if( Coin >= 0 )
	{
		this->Coin = this->Coin + Coin;
	}
	else{
		this->Coin = this->Coin - Coin;
	}
	
}

int Player::getScore() {
	return this->Score;//skoru d�dnr�d�r.
}

void Player::setScore(int Score) {
	
	if( Score >= 0 )
	{
		this->Score = this->Score + Score;
	}
	else{
		this->Score = this->Score - Score;
	}
	
}
