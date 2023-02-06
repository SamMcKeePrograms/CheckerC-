#pragma once
#include <vector>
#include "Piece.h"

class Board
{

public:
	void displayBoard();
	void fillBoard();
	vector<int[]> getMoves(char player);

private:
	Piece board[8][8];


};

