#include "game.h"
#include "splash_state.h"

Game::Game(int width, int height, std::string windowTitle) {
    _data->window.create(sf::VideoMode(width, height), windowTitle, sf::Style::Close | sf::Style::Titlebar);
    _data->machine.AddState(StateRef(new SplashState(this->_data)));
    this->Run();
}

void Game::Run() {
    float newTime, frameTime, interpoliation;
    float currentTime = this->_clock.getElapsedTime().asSeconds();
    float accumulator = 0.0f;

    while(this-_data->window.isOpen()) {
        this->_data->machine.ProcessStateChanges();
        newTime = this->_clock.getElapsedTime().asSeconds();
        frameTime = newTime - currentTime;
        if (frameTime > 0.25f) {
            frameTime = 0.25f;
        }
        currentTime = newTime;
        accumulator += frameTime;

        while (accumulator >= deltaTime) {
            this->_data->machine.GetActiveState()->HandleInput();
            this->_data->machine.GetActiveState()->Update(deltaTime);

            accumulator -= deltaTime;
        }
        interpoliation = accumulator / deltaTime;
        this->_data->machine.GetActiveState()->Draw(interpoliation);
    }
}
