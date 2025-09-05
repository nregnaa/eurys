#pragma once

#include<iostream>
#include<cstdlib>
#include<ctime>

#include"card.h"

//bootstrapping stuff for the dist

float bootstrap(){
	srand(time(NULL));
	return float(rand()%100);
}
