#include "Player.hpp"
	
	Player::Player(){
		hp = 10;
		g = g;
		vx = 0;
		vy = 0;
		posX = 0;
		posY = 0;
	}

	Player::~Player(){

	}

	double Player::GetVx(){
		return vx;
	}

	double Player::GetVy(){
		return vy;
	}

	double Player::GetPosX(){
		return posX;
	}

	double Player::GetPosY(){
		return posY;
	}

	int Player::GetHp(){
		return hp;
	}

	void Player::MoveLeft(){
		vx = vx-0.5;
	}

	void Player::MoveRight(){
		vx = vx+0.5;
	}

	void Player::MoveTop(){
		vy = vy + 0.5;
	}

	void Player::MoveBot(){
		vy = vy - 0.5;
	}