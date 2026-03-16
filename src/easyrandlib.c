#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include "easyrandlib.h"


void er_seed(unsigned int seed)
{
	srand(seed);
}

void er_seed_auto(void)
{
	srand(time(NULL));
}


int er_rand_int(int min, int max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		int temp = max;
		max = min;
		min = temp;
	}

	int range = max - min + 1;
	int limit = RAND_MAX - (RAND_MAX % range);
	int r;

	do{
		r = rand();
	}while(r >= limit);
	return min + (r % range);

}

unsigned int er_rand_uint(unsigned int min, unsigned int max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		unsigned int temp = max;
		max = min;
		min = temp;
	}
	uint32_t range = max - min + 1U;
	uint32_t limit = (RAND_MAX / range) * range;
	uint32_t r;

	do{
		r = (uint32_t)rand();
	}while(r >= limit);
	return min + (r % range);
}

float er_rand_float(float min, float max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		float temp = max;
		max = min;
		min = temp;
	}

	float normalized = (float)rand() / ((float)RAND_MAX + 1.0f);
	return min + normalized * (max - min);
}

double er_rand_double(double min, double max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		double temp = max;
		max = min;
		min = temp;
	}
	double normalized = (double)rand() / ((double)RAND_MAX + 1.0);
	return min + normalized * (max - min);
}

long double er_rand_ldouble(long double min, long double max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		long double temp = max;
		max = min;
		min = temp;
	}
	long double normalized = (long double)rand() / ((long double)RAND_MAX + 1.0L);
	return min + normalized * (max - min);
}

int er_rand_bool(void)
{
	return rand()%2;
}

char er_rand_byte(void)
{
	char t_c = 0;
	for(int i = 0; i < 8; ++i)
	{
		t_c |= ((1 << i)*er_rand_bool()); 
	}
	return t_c;

}


int* er_rand_intparr(int min, int max, unsigned int arrsize)
{
	int* t_arr = malloc(arrsize * sizeof(int));
	for(unsigned int i = 0; i < arrsize; ++i)
	{
		*(t_arr+i) = er_rand_int(min, max); 
	}
	return t_arr;
}

unsigned int* er_rand_uintparr(unsigned int min, unsigned int max, unsigned int arrsize)
{
	unsigned int* t_arr = malloc(arrsize * sizeof(unsigned int));
	for(unsigned int i = 0; i < arrsize; ++i)
	{
		*(t_arr+i) = er_rand_uint(min, max); 
	}
	return t_arr;
}

float* er_rand_floatparr(float min, float max, unsigned int arrsize)
{
	float* t_arr = malloc(arrsize * sizeof(float));
	for(unsigned int i = 0; i < arrsize; ++i)
	{
		*(t_arr+i) = er_rand_float(min, max); 
	}
	return t_arr;
}


double* er_rand_doubleparr(double min, double max, unsigned int arrsize)
{
	double* t_arr = malloc(arrsize * sizeof(double));
	for(unsigned int i = 0; i < arrsize; ++i)
	{
		*(t_arr+i) = er_rand_double(min, max); 
	}
	return t_arr;
}

long double* er_rand_ldoubleparr(long double min, long double  max, unsigned int arrsize)
{
	long double* t_arr = malloc(arrsize * sizeof(long double));
	for(unsigned int i = 0; i < arrsize; ++i)
	{
		*(t_arr+i) = er_rand_ldouble(min, max); 
	}
	return t_arr;
}


int* er_rand_boolparr(unsigned int arrsize)
{
	int* t_arr = malloc(arrsize * sizeof(int));
	for(unsigned int i = 0; i < arrsize; ++i)
	{
		*(t_arr+i) = er_rand_bool();
	}
	return t_arr;
}

char* er_rand_byteparr(unsigned int arrsize)
{
	char* t_arr = malloc(arrsize * sizeof(char));
	for(unsigned int i = 0; i < arrsize; ++i)
	{
		*(t_arr+1) = er_rand_byte();
	}
	return t_arr;
}

void er_fill_intarr(int min, int max, int arr[], unsigned int size)
{
	if(size == 0) return;
	for(unsigned int i = 0; i < size; ++i)
	{
		arr[i] = er_rand_int(min, max);
	}
}

void er_fill_uintarr(unsigned int min, unsigned int max, unsigned int arr[], unsigned int size)
{
	if(size == 0) return;
	for(unsigned int i = 0; i < size; ++i)
	{
		arr[i] = er_rand_uint(min, max);
	}
}

void er_fill_floatarr(float min, float max, float arr[], unsigned int size)
{
	if(size == 0) return;
	for(unsigned int i = 0; i < size; ++i)
	{
		arr[i] = er_rand_float(min, max);
	}
}

void er_fill_doublearr(double min, double max, double arr[], unsigned int size)
{
	if(size == 0) return;
	for(unsigned int i = 0; i < size; ++i)
	{
		arr[i] = er_rand_double(min, max);
	}
}

void er_fill_ldoublearr(long double min, long double max, long double arr[], unsigned int size)
{
	if(size == 0) return;
	for(unsigned int i = 0; i < size; ++i)
	{
		arr[i] = er_rand_ldouble(min, max);
	}
}

void er_fill_boolarr(int arr[], unsigned int size)
{
	if(size == 0) return;
	for(unsigned int i = 0; i < size; ++i)
	{
		arr[i] = er_rand_bool();
	}
}

void er_fill_bytearr(char arr[], unsigned int size)
{
	if(size == 0) return;
	for(unsigned int i = 0; i < size; ++i)
	{
		arr[i] = er_rand_byte();
	}
}
