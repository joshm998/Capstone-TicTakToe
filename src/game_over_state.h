#ifndef GAME_OVER_STATE_H
#define GAME_OVER_STATE_H
#include <SFML/Graphics.hpp>
#include "state.h"
#include "game.h"
class GameOverState: public State {
public:
    GameOverState(GameDataRef data);
    void Init() override;
    void HandleInput() override;
    void Update(float deltaTime) override;
    void Draw(float deltaTime) override;

private:
    GameDataRef _data;
    sf::Sprite _homeButton;
    sf::Sprite _retryButton;
};

#endif // GAME_OVER_STATE_H
