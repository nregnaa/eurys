#pragma once

#include<cstdlib>
#include<ctime>

#include"card.h"

int bootstrap(int mod){
	srand(time(NULL));

	return (float)(rand()%mod + 1);
}

Card randomCard(vector<vector<int>> cardset){
	Card card;
	//For 5 players we need 15 cards which exceed one suit.
	int ren = bootstrap(cardset.size());
	card.suit = (Suit)ren;
	card.rank = (Rank)bootstrap(cardset[ren-1].size());
	return card;
}
