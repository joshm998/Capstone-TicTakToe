#ifndef GAME_H
#define GAME_H
#include <memory>
#include <string>
#include <SFML/Graphics.hpp>
#include "asset_manager.h"
#include "input_manager.h"
#include "state_machine.h"

struct GameData {
    StateMachine machine;
    sf::RenderWindow window;
    AssetManager assets;
    InputManager input;
};

typedef std::shared_ptr<GameData> GameDataRef;

class Game {
public:
    Game(int width, int height, std::string windowTitle);
private:
    const float deltaTime = 1.0f/60.0f;
    sf::Clock _clock;
    GameDataRef _data = std::make_shared<GameData>();

    void Run();
};


#endif // GAME_H
