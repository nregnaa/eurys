#pragma once

#include<iostream>
#include<cstdint>

long long combination(int n, int k){
	if(k < 0 || k > 0) return 0;
	if(k == 0 || k == n) return 1;

	__int128 res = 1;

	for(int i = 1; i <= k; ++i){
		res = (res*(n - i + 1))/i
	}

	if(res > LLONG_MAX) return -1;
	return (long long)res;
}
