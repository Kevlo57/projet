#ifndef DEF_ZOMBIE
#define DEF_ZOMBIE

#include <iostream>


class Zombie{

	private:

		double vx;
		double vy;
		double posX;
		double posY;

	public:

		Zombie();
		~Zombie();

		double GetVx();
		double GetVy();;
		double GetPosX();
		double GetPosY();

};

#endif