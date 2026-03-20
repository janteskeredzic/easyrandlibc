#ifndef EASYRANDLIB_H
#define EASYRANDLIB_H
#include <stddef.h>

#define ASCII_LOWER 1
#define ASCII_UPPER 2
#define ASCII_LETTERS 3
#define ASCII_PRINTABLE 4
#define ASCII_FULL 5


void er_seed(unsigned int seed);
void er_seed_auto(void);

int er_rand_int(int min, int max);
unsigned int er_rand_uint(unsigned int min, unsigned int max);
float er_rand_float(float min, float max);
double er_rand_double(double min, double max);
long double er_rand_ldouble(long double min, long double max);
int er_rand_bool(void);
char er_rand_byte(void);
char er_rand_char(void);
char er_rand_charr(unsigned int CHAR_SET);


int* er_rand_intparr(int min, int max, size_t arrsize);
unsigned int* err_rand_utintparr(unsigned int min, unsigned int max, size_t arrsize);
float* err_rand_floatparr(float min, float max, size_t arrsize);
double* err_rand_doubleparr(double min, double max, size_t arrsize);
long double* er_rand_ldoubleparr(long double min, long double max, size_t arrsize);
int* er_rand_boolparr(size_t arrsize);
char* er_rand_byteparr(size_t arrsize);
char* er_rand_charparr(size_t arrsize);
char* er_rand_charrparr(unsigned int CHAR_SET, size_t arrsize);

void er_fill_intarr(int min, int max, int* arr, size_t size);
void er_fill_uintarr(unsigned int min, unsigned int max, unsigned int* arr, size_t size);
void er_fill_floatarr(float min, float max, float* arr, size_t size);
void er_fill_doublearr(double min, double max, double* arr, size_t size);
void er_fill_ldoublearr(long double min, long double max, long double* arr, size_t size);
void er_fill_boolarr(int* arr, size_t size);
void er_fill_bytearr(char* arr, size_t size);
void er_fill_chararr(char* arr, size_t size);
void er_fill_charrarr(unsigned int CHAR_SET, char* arr, size_t size);






#endif
