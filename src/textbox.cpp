#include "textbox.h"


void Textbox::init_textbox(float x, float y) {
    
    textbox_font.loadFromFile("../src/assets/shit.ttf");
    texture.loadFromFile("../src/assets/TextBox.png");
    sprite.setTexture(texture);

    character = 0;
    text.setCharacterSize(15);
    text.setFont(textbox_font);
    sprite.setPosition(x, y);
    text.setPosition(x + 25, y + 25);
    text.setLetterSpacing(0.9);
    
}

void Textbox::reset(int id) {
    if(Reset) {
        character = 0;
        bruh = " ";
        Reset = false;
    }
}

void Textbox::update(std::string string, int id) {
    
    if(clock.getElapsedTime().asSeconds() > 0.01 && character < string.length()){
        clock.restart();
        character++;

        bruh = string.substr(0, character);

        text.setString(bruh);
    }
    
}

void Textbox::render() {
    window_()->draw(sprite);
    window_()->draw(text);
}