#include "menu.h"

sf::Text Title, LocalGame, OnlineMatch, Option, Exit;

Textbox textbox;

sf::Font menu_font;

int MenuSelection;

bool changeLocal = true, changeOnline = true, changeOption = true, changeExit = true;

bool showMenu, showLocal, showOnline, showOption, showExit;

void menu_init() {
    
  
}

void menu_events(sf::Event event) {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        MenuSelection--;
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        MenuSelection++;
    
}

void menu_update() {

    if(showMenu){

        if(MouseCollision(LocalGame)) {
            MenuSelection = 1;
        }
        else if(MouseCollision(OnlineMatch)) {
            MenuSelection = 2;
        }
        else if(MouseCollision(Option)) {
            MenuSelection = 3;
        }
        else if(MouseCollision(Exit)) {
            MenuSelection = 4;
        }
        else{
            MenuSelection = -1;
            textbox.character = 0;
            textbox.update(" ");
            LocalGame.setFillColor(sf::Color::White);
            OnlineMatch.setFillColor(sf::Color::White);
            Option.setFillColor(sf::Color::White);
            Exit.setFillColor(sf::Color::White);
        }
            
        switch (MenuSelection) {
        case 0:
            MenuSelection = 4;
            break;
        case 1:
            if(changeLocal){
                textbox.character = 0;
                changeLocal = false;
                changeOnline = true;
                changeOption = true;
                changeExit = true;
                }
            LocalGame.setFillColor(sf::Color::Cyan);
            OnlineMatch.setFillColor(sf::Color::White);
            Option.setFillColor(sf::Color::White);
            Exit.setFillColor(sf::Color::White);
            textbox.update("Play a game within your local \nnetwork. Or Host a game for \neveryone in your local \nnetwork join");
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)){
                showLocal = true;
                showMenu = false;
                
            }
            break;
        case 2:
            if(changeOnline){
                textbox.character = 0;
                changeLocal = true;
                changeOnline = false;
                changeOption = true;
                changeExit = true;
                }
            LocalGame.setFillColor(sf::Color::White);
            OnlineMatch.setFillColor(sf::Color::Cyan);
            Option.setFillColor(sf::Color::White);
            Exit.setFillColor(sf::Color::White);
            textbox.update("Find a match with a another \nrandom person waiting to be \nchallanged.");
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)){
                showOnline = true;
                showMenu = false;
            }
            break;
        case 3:
            if(changeOption){
                textbox.character = 0;
                changeLocal = true;
                changeOnline = true;
                changeOption = false;
                changeExit = true;
                } 
            LocalGame.setFillColor(sf::Color::White);
            OnlineMatch.setFillColor(sf::Color::White);
            Option.setFillColor(sf::Color::Cyan);
            Exit.setFillColor(sf::Color::White);
            textbox.update("Optimize the game experience \nto your liking.");
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)){
                showOption = true;
                showMenu = false;
            }
            break;
        case 4:
            if(changeExit){
                textbox.character = 0;
                changeLocal = true;
                changeOnline = true;
                changeOption = true;
                changeExit = false;
            }
            LocalGame.setFillColor(sf::Color::White);
            OnlineMatch.setFillColor(sf::Color::White);
            Option.setFillColor(sf::Color::White);
            Exit.setFillColor(sf::Color::Cyan);
            textbox.update("Sometimes playing a game too \nmuch makes you worse. Go take \na break and come back when \nyou feel better!");
            if(sf::Mouse::isButtonPressed(sf::Mouse::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)){
                showExit = true;
                showMenu = false;
            }
            break;
        case 5:
            MenuSelection = 1;
            break;
        };

    }

    if(showLocal){
        
    }
    if(showOption){

    }
    if(showExit){
        
        std::exit(0);
    }

    
    
}

void menu_render() {
        window_()->draw(Title);
        window_()->draw(LocalGame);
        window_()->draw(OnlineMatch);
        window_()->draw(Option);
        window_()->draw(Exit);
        textbox.render();

}