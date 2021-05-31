#ifndef SRC_MENU_HPP
#define SRC_MENU_HPP

#include "header.hpp"

class Menu {
 public:
  Menu(void);
  ~Menu(void);

  int activeMenuOption;

  virtual void update();
  virtual void draw(SDL_Renderer* renderer);
};
#endif