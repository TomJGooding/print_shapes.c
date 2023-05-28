#include <stdio.h>

void print_square(const int width) {
    for (int row = 0; row < width; ++row) {
        for (int col = 0; col < width; ++col) {
            putchar('#');
        }
        putchar('\n');
    }
}

void print_half_square(const int width) {
    for (int row = 0; row < width; ++row) {
        for (int col = 0; col < width - row; ++col) {
            putchar('#');
        }
        putchar('\n');
    }
}

int main(void) {
    printf("\nSQUARE\n\n");
    print_square(5);

    printf("\nHALF SQUARE\n\n");
    print_half_square(5);

    return 0;
}
