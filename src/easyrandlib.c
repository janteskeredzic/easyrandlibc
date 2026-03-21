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
	unsigned int range = max - min + 1U;
	unsigned int limit = (RAND_MAX / range) * range;
	unsigned int r;

	do{
		r = (uint32_t)rand();
	}while(r >= limit);
	return min + (r % range);
}

long er_rand_long(long min, long max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		unsigned long temp = max;
		max = min;
		min = temp;
	}
	unsigned long range = max - min + 1U;
	unsigned long limit = (RAND_MAX / range) * range;
	unsigned long r;

	do{
		r = (unsigned long)rand();
	}while(r >= limit);
	return min + (r % range);
}


unsigned long er_rand_ulong(unsigned long min, unsigned long max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		unsigned long temp = max;
		max = min;
		min = temp;
	}
	unsigned long range = max - min + 1U;
	unsigned long limit = (RAND_MAX / range) * range;
	unsigned long r;

	do{
		r = (unsigned long)rand();
	}while(r >= limit);
	return min + (r % range);

}

unsigned long int er_rand_ulongint(unsigned long int min, unsigned long int max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		unsigned long int temp = max;
		max = min;
		min = temp;
	}
	unsigned long int range = max - min + 1U;
	unsigned long int limit = (RAND_MAX / range) * range;
	unsigned long int r;

	do{
		r = (unsigned long int)rand();
	}while(r >= limit);
	return min + (r % range);

}

unsigned long long er_rand_ulonglong(unsigned long long min, unsigned long long max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		unsigned long long temp = max;
		max = min;
		min = temp;
	}
	unsigned long long range = max - min + 1U;
	unsigned long long limit = (RAND_MAX / range) * range;
	unsigned long long r;

	do{
		r = (unsigned long long)rand();
	}while(r >= limit);
	return min + (r % range);

}

long int er_rand_longint(long int min, long int max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		long int temp = max;
		max = min;
		min = temp;
	}
	long int range = max - min + 1U;
	long int limit = (RAND_MAX / range) * range;
	long int r;

	do{
		r = (long int)rand();
	}while(r >= limit);
	return min + (r % range);

}

long long er_rand_longlong(long long min, long long max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		long long temp = max;
		max = min;
		min = temp;
	}
	long long range = max - min + 1U;
	long long limit = (RAND_MAX / range) * range;
	long long r;

	do{
		r = (long long)rand();
	}while(r >= limit);
	return min + (r % range);

}

//FIXED SIZE TYPE FUNCTIONS
int8_t er_rand_int8(int8_t min, int8_t max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		int8_t temp = max;
		max = min;
		min = temp;
	}
	int8_t range = max - min + 1U;
	int8_t limit = (RAND_MAX / range) * range;
	int8_t r;

	do{
		r = (int8_t)rand();
	}while(r >= limit);
	return min + (r % range);

}

int16_t er_rand_int16(int16_t min, int16_t max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		int16_t temp = max;
		max = min;
		min = temp;
	}
	int16_t range = max - min + 1U;
	int16_t limit = (RAND_MAX / range) * range;
	int16_t r;

	do{
		r = (int16_t)rand();
	}while(r >= limit);
	return min + (r % range);

}

int32_t er_rand_int32(int32_t min, int32_t max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		int32_t temp = max;
		max = min;
		min = temp;
	}
	int32_t range = max - min + 1U;
	int32_t limit = (RAND_MAX / range) * range;
	int32_t r;

	do{
		r = (int32_t)rand();
	}while(r >= limit);
	return min + (r % range);

}

int64_t er_rand_int64(int64_t min, int64_t max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		int64_t temp = max;
		max = min;
		min = temp;
	}
	int64_t range = max - min + 1U;
	int64_t limit = (RAND_MAX / range) * range;
	int64_t r;

	do{
		r = (int64_t)rand();
	}while(r >= limit);
	return min + (r % range);

}

uint8_t er_rand_uint8(uint8_t min, uint8_t max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		uint8_t temp = max;
		max = min;
		min = temp;
	}
	uint8_t range = max - min + 1U;
	uint8_t limit = (RAND_MAX / range) * range;
	uint8_t r;

	do{
		r = (uint8_t)rand();
	}while(r >= limit);
	return min + (r % range);

}

uint16_t er_rand_uint16(uint16_t min, uint16_t max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		uint16_t temp = max;
		max = min;
		min = temp;
	}
	uint16_t range = max - min + 1U;
	uint16_t limit = (RAND_MAX / range) * range;
	uint16_t r;

	do{
		r = (uint16_t)rand();
	}while(r >= limit);
	return min + (r % range);

}

