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
	
	int stackarray[15] = {0};
	er_fill_intarr(0, 5000, stackarray, 15);
	for(int i = 0; i < 15; ++i)
	{
		printf("Stack array[%i]: %i\n", i, stackarray[i]); 
	}

	char randomByte = er_rand_byte();
	printf("Random byte:[%c]\n", randomByte);
	for(int i = 7; i >= 0; --i)
	{
		printf("%d ", (randomByte >> i) & 1); 
	}
	printf("\n");
	char byteArr[20] = {0};
	er_fill_bytearr(byteArr, 20);
	for(int i = 0; i < 20; ++i)
	{
		printf("%c", byteArr[i]);
	}
	printf("\n");

	for(int i = 0; i < 20; ++i)
	{
		char currChar = byteArr[i];
		for(int y = 7; y >= 0; --y)
		{
			printf("%d ", (currChar >> y) & 1);
		}
	}
	printf("\n");
	
	int* p_intarray = malloc(20 * sizeof(int));
	er_fill_intarr(0, 200, p_intarray, 20);
	for(int i = 0; i < 20; ++i)
	{
		printf("Ptr_array[%i]: %i\n", i, *(p_intarray+i));
	}
	
	char randChar = er_rand_char();
	char randUpper = er_rand_charr(ASCII_UPPER);
	char randLower = er_rand_charr(ASCII_LOWER);
	char randPrintable = er_rand_charr(ASCII_PRINTABLE);
	char randFull = er_rand_charr(ASCII_FULL);

	printf("Rand char: %c\nRand upper: %c\nRand lower: %c\nRand printable: %c\nRand full: %c\n", randChar, randUpper, randLower, randPrintable, randFull);
	return 0;
}
