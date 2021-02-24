#ifndef PLAYER_H
#define PLAYER_H

class Player : public Grid {

private:
	string Name;
	static int Coin;
	int Score;

public:
	int BuyTower();

	void BuyItem();

	string getName();

	void setName(string Name);

	int getCoin();

	void setCoin(int Coin);

	int getScore();

	void setScore(int Score);
};

#endif
