//
// Created by cryptic on 05/11/23.
//

#ifndef SFML_CHESS_GAMEENGINE_H
#define SFML_CHESS_GAMEENGINE_H

#include <SFML/Graphics.hpp>

class GameEngine {
public:
    GameEngine();
    virtual ~GameEngine();
private:
    sf::RenderWindow* window;

    void initWindow();
    void initVariables();
};


#endif //SFML_CHESS_GAMEENGINE_H
