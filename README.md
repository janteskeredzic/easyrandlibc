# easyrandlibc
A C/C++ wrapper library for randomizing values.

## USAGE

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
This library requires gcc to be built.

```bash
sudo apt install gcc
```


# Docs

### Before using any functions you must init the seed, for simplicity purposes you can run the

```c
er_seed_auto();
```

### function which will automatically init the seed.
### Or input the seed manually:

```c
er_seed(unsigned int seed);
```


## GENERATING SINGLE VALUES IN RANGE

```c
er_rand_int(min, max); //Generates an int value between min and max inclusive
er_rand_uint(min, max); //Generates an uint value between min and max inclusive
er_rand_float(min, max); //Generates a float value between min and max inclusive
er_rand_double(min, max); //Generates a double....
er_rand_ldouble(min, max); //Generates a long double....
er_rand_bool(); //Generates a bool (0 or 1)
```
## Arrays can also be generated, but pay attention that they allocate memory on the heap,
## If you do not assign a pointer to them, they will be lost.

```c
er_rand_intparr(min, max, unsigned int arrsize); //Allocates an array on the heap and fills it with random values
er_rand_uintparr(...)
er_rand_floatparr(...)
er_rand_doubleparr(...)
er_rand_ldoubleparr(...)
er_rand_boolparr(...) // Generates an array of 0 and 1
```

