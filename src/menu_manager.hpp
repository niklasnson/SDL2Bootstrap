#ifndef SRC_MENU_MANAGER_HPP
#define SRC_MENU_MANAGER_HPP

#include "main_menu.hpp"

class MenuManager {
 private:
  MainMenu* mainMenu;

 public:
  MenuManager(void);
  ~MenuManager(void);

  enum applicationState { appMainMenu };
  applicationState currentState;

  void update();
  void draw(SDL_Renderer* renderer);
  void enter();
  void escape();

  int getViewID();
  void setViewID(applicationState viewID);

  void getActiveOption();
  void setActiveOption(SDL_Renderer* renderer);

  void setKey(int keyID);
};

#endif