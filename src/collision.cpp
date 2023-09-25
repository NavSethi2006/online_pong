#include "collision.h"

bool MouseCollision(sf::Text square) {
    

    return mouse_x() >= square.getPosition().x 
    && mouse_x() <= (square.getPosition().x + square.getGlobalBounds().width) 
    && mouse_y() >= square.getPosition().y 
    && mouse_y() <= (square.getPosition().y + square.getGlobalBounds().height);

}
