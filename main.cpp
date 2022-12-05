#include <SDL2/SDL.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    //! inicia todos os modulos do sdl (audio event etc)
    SDL_Init(SDL_INIT_EVERYTHING);

    //! cria a janela em que as coisas aparecem
    int const WIDTH = 600, HEIGHT = 500, WINDOW_XPOS = 30, WINDOW_YPOS = 30;
    SDL_Window *window = SDL_CreateWindow("Insira o titulo aqui", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);

    //!aqui estamos pegando a parte da janela que criamos em que relamente podemos mexer, como se fosse um canva
    SDL_Surface *screen = SDL_GetWindowSurface(window);

    //!destruindo a jenela desocupamos o espaço na memoria e portanto encerramos o programa
    cout << "esta rodando" << endl;
    SDL_Delay(3000);
    SDL_DestroyWindow(window); //? fecha a janela
    SDL_Quit();                //? cuida da memoria
    return 0;
}