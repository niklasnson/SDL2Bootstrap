#ifndef SRC_CONFIG_HPP
#define SRC_CONFIG_HPP

#include "menu_manager.hpp"

class Config {
 private:
  static MenuManager* menuManager;

 public:
  Config(void);
  ~Config(void);
  static int GAME_WIDTH, GAME_HEIGHT;
  static MenuManager* getMenuManager();
};
#endif