#ifndef DEF_FUNCTIONS_SDL
#define DEF_FUNCTIONS_SDL

#include <SDL2/SDL.h>
#include "Player.h"

SDL_Texture* load_image(const char* filename, SDL_Renderer* renderer); //charge une image

void UpdatePlayerDisplay(SDL_Rect* Rect, Player* player); //update le rectangle pour le mettre aux coords du joueur

#endif