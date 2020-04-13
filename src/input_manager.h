#ifndef INPUT_MANAGER_H
#define INPUT_MANAGER_H
#include <SFML/Graphics.hpp>

class InputManager {
public:
    InputManager() {}
    ~InputManager() {}

    bool IsSpriteSelected(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window);
    sf::Vector2i GetMousePosition(sf::RenderWindow & window);
};

#endif // INPUT_MANAGER_H
