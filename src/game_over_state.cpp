#include "game_over_state.h"
#include <sstream>
#include "DEFINITIONS.h"
#include <iostream>
#include "game_state.h"
#include "main_menu_state.h"

GameOverState::GameOverState(GameDataRef data) : _data(data) {

}

void GameOverState::Init() {
    this->_data->assets.LoadTexture("Retry Button", RETRY_BUTTON_IMAGEPATH);
    this->_data->assets.LoadTexture("Home Button", HOME_BUTTON_IMAGEPATH);
    this->_retryButton.setTexture(this->_data->assets.GetTexture("Retry Button"));
    this->_homeButton.setTexture(this->_data->assets.GetTexture("Home Button"));

    this->_retryButton.setPosition((this->_data->window.getSize().x / 2) - (this->_retryButton.getLocalBounds().width / 2 ),
                                    (this->_data->window.getSize().y / 3) - (this->_retryButton.getLocalBounds().height / 2 ));

    this->_homeButton.setPosition((this->_data->window.getSize().x / 2) - (this->_homeButton.getLocalBounds().width / 2 ),
                                    (this->_data->window.getSize().y / 3 * 2) - (this->_homeButton.getLocalBounds().height / 2 ));



}

void GameOverState::HandleInput() {
    sf::Event event;
    while (this->_data->window.pollEvent((event))) {
        if (sf::Event::Closed == event.type) {
            this->_data->window.close();
        }
        if (this->_data->input.IsSpriteSelected(this->_retryButton, sf::Mouse::Left, this ->_data->window)) {
            this->_data->machine.AddState(StateRef(new GameState(_data)), true);        }

        if (this->_data->input.IsSpriteSelected(this->_homeButton, sf::Mouse::Left, this ->_data->window)) {
            this->_data->machine.AddState(StateRef(new MainMenuState(_data)), true);
        }
    }
}

void GameOverState::Update(float deltaTime) {

}

void GameOverState::Draw(float deltaTime) {
    this->_data->window.clear();
    this->_data->window.draw(this->_homeButton);
    this->_data->window.draw(this->_retryButton);

    this->_data->window.display();
}
