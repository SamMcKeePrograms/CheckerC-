#pragma once
class Piece
{

public:
	char getPlayer();
	int *getPosition();
	bool isKinged();
	Piece(char player, int x, int y, bool isKinged);


private:
	char player;
	int position[2];
	bool isKinged = false;

};