uint32_t er_rand_uint32(uint32_t min, uint32_t max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		uint32_t temp = max;
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

uint64_t er_rand_uint64(uint64_t min, uint64_t max)
{
	if(min==max)
	{
		return min;
	}
	if( min > max )
	{
		uint64_t temp = max;
		max = min;
		min = temp;
	}
	uint64_t range = max - min + 1U;
	uint64_t limit = (RAND_MAX / range) * range;
	uint64_t r;

	do{
		r = (uint64_t)rand();
	}while(r >= limit);
	return min + (r % range);

}


//----------------



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

char er_rand_char(void)
{
	return er_rand_uint(32, 126);
}

char er_rand_charr(unsigned int CHAR_SET)
{
	switch(CHAR_SET)
	{
	case 1:
		return er_rand_uint(97, 122);
	break;
	case 2:
		return er_rand_uint(65, 90);
	break;
	case 3:
		return er_rand_uint(65, 122);
	break;
	case 4:
		return er_rand_uint(32, 126);
	break;
	case 5:
		return er_rand_uint(0, 127);
	break;
	default:
		return er_rand_uint(0, 127);
	break;
	}
	return 0;
}


int* er_rand_intparr(int min, int max, size_t arrsize)
{
	int* t_arr = malloc(arrsize * sizeof(int));
	for(size_t i = 0; i < arrsize; ++i)
	{
		*(t_arr+i) = er_rand_int(min, max); 
	}
	return t_arr;
}

unsigned int* er_rand_uintparr(unsigned int min, unsigned int max, size_t arrsize)
{
	unsigned int* t_arr = malloc(arrsize * sizeof(unsigned int));
	for(size_t i = 0; i < arrsize; ++i)
	{
		*(t_arr+i) = er_rand_uint(min, max); 
	}
	return t_arr;
}

float* er_rand_floatparr(float min, float max, size_t arrsize)
{
	float* t_arr = malloc(arrsize * sizeof(float));
	for(size_t i = 0; i < arrsize; ++i)
	{
		*(t_arr+i) = er_rand_float(min, max); 
	}
	return t_arr;
}


double* er_rand_doubleparr(double min, double max, size_t arrsize)
{
	double* t_arr = malloc(arrsize * sizeof(double));
	for(size_t i = 0; i < arrsize; ++i)
	{
		*(t_arr+i) = er_rand_double(min, max); 
	}
	return t_arr;
}

long double* er_rand_ldoubleparr(long double min, long double  max, size_t arrsize)
{
	long double* t_arr = malloc(arrsize * sizeof(long double));
	for(size_t i = 0; i < arrsize; ++i)
	{
		*(t_arr+i) = er_rand_ldouble(min, max); 
	}
	return t_arr;
}


int* er_rand_boolparr(size_t arrsize)
{
	int* t_arr = malloc(arrsize * sizeof(int));
	for(size_t i = 0; i < arrsize; ++i)
	{
		*(t_arr+i) = er_rand_bool();
	}
	return t_arr;
}

char* er_rand_byteparr(size_t arrsize)
{
	char* t_arr = malloc(arrsize * sizeof(char));
	for(size_t i = 0; i < arrsize; ++i)
	{
		*(t_arr+1) = er_rand_byte();
	}
	return t_arr;
}

char* er_rand_charparr(size_t arrsize)
{
	char* t_arr = malloc(arrsize * sizeof(char));
	for(size_t i = 0; i < arrsize; ++i)
	{
		*(t_arr+1) = er_rand_char();
	}
	return t_arr;
}

char* er_rand_charrparr(unsigned int CHAR_SET, size_t arrsize)
{
	char* t_arr = malloc(arrsize * sizeof(char));
	for(size_t i = 0; i < arrsize; ++i)
	{
		*(t_arr+1) = er_rand_charr(CHAR_SET);
	}
	return t_arr;
}

void er_fill_intarr(int min, int max, int* arr, size_t size)
{
	if(size == 0) return;
	for(size_t i = 0; i < size; ++i)
	{
		*(arr+i) = er_rand_int(min, max);
	}
}

void er_fill_uintarr(unsigned int min, unsigned int max, unsigned int* arr, size_t size)
{
	if(size == 0) return;
	for(size_t i = 0; i < size; ++i)
	{
		*(arr+i) = er_rand_uint(min, max);
	}
}

void er_fill_floatarr(float min, float max, float* arr, size_t size)
{
	if(size == 0) return;
	for(size_t i = 0; i < size; ++i)
	{
		*(arr+i) = er_rand_float(min, max);
	}
}

void er_fill_doublearr(double min, double max, double* arr, size_t size)
{
	if(size == 0) return;
	for(size_t i = 0; i < size; ++i)
	{
		*(arr+i) = er_rand_double(min, max);
	}
}

void er_fill_ldoublearr(long double min, long double max, long double* arr, size_t size)
{
	if(size == 0) return;
	for(size_t i = 0; i < size; ++i)
	{
		*(arr+i) = er_rand_ldouble(min, max);
	}
}

void er_fill_boolarr(int* arr, size_t size)
{
	if(size == 0) return;
	for(size_t i = 0; i < size; ++i)
	{
		*(arr+i) = er_rand_bool();
	}
}

void er_fill_bytearr(char* arr, size_t size)
{
	if(size == 0) return;
	for(size_t i = 0; i < size; ++i)
	{
		*(arr+i) = er_rand_byte();
	}
}

void er_fill_chararr(char* arr, size_t size)
{
	if(size == 0) return;
	for(size_t i = 0; i < size; ++i)
	{
		*(arr+i) = er_rand_char();
	}
}

void er_fill_charrarr(unsigned int CHAR_SET, char* arr, size_t size)
{
	if(size == 0) return;
	for(size_t i = 0; i < size; ++i)
	{
		*(arr+i) = er_rand_charr(CHAR_SET);
	}
}
