
/** @author @TigerNav */


//////////////////
// Files needed
/////////////////

#pragma once
#include <SFML/Graphics.hpp>
#include "assets.h"
#include "window.h"

/**
   @brief 
   
   Create a text box that can be used to display text in a typewriter format
   
 */
class Textbox{

private:
    sf::RenderWindow *w;
    sf::Font textbox_font;
    sf::Sprite sprite;
    sf::Text text;
    sf::Texture texture;
    sf::Clock clock;
    std::string bruh;
    bool Reset;
    int id;

    
public:
    unsigned int character;

/**
   @brief Initilization for position 
   
   @param x for the x position
   @param y for the y position
 */
void init_textbox(float x, float y);
/**
   @brief logic for the typewriting effect. Cant explain since very complicated programming thing
   
   @param string the string for text
 */

void reset(int id);

void update(std::string string, int id);

/**
 * @brief call this method when you want to render the textbox
 * 
 */
void render();


};