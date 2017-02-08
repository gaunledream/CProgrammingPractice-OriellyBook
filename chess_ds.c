struct chess {
	struct board board; //current board position
	struct next{
		struct move; //our next move
		struct *chess_ptr; //pointer to the resulting position
	}next[MAX_MOVES];
};
struct next{
	struct move this_mode;//our next move
	struct *chess_ptr;//pointer to the resulting position
};
struct chess{
	struct board board;
	struct next *list_ptr;//list of moves we can make from here
	struct move this_move; //the move we are making
};