#include "window.h"

sf::RenderWindow window;
sf::RenderWindow temp;

void window_init() {
    window.create(sf::VideoMode(1300, 800), "pong");

}
float mouse_x() {
    return sf::Mouse::getPosition(window).x;
}
float mouse_y(){
    return sf::Mouse::getPosition(window).y;
}

sf::RenderWindow *window_() {
    return &window;
}