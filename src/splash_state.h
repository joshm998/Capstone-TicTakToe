#ifndef SPLASH_STATE_H
#define SPLASH_STATE_H
#include <SFML/Graphics.hpp>
#include "state.h"
#include "game.h"

class SplashState : public State {
public:
    SplashState(GameDataRef data);
    void Init();

    void HandleInput() override;
    void Update(float deltaTime) override;
    void Draw(float deltaTime) override;

private:
    GameDataRef _data;
    sf::Clock _clock;
    sf::Sprite _background;
};

#endif // SPLASH_STATE_H
