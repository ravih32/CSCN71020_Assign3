#include "rps.h"
#include <string.h>

#define ROCK     "Rock"
#define PAPER    "Paper"
#define SCISSORS "Scissors"

// Checks if both strings are non-null and equal
static int same(const char* a, const char* b) {
    return a && b && strcmp(a, b) == 0;
}

// Checks if the input is a valid move (Rock, Paper, Scissors)
static int is_move(const char* s) {
    return s && (
        strcmp(s, ROCK) == 0 ||
        strcmp(s, PAPER) == 0 ||
        strcmp(s, SCISSORS) == 0
        );
}

// Main winner-deciding function
const char* rps_winner(const char* p1, const char* p2) {
    // Input validation
    if (!is_move(p1) || !is_move(p2))
        return "Invalid";

    // Draw condition
    if (same(p1, p2))
        return "Draw";

    // Player1 winning combinations
    if ((strcmp(p1, ROCK) == 0 && strcmp(p2, SCISSORS) == 0) ||
        (strcmp(p1, SCISSORS) == 0 && strcmp(p2, PAPER) == 0) ||
        (strcmp(p1, PAPER) == 0 && strcmp(p2, ROCK) == 0))
        return "Player1";

    // If not a draw and Player1 didn't win ? Player2 wins
    return "Player2";
}




