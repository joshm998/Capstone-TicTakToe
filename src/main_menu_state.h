#ifndef MAIN_MENU_STATE_H
#define MAIN_MENU_STATE_H
#include <SFML/Graphics.hpp>
#include "state.h"
#include "game.h"
class MainMenuState: public State {
public:
    MainMenuState(GameDataRef data);
    void Init() override;
    void HandleInput() override;
    void Update(float deltaTime) override;
    void Draw(float deltaTime) override;

private:
    GameDataRef _data;
    sf::Sprite _background;
    sf::Sprite _playButton;
    sf::Sprite _title;
};

#endif // MAIN_MENU_STATE_H
