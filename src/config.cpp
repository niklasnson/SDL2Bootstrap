#include "config.hpp"

Config::Config(void) {}

Config::~Config(void) { delete menuManager; }

/* ************************************************************************** */

int Config::GAME_HEIGHT = 800;
int Config::GAME_WIDTH = 1200;

MenuManager* Config::menuManager = new MenuManager();

MenuManager* Config::getMenuManager() { return menuManager; }
