#include "config.hpp"

Config::Config(void) {}

Config::~Config(void) { delete menuManager; }

/* ************************************************************************** */

int Config::GAME_HEIGHT = 448;
int Config::GAME_WIDTH = 800;

MenuManager* Config::menuManager = new MenuManager();

MenuManager* Config::getMenuManager() { return menuManager; }
