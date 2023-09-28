
/** @author @TigerNav */


//////////////////
// Files needed
/////////////////

#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "main_menu.h"
#include "collision.h"
#include "textbox.h"

/**
   @brief 
    
    Menu Handler. Branches out to other 
    submenus using booleans for rendering 
    and updating.
  
 */

/**
   @brief 
    
   Initilizes everything menu related

   */
void menu_init();


/**
   @brief 
    
    Updates in poll event method.

   */
void menu_events(sf::Event events);

/**
   @brief 
    
    Updates every frame without rendering.

  */
void menu_update();

/**
   @brief 
    
    Renders everything used in the class. Handles the switch between everything thats has to be handled.

  */
void menu_render();
