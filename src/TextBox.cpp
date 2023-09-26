#include "TextBox.hpp"


void TextBox::InitTextBox(float x, float y) {
    
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


void TextBox::update(std::string string) {
    std::string bruh;
    
    if(clock.getElapsedTime().asSeconds() > 0.01 && character < string.length()){
        clock.restart();
        character++;

        bruh = string.substr(0, character);

        text.setString(bruh);
    }
    
}

void TextBox::render() {
    window_()->draw(sprite);
    window_()->draw(text);
}