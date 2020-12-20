#include "Zombie.hpp"

	Zombie::Zombie(){
		vx = 0;
		vy = 0;
		posX = 0;
		posY = 0;
	}

	Zombie::~Zombie(){

	}

	double Zombie::GetVx(){
		return vx;
	}

	double Zombie::GetVy(){
		return vy;
	}

	double Zombie::GetPosX(){
		return posX;
	}

	double Zombie::GetPosY(){
		return posY;
	}
