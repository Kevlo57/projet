#ifndef DEF_GAME
#define DEF_GAME

#include <iostream>
#include <SDL2/SDL.h>

class Game{
private:
	world* w;
	bool over;
	SDL_Window* window;
	SDL_Event events;
	SDL_Renderer* screen;
public:
	Game();
	~Game();
	void Start();
	void Stop();
};
#endif
