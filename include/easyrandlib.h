#ifndef EASYRANDLIB_H
#define EASYRANDLIB_H
#include <stddef.h>
#include <stdint.h>


#define ASCII_LOWER 1
#define ASCII_UPPER 2
#define ASCII_LETTERS 3
#define ASCII_PRINTABLE 4
#define ASCII_FULL 5


void er_seed(unsigned int seed);
void er_seed_auto(void);

int er_rand_int(int min, int max);
unsigned int er_rand_uint(unsigned int min, unsigned int max);
long er_rand_long(long min, long max);
unsigned long er_rand_ulong(unsigned long min, unsigned long max);
unsigned long int er_rand_ulongint(unsigned long int min, unsigned long max);
unsigned long long er_rand_ulonglong(unsigned long long min, unsigned long long max);
long int er_rand_longint(long int min, long int max);
long long er_rand_longlong(long long min, long long max);


float er_rand_float(float min, float max);
double er_rand_double(double min, double max);
long double er_rand_ldouble(long double min, long double max);
int er_rand_bool(void);
char er_rand_byte(void);
char er_rand_char(void);
char er_rand_charr(unsigned int CHAR_SET);


//FIXED SIZE TYPES
int8_t er_rand_int8(int8_t min, int8_t max);
int16_t er_rand_int16(int16_t min, int16_t max);
int32_t er_rand_int32(int32_t min, int32_t max);
int64_t er_rand_int64(int64_t min, int64_t max);

uint8_t er_rand_uint8(uint8_t min, uint8_t max);
uint16_t er_rand_uint16(uint16_t min, uint16_t max);
uint32_t er_rand_uint32(uint32_t min, uint32_t max);
uint64_t er_rand_uint64(uint64_t min, uint64_t max);



int8_t* er_rand_int8parr(int8_t min, int8_t max, size_t arrsize);
int16_t* er_rand_int16parr(int16_t min, int16_t max, size_t arrsize);
int32_t* er_rand_int32parr(int32_t min, int32_t max, size_t arrsize);
int64_t* er_rand_int64parr(int64_t min, int64_t max, size_t arrsize);

uint8_t* er_rand_uint8parr(uint8_t min, uint8_t max, size_t arrsize);
uint16_t* er_rand_uint16parr(uint16_t min, uint16_t max, size_t arrsize);
uint32_t* er_rand_uint32parr(uint32_t min, uint32_t max, size_t arrsize);
uint64_t* er_rand_uint64parr(uint64_t min, uint64_t max, size_t arrsize);

void er_fill_int8arr(int8_t min, int8_t max, int8_t* arr, size_t arrsize);
void er_fill_int16arr(int16_t min, int16_t max, int16_t* arr, size_t arrsize);
void er_fill_int32arr(int32_t min, int32_t max, int32_t* arr, size_t arrsize);
void er_fill_int64arr(int64_t min, int64_t max, int64_t* arr, size_t arrsize);
void er_fill_uint8arr(uint8_t min, uint8_t max, uint8_t* arr, size_t arrsize);
void er_fill_uint16arr(uint16_t min, uint16_t max, uint16_t* arr, size_t arrsize);
void er_fill_uint32arr(uint32_t min, uint32_t max, uint32_t* arr, size_t arrsize);
void er_fill_uint64arr(uint64_t min, uint64_t max, uint64_t* arr, size_t arrsize);
//---------------

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
