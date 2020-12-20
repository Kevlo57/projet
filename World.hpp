#ifndef DEF_WORLD
#define DEF_WORLD

#include "Player.hpp"
#include "Gun.hpp"

#include "Wave.hpp"
#include <iostream>


class World{

	private:

		Player* player;
		Gun* gun;
		Wave* wave

	public:

		World();
		~World();

};

#endif