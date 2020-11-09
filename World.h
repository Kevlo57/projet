#ifndef DEF_WORLD
#define DEF_WORLD

#include <iostream>
#include "Player.h"

class World{
private:
	Player* p;
public:
	World();
	~World();
	Player* GetPlayer();
};
#endif