#Compiler
CC = gcc

CFLAGS = -Wall -Wextra -O2 -Iinclude


LIB = easyrandlib.a

SRC = src/easyrandlib.c
OBJ = $(patsubst src/%.c,obj/%.o,$(SRC))


all: $(LIB)

$(LIB): $(OBJ)
	ar rcs $@ $^

obj/%.o: src/%.c | obj
	$(CC) $(CFLAGS) -c $< -o $@


obj:
	mkdir -p obj


example: $(LIB) examples/easyrand_examples.c
	$(CC) $(CFLAGS) examples/easyrand_examples.c -L. -l:easyrandlib.a -o examples/test

clean:
	rm -rf obj $(LIB) examples/test


.PHONY: all clean example obj
