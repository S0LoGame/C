#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int findMaxCandies(int* candies, int candiesSize) {
	int maxCandies = candies[0];
	for (int i = 1; i < candiesSize; i++) {
		if (candies[i] > maxCandies) {
			maxCandies = candies[i];
		}
	}
	return maxCandies;
}


bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
	int maxCandies = findMaxCandies(candies, candiesSize);
	bool* result = (bool*)malloc(candiesSize * sizeof(bool));
	for (int i = 0; i < candiesSize; i++) {
		result[i] = (candies[i] + extraCandies >= maxCandies);
	}
	*returnSize = candiesSize;
	return result;
}
