#include <stdio.h>
#include <stdlib.h>
#include "easyrandlib.h"


int main()
{
	er_seed_auto();
	int randInt = er_rand_int(5, 500);
	printf("Random integer: %i\n", randInt);

	float randFloat = er_rand_float(5.0f, 500.0f);
	printf("Random float: %f\n", randFloat);

	int arrSize = 20;
	int* randIntArr = er_rand_intparr(5, 500, arrSize);
	for(int i = 0; i < arrSize; ++i)
	{
		printf("Array[%i]: %i\n", i, *(randIntArr+i));
	}

	return 0;
}
