#include "Board.h"
#include <iostream>
#include <iomanip>
using namespace std;


void Board::fillBoard() {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					if ((i == 0 || i == 2) && j % 2 == 1 || (i == 1 && j % 2 == 0)) {
						board[i][j] = Piece('O', j, i, false);
					}
					else if ((i == 5 || i == 7) && j % 2 == 0 || (i == 6 && j % 2 == 1)) {
						board[i][j] = Piece('X', j, i, false);
					}
					else {
						board[i][j] = Piece('-', j, i, false);
					}
				}
			}
		}
	}
}

void Board::displayBoard() {
	cout << setw(5) << 0 << setw(2) << 1 << setw(2) << 2 << setw(2) << 3 << setw(2) << 4 << setw(2) << 5 << setw(2) << 6 << setw(2) << 7 << endl;
	cout << "    ---------------" << endl;
	for (int i = 0; i < 8; i++) {
		cout << i << " |";
		for (int j = 0; j < 8; j++) {
			cout << setw(2) << board[i][j].getPlayer();
		}
		cout << endl;
	}
}

vector<int[]> getMoves(char player) {
	vector<int[]> moves;



}
