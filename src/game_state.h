#ifndef GAME_STATE_H
#define GAME_STATE_H

#include <SFML/Graphics.hpp>
#include "state.h"
#include "game.h"
#include "pause_state.h"
#include <sstream>
#include "DEFINITIONS.h"
#include <iostream>
class GameState: public State {
public:
    GameState(GameDataRef data);
    void Init() override;
    void HandleInput() override;
    void Update(float deltaTime) override;
    void Draw(float deltaTime) override;

private:
    void InitGridPieces();
    GameDataRef _data;
    sf::Sprite _background;
    sf::Sprite _pauseButton;
    sf::Sprite _gridSprite;
    sf::Sprite _gridPieces[3][3];
    int gridArray[3][3];

    int turn;
    int gameState;
};

#endif // GAME_STATE_H
