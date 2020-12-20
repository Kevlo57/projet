#include "Bullets.hpp"

	
	Bullets::Bullets(){
		vx = 0;
		vy = 0;
		posX = 0;
		posY = 0;
		p = 0;
	}

	Bullets::~Bullets(){

	}

	double Bullets::GetVx(){
		return vx;
	}

	double Bullets::GetVy(){
		return vy;
	}

	double Bullets::GetPosX(){
		return posX;
	}

	double Bullets::GetPosY(){
		return posY;
	}

	int Bullets::GetP(){
		return p;
	}

	void Bullets::Used(){
		p = 1;
	}

	void Bullets::Reset(){
		p = 0;
	}