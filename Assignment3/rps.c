#include "rps.h"
#include <string.h>

#define ROCK     "Rock"
#define PAPER    "Paper"
#define SCISSORS "Scissors"

static int same(const char* a, const char* b) {
    return a && b && strcmp(a, b) == 0;
}

static int is_move(const char* s) {
    return s && (strcmp(s, ROCK) == 0 ||
        strcmp(s, PAPER) == 0 ||
        strcmp(s, SCISSORS) == 0);
}

const char* rps_winner(const char* p1, const char* p2) {
    // keep existing behavior:
    // 1) Same move -> "Draw"
    if (same(p1, p2)) return "Draw";

    // 2) Only rule implemented so far: Rock beats Scissors -> "Player1"
    if (p1 && p2 && strcmp(p1, ROCK) == 0 && strcmp(p2, SCISSORS) == 0)
        return "Player1";

    // 3) Everything else -> "Invalid" (for now)
    //    (We also added is_move() for future steps, but not used yet to avoid behavior change.)
    return "Invalid";
}




