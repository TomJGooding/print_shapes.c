CFLAGS=-Wall -Wextra -pedantic -Werror

print_shapes.o: src/print_shapes.c
	$(CC) $(CFLAGS) src/print_shapes.c -o bin/print_shapes.o
