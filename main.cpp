#define SDL_ENABLE_OLD_NAMES

#include "SDL3/SDL.h"
#include <SDL3/SDL_main.h>
#include <SDL3/SDL_rect.h>
#include <cstdlib>
#include <ctime>

#pragma comment(lib, "SDL3")

int SDL_main(int argc, char* argv[])
{
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);

	SDL_Window* MyWindow = SDL_CreateWindow("Game", 800, 640, SDL_WINDOW_OPENGL);
	
	SDL_Renderer* MyRenderer = SDL_CreateRenderer(MyWindow, nullptr);

	SDL_Event MyEvent;

	bool bIsRunning = true;
	while (bIsRunning)
	{
		if (SDL_PollEvent(&MyEvent))
		{
			// window 처리
			if (MyEvent.type == SDL_EVENT_QUIT)
			{
				bIsRunning = false;
			}
		}
		else
		{
			// command queue
			SDL_SetRenderDrawColor(MyRenderer, 100, 149, 237, 255);
			SDL_RenderClear(MyRenderer);
			// 화면 업데이트
			/*for (int i = 0; i < 100; i++)
			{
				SDL_SetRenderDrawColor(MyRenderer, SDL_rand(255), SDL_rand(255), SDL_rand(255), 0);
				SDL_FRect Rect = { SDL_rand(800),SDL_rand(640),SDL_rand(200) + 1,SDL_rand(200) + 1 };
				SDL_RenderDrawRect(MyRenderer, &Rect);
			}*/
			for (int i = 0; i <= 100; i++)
			{
				SDL_SetRenderDrawColor(MyRenderer, SDL_rand(255), SDL_rand(255), SDL_rand(255), 0);
				SDL_FRect Rect = { SDL_rand(800), SDL_rand(640), SDL_rand(200) + 1, SDL_rand(200) + 1 };
				//SDL_RenderDrawRect(MyRenderer, &Rect);
				SDL_RenderFillRect(MyRenderer, &Rect);
			}
			SDL_RenderPresent(MyRenderer);
		}
	}

	SDL_DestroyRenderer(MyRenderer);

	SDL_DestroyWindow(MyWindow);

	SDL_Quit();
	return 0;
}