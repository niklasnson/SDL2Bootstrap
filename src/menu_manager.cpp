#include "menu_manager.hpp"

#include "application.hpp"

MenuManager::MenuManager(void) {
  this->currentState = appMainMenu;
  this->mainMenu = new MainMenu;
}

MenuManager::~MenuManager(void) { delete mainMenu; }

void MenuManager::update() {}

void MenuManager::draw(SDL_Renderer* renderer) {}

void MenuManager::enter() {}

void MenuManager::escape() {}

// Get current view.
int MenuManager::getViewID() { return currentState; }

// Set the current view.
void MenuManager::setViewID(applicationState viewID) { this->currentState = viewID; }

void MenuManager::getActiveOption() {}

void MenuManager::setActiveOption(SDL_Renderer* renderer) {}

void MenuManager::setKey(int keyID) {
  switch (currentState) {
    default:
      break;
  }
}
