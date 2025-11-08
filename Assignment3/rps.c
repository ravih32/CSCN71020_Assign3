#include "rps.h"
#include <string.h>

// helper: returns true if both pointers are non-null and strings are equal
static int same(const char* a, const char* b) {
    return a && b && strcmp(a, b) == 0;
}

const char* rps_winner(const char* p1, const char* p2) {
    // BLUE step: keep behavior identical to Step 4
    if (same(p1, p2)) return "Draw";
    return "Invalid";
}


