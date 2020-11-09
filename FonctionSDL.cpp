#include "functions_SDL.h"

SDL_Texture* load_image(const char* filename, SDL_Renderer* renderer){
	SDL_Surface* surf = SDL_LoadBMP(filename);
	SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer,surf);
	return texture;
}
