#include "application.hpp"

#include "config.hpp"

/* ************************************************************************** */
bool Application::quitApplication = false;
bool Application::keyMenuPressed = false;

Application::Application(void) {
  this->quitApplication = false;
  SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER | SDL_INIT_AUDIO);

  // Create a window with the specified position, dimensions, and flags.
  SDL_Window* window = SDL_CreateWindow(
      "Application", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, Config::GAME_WIDTH, Config::GAME_HEIGHT, 0);

  // If failed to create a window exit application.
  if (window == NULL) {
    this->quitApplication = true;
  }

  // Create a 2D rendering context for a window.
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

  mainEvent = new SDL_Event();
}

Application::~Application(void) {
  delete mainEvent;
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
}

void Application::mainLoop() {
  // Get the number of milliseconds since SDL library initialization.
  sdlTicks = SDL_GetTicks();
  while (!quitApplication && mainEvent->type != SDL_QUIT) {
    frameTime = SDL_GetTicks();
    SDL_PollEvent(mainEvent);
    SDL_RenderClear(renderer);

    input();
    update();
    draw();

    SDL_RenderPresent(renderer);
    if (SDL_GetTicks() - frameTime < MIN_FRAME_TIME) {
      SDL_Delay(MIN_FRAME_TIME - (SDL_GetTicks() - frameTime));
    }
  }
}

void Application::input() {
  switch (Config::getMenuManager()->getViewID()) {
    default:
      inputMenu();
      break;
  }
}

void Application::inputMenu() {
  if (mainEvent->type == SDL_KEYDOWN) {
    Config::getMenuManager()->setKey(mainEvent->key.keysym.sym);

    switch (mainEvent->key.keysym.sym) {
      case SDLK_ESCAPE:
        if (!keyMenuPressed) {
          std::cout << "ESC" << std::endl;
          keyMenuPressed = true;
        }
        break;
    }
  }
}

void Application::update() {}

void Application::draw() {}