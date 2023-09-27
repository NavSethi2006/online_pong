#include "main_menu.h"

sf::Text title, local_game, online_match, option, exit_;

Textbox textbox;

sf::Font menu_font;

int menu_selection;

bool change_local = true, change_online = true, change_option = true, change_exit = true;


void setColors(sf::Text text1, sf::Text text2, sf::Text text3, sf::Text text4) {
  text1.setColor((sf::Color) {255,255,255,255});
  text2.setColor((sf::Color) {255,255,255,255});
  text3.setColor((sf::Color) {255,255,255,255});
  text4.setColor(sf::Color::Cyan);

}

void main_menu_() {
    menu_font.loadFromFile("../src/assets/shit.ttf");

    showMenu = true;

    menu_selection = 1;

    title.setFont(menu_font);
    title.setString("Multiplayer Pong");
    title.setCharacterSize(35);
    title.setPosition(380, 50);

    local_game.setFont(menu_font);
    local_game.setString("Local Game");
    local_game.setCharacterSize(20);
    local_game.setPosition(550, 200);

    online_match.setFont(menu_font);
    online_match.setString("Online Match");
    online_match.setCharacterSize(20);
    online_match.setPosition(530, 300);

    option.setFont(menu_font);
    option.setString("Options");
    option.setCharacterSize(20);
    option.setPosition(580,400);

    exit_.setFont(menu_font);
    exit_.setString("Exit");
    exit_.setCharacterSize(20);
    exit_.setPosition(610, 500);

    textbox.init_textbox(420, 620);
}

void main_menu_events() {

}

void main_menu_update() {

  if(mouse_collision(local_game)) {
    setColors(online_match, option, exit_, local_game);
    textbox.update("Play a game within your local \nnetwork. Or Host a game for \neveryone in your local \nnetwork join");

  }
  else if(mouse_collision(online_match)) {
    setColors(local_game, option, exit_, online_match);
    textbox.update("Find a match with a another \nrandom person waiting to be \nchallanged.");
  }
  else if(mouse_collision(option)) {
    setColors(local_game, online_match, exit_, option);
    textbox.update("Optimize the game experience \nto your liking.");

  }
  else if(mouse_collision(exit_)) {
    setColors(local_game, online_match, option, exit_);
  }
  else{
            
    }
            
        switch (MenuSelection) {
        case 0:
            MenuSelection = 4;
            break;
        case 1:
            
            setColors(online_match, option, exit_, local_game);
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
              std::exit(0);
            }
            break;
        case 5:
            MenuSelection = 1;
            break;
        };

    }

    
}

void main_menu_render() {

}