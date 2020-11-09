#ifndef DEF_CHARACTER
#define DEF_CHARACTER

#include <iostream>

class Character{
protected:
	double posX;
	double posY;
	double vX;
	double vY;
	double acceleration;
	double deceleration_Coeff;
	double speed_threshold;
	int hp;
public:
	Character();
	~Character();
	void UpdatePos();
	void UpdateSpeed();
	void Update();

	double GetPosX();
	double GetPosY();
	double GetVX();
	double GetVY();
	int GetHP();
};
#endif