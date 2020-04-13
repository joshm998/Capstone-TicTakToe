#include "game_state.h"

GameState::GameState(GameDataRef data) : _data(data) {

}

void GameState::Init() {
    gameState = STATE_PLAYING;
    turn = PLAYER_PIECE;
    this->_data->assets.LoadTexture("Pause Button", PAUSE_BUTTON_IMAGEPATH);
    _background.setTexture(this->_data->assets.GetTexture("Background"));
    _pauseButton.setTexture(this->_data->assets.GetTexture("Pause Button"));
    _pauseButton.setPosition(this->_data->window.getSize().x - _pauseButton.getLocalBounds().width, _pauseButton.getPosition().y);
}

void GameState::HandleInput() {
    sf::Event event;
    while (this->_data->window.pollEvent((event))) {
        if (sf::Event::Closed == event.type) {
            this->_data->window.close();
        }
        if (this->_data->input.IsSpriteSelected(this->_pauseButton, sf::Mouse::Left, this ->_data->window)) {
            this->_data->machine.AddState(StateRef(new PauseState(_data)), false);
        }
    }
}

void GameState::Update(float deltaTime) {

}

void GameState::Draw(float deltaTime) {
    this->_data->window.clear();
    this->_data->window.draw(this->_background);
    this->_data->window.draw(this->_pauseButton);
    this->_data->window.display();
}