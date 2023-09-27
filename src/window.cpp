#include "window.h"

sf::RenderWindow window;
sf::RenderWindow temp;

void window_init() {
    window.create(sf::VideoMode(1300, 800), "pong");

}
float mouse_x() {
    float bruh = window.mapPixelToCoords(sf::Mouse::getPosition(window)).x;
    return bruh;
}
float mouse_y(){
    float bruh = window.mapPixelToCoords(sf::Mouse::getPosition(window)).y;
    return bruh;
}

sf::RenderWindow *window_() {
    return &window;
}