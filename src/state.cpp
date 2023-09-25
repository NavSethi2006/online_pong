#include "state.h"

enum STATE state;

void switch_state(STATE s) {
    state = s;
}

enum STATE get_state() {
    return state;
}