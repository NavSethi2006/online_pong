#include "assets.h"

sf::Font font;
sf::Texture textbox_texture;

void load_assets() {
    
    if(!font.loadFromFile("../src/assets/shit.ttf"))printf("cant load font\n");
    if(!textbox_texture.loadFromFile("../src/assets/TextBox.png"))printf("cant load texbox texture\n");
    
}

sf::Font font_() {
    return font;
}

sf::Texture textbox_tex() {
    return textbox_texture;
}
