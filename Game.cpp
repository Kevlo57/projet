#include "Game.h"

Game::Game(){
	if(SDL_Init(SDL_INIT_VIDEO) < 0){
		printf("Erreur d'initialisation de la SDL: %s",SDL_GetError());
		SDL_Quit();
	}
	window = SDL_CreateWindow("Fenetre SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,600, 600, SDL_WINDOW_RESIZABLE);
	if(window == NULL){
		printf("Erreur de la creation d'une fenetre: %s",SDL_GetError());
		SDL_Quit();
	}
	world = new World();
	screen = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
	over = false;
}
Game::~Game(){
	world->~World();
}

void Game::Start(){
	while(!over){
		SDL_RenderClear(screen);
		SDL_RenderCopy(screen,NULL,NULL,NULL);
		SDL_RenderCopy(screen,NULL,NULL,NULL);
		while(SDL_PollEvent(&events))
		switch(events.type){
			case SDL_QUIT:
				over = true; break;
			case SDL_KEYDOWN:
			switch(events.key.keysym.sym){
				case SDLK_ESCAPE:
					over = true; break;
			}
		}
		w->GetPlayer()->Update();
		SDL_RenderPresent(screen);
	}
}

void Game::Stop(){	
	SDL_DestroyRenderer(screen);
	SDL_DestroyWindow(window);
	SDL_Quit();
}
