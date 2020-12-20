#ifndef DEF_GAME
#define DEF_GAME

#include "World.hpp"
#include <iostream>


class Game{

	private:

		World* w;
		int over = 1;

	public:

		Game();
		~Game();

		void Launch();
		void Close();

};

#endif