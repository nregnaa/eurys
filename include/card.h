#pragma once

#include<iostream>

enum class Suit{heart = 1, diamond, club, spade};

enum class Rank{ace = 1, two, three, four, five, six, seven, 
							eight, nine, ten, jack, queen, king};

struct Card{
	Suit suit;
	Rank rank;
};
