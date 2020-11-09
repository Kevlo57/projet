#include "World.h"

World::World(){
	p = new Player();
}

World::~World(){
	delete p;
}

Player* World::GetPlayer(){
	return p;
}