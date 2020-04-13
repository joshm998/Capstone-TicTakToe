#ifndef PAUSE_STATE_H
#define PAUSE_STATE_H
#include <stdio.h>
#include "state.h"
#include "game.h"

class PauseState : public State {
public:
    PauseState(GameDataRef data);
    void Init();
    void HandleInput() override;
    void Update(float deltaTime) override;
    void Draw(float deltaTime) override;
private:
    GameDataRef _data;
    sf::Sprite _background;
    sf::Sprite _resumeButton;
    sf::Sprite _homeButton;
};

#endif // PAUSE_STATE_H
