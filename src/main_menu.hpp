#ifndef SRC_MAIN_MENU_HPP
#define SRC_MAIN_MENU_HPP

#include "menu.hpp"

class MainMenu : public Menu {
 public:
  MainMenu(void);
  ~MainMenu(void);

  void update();
  void draw(SDL_Renderer* renderer);
  void enter();
  void escape();
};

#endif