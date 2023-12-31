
/** @author @TigerNav */

//////////////////
// Files needed
/////////////////

#pragma once
#include <SFML/Graphics.hpp>
#include "engine.hpp"

class LocalMenu
{

private:
    sf::Text Title;
    sf::Text Host;
    sf::Text Join;
    sf::Text Back;
    sf::RenderWindow *w;
    int MenuSelection;
    bool renderLocalMenu;
    bool localMenuhost = false, localMenujoin = false;

public:
    /**
       @brief Defualt Contructor. Literally does nothing

     */

    /**
     * @brief Construct a new Local Menu object
     *
     * @param window for the render method and used for other stuff
     */
    void init(sf::RenderWindow *window);
    /**
     * @brief runs every frame like every other update method
     *
     */
    void update(bool showMenu);
    /**
     * @brief renders the stuff on the windows like every other
     *
     */
    void render();
};