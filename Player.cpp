#include "Player.h"
#include "rlutil.h"

int Player::coin=0;

int Player::BuyTower() {
	//sira numarasi alýnacak ve ona göre bir deger atanacak. 1 - 6 arasý olur.
	int sira = 0;
	cout << "Enter the Number of Tower : ";
	cin >> sira;
	
	return sira ;
}

void Player::BuyItem() {
	//item classlarýndan gelen degerler eklenecek.
}

string Player::getName() {
	return this->Name;//name i döndürür.
}

void Player::setName(string Name) {
	this->Name = Name;//name i atar.
}

int Player::getCoin() {
	return this->Coin;//coin i döndürür.
}

void Player::setCoin(int Coin) {
	//fonksiyona gelen parametreye deðer kontrolü yapýyor ona göre iþlem yapmak için.
	if( Coin >= 0 )
	{
		this->Coin = this->Coin + Coin;
	}
	else{
		this->Coin = this->Coin - Coin;
	}
	
}

int Player::getScore() {
	return this->Score;//skoru dödnrüdür.
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
