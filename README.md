# easyrandlibc
easyrandlib is a library for C/C++ that streamlines generating random values, its obviously a very light library.
Its easy to use and does not require the user to worry about edge cases, modulo operators or seeding.

## BUILDING ON WINDOWS IS NOT SUPPORTED YET
### If you wish to use this library on windows for the time being you can place the header and source file directly inside of your project and include the header that way.

## BUILD LINUX

To build easyrandlib for C/C++ in linux make sure you have make installed:

```bash
sudo apt install make
```

After you have installed make, cd to where you have cloned the repo and build it

```bash
make
```

If you wish to build the example source file do:

```bash
make example
```

To remove build you can use:

```bash
make clean
```

## IMPORTANT
This library requires gcc to be built on linux.

```bash
sudo apt install gcc
```


# Docs

### Before using any functions you must init the seed, for simplicity purposes you can run the

```c
er_seed_auto(); //Automatically seeds based on time
```

### function which will automatically init the seed.
### Or input the seed manually:

```c
er_seed(unsigned int seed);

er_seed(42);
er_seed(67);
er_seed(69);
er_seed(420);
er_seed(1337);

```

## GENERATING SINGLE VALUES IN RANGE

```c
er_rand_int(min, max); //Returns a random int value between min and max inclusive
er_rand_uint(min, max); //Returns a random uint value between min and max inclusive
er_rand_float(min, max); //Returns a random float value between min and max inclusive
er_rand_double(min, max); //Returns a random double....
er_rand_ldouble(min, max); //Returns a radnom long double....
er_rand_bool(); //Returns either 0 or 1
er_rand_char(); //Returns a random ASCII char -> look down below for the er_rand_charr(CHAR_SET) func
er_rand_charr(unsigned int CHAR_SET); 

int randomInt = er_rand_int(10, 60);

```
## FIXED SIZE TYPES
easyrandlib supports generation for signed and unsigned fixed size integer types: 8, 16, 32 and 64 bit.

```c
er_rand_int8(int8_t min, int8_t max);
er_rand_int16(int16_t min, int16_t max);
er_rand_int32(int32_t min, int32_t max);
er_rand_int64(int64_t min, int64_t max);

er_rand_uint8(uint8_t min, uint8_t max);
er_rand_uint16(uint16_t min, uint16_t max);
er_rand_uint32(uint32_t min, uint32_t max);
er_rand_uint64(uint64_t min, uint64_t max);
```
### Also supports generating and filling arrays for all types
```c
int8_t* = er_rand_int8parr(min, max, 64);

int32_t fixedIntArr[64] = {0};
er_fill_int32arr(min, max, fixedIntArr, 64);
```

## Arrays can also be generated, but pay attention that they allocate memory on the heap,
## If you do not assign a pointer to them, they will be lost.

```c
er_rand_intparr(min, max, size_t arrsize); //Allocates an array on the heap and fills it with random values
er_rand_uintparr(min, max, size_t arrsize)
er_rand_floatparr(min, max, size_t arrsize)
er_rand_doubleparr(min, max, size_t arrsize)
er_rand_ldoubleparr(min, max, size_t arrsize)
er_rand_boolparr(size_t arrsize) // Generates an array of 0 and 1
er_rand_charparr(size_t arrsize);
er_rand_charrparr(unsigned int CHAR_SET, size_t arrsize);

int* intPointerArray = er_rand_intparr(10, 60, 25);
free(intPointerArray);

```

## Filling arrays
### For stack stack and pointer arrays, does not manipulate allocated memory
```c
er_fill_intarr(min, max, int*  arr, size_t size); // Fills an int array with random values in the range
er_fill_uintarr(min, max, unsigned int* arr, size_t size);
er_fill_floatarr(min, max, float* arr, size_t size);
er_fill_doublearr(min, max, double* arr, size_t size);
er_fill_ldoublearr(min, max, long double* arr, size_t size);
er_fill_boolarr(int* arr, size_t size); // Fills an int array with 0 or 1
er_fill_bytearr(char* arr, size_t size);
er_fill_chararr(char* arr, size_t size);
er_fill_charrarr(unsigned int CHAR_SET, char* arr, size_t size);

int intArray[50] = {0};
float* p_floatArray = malloc(20 * sizeof(int));
er_fill_intarr(10, 60, intArray, 50); //Fills entire array with random values
er_fill_intarr(25, 225, intArray, 25); //Fills first 25 with random values
er_fill_intarr(24.2f, 500.0f, p_floatArray, 20);

```

# BYTE GENERATION
## easyrandlib can also generate random bytes

```c
char randomByte = er_rand_byte(); // Returns a random byte as char 
```

## Random byte arrays can also be generated (heap)

```c
char* randomBytePointerArray = er_rand_byteparr(50); //Returns a pointer of 50 random bytes
```

## Also works for static array filling

```c
char byteArray[50] = {0};
er_fill_bytearr(byteArray, 50);
```

# MACROS
### Currently easyrandlib supports macros for random chars (ASCII)
### NOTE THAT USING THE 'er_rand_char' function does not take params, it will always generate a random printable char.
The 'er_rand_charr' takes a param in the form of macros below:
```c
ASCII_LOWER
ASCII_UPPER
ASCII_LETTERS
ASCII_PRINTABLE
ASCII_FULL
```

