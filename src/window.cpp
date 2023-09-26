#include "window.h"

sf::RenderWindow *window;
sf::RenderWindow temp;

void window_init() {
    
    window = new sf::RenderWindow(sf::VideoMode(1300, 800), "pong");
}

float mouse_x() {
    
    return sf::Mouse::getPosition(temp).x;
}
float mouse_y(){
    return sf::Mouse::getPosition().y;
}

sf::RenderWindow *window_() {
    return window;
}