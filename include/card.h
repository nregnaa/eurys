#pragma once

enum class Suit{red, black};

enum class Rank{ace = 1, two, three, four, five, six, seven, 
							eight, nine, ten, jack, queen, king};

struct Card{
	Suit suit;
	Rank rank;
};
