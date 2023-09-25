#pragma once
#include "stdio.h"

enum STATE
{
    STATE_MENU,
    STATE_GAME,
    STATE_PAUSE,
};


void switch_state(STATE s);

enum STATE get_state();