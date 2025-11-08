
#ifndef RPS_H
#define RPS_H

#ifdef __cplusplus
extern "C" {
#endif

	// Decide the winner of Rock–Paper–Scissors.
	// Returns one of: "Player1", "Player2", "Draw", or "Invalid".
	const char* rps_winner(const char* p1, const char* p2);

#ifdef __cplusplus
}
#endif

#endif

