#include "Character.h"

Character::Character() : posX(350), posY(350), vX(0), vY(0), speed_threshold(0.001), deceleration_Coeff(0.999), acceleration(0.1){}

Character::~Character(){
	
}

void Character::Update(){
	UpdatePos();
	UpdateSpeed();
}

void Character::UpdateSpeed(){
	if(vX < speed_threshold && vX > -speed_threshold){
		vX = 0;
	}else{
		vX *= deceleration_Coeff;
	}
	if(vY < speed_threshold && vY > -speed_threshold){
		vY = 0;
	}else{
		vY *= deceleration_Coeff;
	}
}

void Character::UpdatePos(){
	posX += vX;
	posY += vY;
}

double Character::GetPosX(){
	return posX;
}

double Character::GetPosY(){
	return posY;
}