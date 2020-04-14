#ifndef COMPUTER_LOGIC_H
#define COMPUTER_LOGIC_H
#include <SFML/Graphics.hpp>
#include <vector>
#include <array>
#include "game.h"

class ComputerLogic {
public:
    ComputerLogic(int playerPiece, GameDataRef data);
    void PlacePiece(int (*gridArray)[3][3], sf::Sprite gridPieces[3][3], int *gameState);
private:
    void CheckSection(int x1, int y1, int x2, int y2, int X, int Y, int pieceToCheck, int (*gridArray)[3][3], sf::Sprite gridPieces[3][3]);
    void CheckIfPieceEmpty(int X, int Y, int (*gridArray)[3][3], sf::Sprite gridPieces[3][3]);
    int computerPiece;
    int playerPiece;
    std::vector<std::array<int, 6>> checkMatchVector;
    GameDataRef _data;
};

#endif // COMPUTER_LOGIC_H
