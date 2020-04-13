#include "splash_state.h"
#include "DEFINITIONS.h"
#include <sstream>
#include <iostream>
#include "main_menu_state.h";

SplashState::SplashState(GameDataRef data): _data(data) {}

void SplashState::Init() {
    this->_data->assets.LoadTexture("Splash Background", SPLASH_SCENE_BACKGROUND_IMAGEPATH);
    _background.setTexture(this->_data->assets.GetTexture("Splash Background"));
}


void SplashState::HandleInput() {
    sf::Event event;
    while(this->_data->window.pollEvent(event)) {
        if (sf::Event::Closed == event.type) {
            this->_data->window.close();
        }
    }
}

void SplashState::Update(float deltaTime) {
    if (this->_clock.getElapsedTime().asSeconds() > SPLASH_SHOW_TIME ) {
        this->_data->machine.AddState(StateRef(new MainMenuState(_data)), true);
    }
}

void SplashState::Draw(float deltaTime) {
    this->_data->window.clear(sf::Color::Black);
    this->_data->window.draw(this->_background);
    this->_data->window.display();
}
