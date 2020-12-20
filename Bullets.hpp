#ifndef DEF_BULLETS
#define DEF_BULLETS

#include <iostream>


class Bullets{

	private:

		double vx;
		double vy;
		double posX;
		double posY;
		int p;

	public:

		Bullets();
		~Bullets();

		double GetVx();
		double GetVy();
		double GetPosX();
		double GetPosY();
		int GetP();

		void Used();
		void Reset();
};

#endif