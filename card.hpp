#include<iostream>
#ifndef CARD_H
#define CARD_H

class Card {

public:
	Card();
	Card(int rank, Suit suit);
	enum Suit { spades, hearts, diamonds, clubs };
private:
	int rank;
	Suit suit;


};

#endif