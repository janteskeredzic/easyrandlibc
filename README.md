# easyrandlibc
easyrandlib is a library for C/C++ that streamlines generating random values, its obviously a very light library.
Its easy to use and does not require the user to worry about edge cases, modulo operators or implicit seeding.

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


int randomInt = er_rand_int(10, 60);

```
## Arrays can also be generated, but pay attention that they allocate memory on the heap,
## If you do not assign a pointer to them, they will be lost.

```c
er_rand_intparr(min, max, unsigned int arrsize); //Allocates an array on the heap and fills it with random values
er_rand_uintparr(min, max, unsigned int arrsize)
er_rand_floatparr(min, max, unsigned int arrsize)
er_rand_doubleparr(min, max, unsigned int arrsize)
er_rand_ldoubleparr(min, max, unsigned int arrsize)
er_rand_boolparr() // Generates an array of 0 and 1


int* intPointerArray = er_rand_intparr(10, 60, 25);
free(intPointerArray);

```

## Filling arrays
### For stack and global C arrays, does not allocate memory on the heap
### Size can be smaller than array size, but can not be larger since it's a C-style static array.
```c
er_fill_intarr(min, max, arr[], unsigned int size); // Fills an int array with random values in the range
er_fill_uintarr(min, max, arr[], unsigned int size);
er_fill_floatarr(min, max, arr[], unsigned int size);
er_fill_doublearr(min, max, arr[], unsigned int size);
er_fill_ldoublearr(min, max, arr[], unsigned int size);
er_fill_boolarr(arr[], unsigned int size); // Fills an int array with 0 or 1

int intArray[50] = {0};
er_fill_intarr(10, 60, intArray, 50); //Fills entire array with random values
er_fill_intarr(25, 225, intArray, 25); //Fills first 25 with random values

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



