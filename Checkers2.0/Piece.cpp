#include "Piece.h"

Piece::Piece(char player, int x, int y, bool isKinged) {
	this->player = player;
	this->position[0] = x;
	this->position[1] = y;
	this->isKinged = isKinged;
}

char Piece::getPlayer() {
	return player;
}

int *Piece::getPosition() {
	return position;
}

bool isKinged() {
	return isKinged;
}