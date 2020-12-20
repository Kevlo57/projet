#ifndef DEF_PLAYER
#define DEF_PLAYER

#include "Gun.hpp"
#include <iostream>

class Player{

	private:

		int hp;
		double vx;
		double vy;
		double posX;
		double posY;

	public:

		Player();
		~Player();

		double GetVx();
		double GetVy();;
		double GetPosX();
		double GetPosY();
		int GetHp();

		void MoveLeft();
		void MoveRight();
	    void MoveTop();
		void MoveBot();

};

#endif