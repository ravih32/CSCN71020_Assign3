#include "rps.h"
#include <string.h>

const char* rps_winner(const char* p1, const char* p2) {
    
    if (p1 && p2 && strcmp(p1, p2) == 0) {
        return "Draw";
    }
    return "Invalid"; // placeholder for now
}

