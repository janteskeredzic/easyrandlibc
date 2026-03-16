#ifndef EASYRANDLIB_H
#define EASYRANDLIB_H


void er_seed(unsigned int seed);
void er_seed_auto(void);

int er_rand_int(int min, int max);
unsigned int er_rand_uint(unsigned int min, unsigned int max);
float er_rand_float(float min, float max);
double er_rand_double(double min, double max);
long double er_rand_ldouble(long double min, long double max);
int er_rand_bool(void);
char er_rand_byte(void);



int* er_rand_intparr(int min, int max, unsigned int arrsize);
unsigned int* err_rand_utintparr(unsigned int min, unsigned int max, unsigned int arrsize);
float* err_rand_floatparr(float min, float max, unsigned int arrsize);
double* err_rand_doubleparr(double min, double max, unsigned int arrsize);
long double* er_rand_ldoubleparr(long double min, long double max, unsigned int arrsize);
int* er_rand_boolparr(unsigned int arrsize);
char* er_rand_byteparr(unsigned int arrsize);



void er_fill_intarr(int min, int max, int arr[], unsigned int size);
void er_fill_uintarr(unsigned int min, unsigned int max, unsigned int arr[], unsigned int size);
void er_fill_floatarr(float min, float max, float arr[], unsigned int size);
void er_fill_doublearr(double min, double max, double arr[], unsigned int size);
void er_fill_ldoublearr(long double min, long double max, long double arr[], unsigned int size);
void er_fill_boolarr(int arr[], unsigned int size);
void er_fill_bytearr(char arr[], unsigned int size);






#endif
