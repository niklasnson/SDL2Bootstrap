#ifndef SRC_APPLICATION_HPP
#define SRC_APPLICATION_HPP

#include "header.hpp"

class Application {
 private:
  // The window that we will render to.
  SDL_Window* window;
  // A structure that contains a rendering state.
  SDL_Renderer* renderer;
  // A union that contains structures for the different event types.
  SDL_Event* mainEvent;

  uint32_t sdlTicks;
  uint32_t frameTime;
  static const int MIN_FRAME_TIME = 16;
  static bool keyMenuPressed;

 public:
  Application(void);
  ~Application(void);

  static bool quitApplication;

  void mainLoop();
  void input();
  void inputMenu();
  void update();
  void draw();
};
#endif