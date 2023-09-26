
/** @author @TigerNav */

#include "stdio.h"
#include "window.h"
#include "state.h"
#include "menu.h"
#include "game.h"
#include "assets.h"


// Entry point for project (DO NOT EDIT UNLESS NECESSARY)
int main() {
    
    window_init();

    menu_init();

    load_assets();
    
    switch_state(STATE_MENU);

    while(window_()->isOpen()) {
      
        switch (get_state())
        {
        case STATE_MENU:
            
            sf::Event menu_event;
            while(window_()->pollEvent(menu_event)) {
                
                menu_events(menu_event);
                if(menu_event.type == sf::Event::Closed)
                    window_()->close();
            }
            menu_update();

            window_()->clear(sf::Color(41, 41, 41));
            menu_render();
            

            break;
        case STATE_GAME:
            sf::Event game_event;
            while(window_()->pollEvent(game_event)) {
                game_events(game_event);
                if(game_event.type == sf::Event::Closed)
                    window_()->close();
            }
            game_update();

            window_()->clear(sf::Color(41, 41, 41));
            game_render();

        case STATE_PAUSE:
            sf::Event pause_event;
            while(window_()->pollEvent(pause_event)) {
                if(pause_event.type == sf::Event::Closed)
                    window_()->close();
            }
        }

        window_()->display();


    }

    return 0;
}