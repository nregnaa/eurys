#pragma once

#include<iostream>
#include<cstdlib>
#include<ctime>

#include"card.h"

float bootstrap(){
	srand(time(NULL));
	return float(rand()%100);
}
