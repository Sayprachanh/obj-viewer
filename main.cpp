#include <SDL2/SDL.h>
#include <iostream>

using namespace std;
int main(){
	SDL_Init(SDL_INIT_VIDEO);
    	SDL_Window* window = SDL_CreateWindow("test",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
    	
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	bool running = true;
	SDL_Event event;

    	while (running) {
        	while (SDL_PollEvent(&event)) {
            	if (event.type == SDL_QUIT){
                	running = false;
		}else if(event.type == SDL_KEYDOWN){
		    if(event.key.keysym.sym == SDLK_ESCAPE) running = false;
		    }
		}
	
            cout << "test" <<endl;
            SDL_SetRenderDrawColor(renderer, 0,0,0,255);
            SDL_RenderClear(renderer);
	    
	    SDL_RenderPresent(renderer);
	    SDL_Delay(16);
	
	}

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;

}
