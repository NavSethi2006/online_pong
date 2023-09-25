#include "assets.h"

static sf::Font font;
sf::Texture textbox_texture;

void load_assets() {
    
    font.loadFromFile("../src/assets/shit.ttf");
    textbox_texture.loadFromFile("../src/assets/TextBox.png");
    
}

sf::Font font_() {
    return font;
}

sf::Texture textbox_tex() {
    return textbox_texture;
}
