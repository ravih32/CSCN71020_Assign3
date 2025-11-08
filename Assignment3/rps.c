#include "rps.h"
#include <string.h>

static int same(const char* a, const char* b) {
    return a && b && strcmp(a, b) == 0;
}

const char* rps_winner(const char* p1, const char* p2) {
    if (same(p1, p2)) return "Draw";

    // ? Step 7: minimal new rule
    if (p1 && p2 && strcmp(p1, "Rock") == 0 && strcmp(p2, "Scissors") == 0)
        return "Player1";

    return "Invalid";
}



