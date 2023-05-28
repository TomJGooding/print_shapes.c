#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

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
        int shape_span = width - row;
        for (int col = 0; col < shape_span; ++col) {
            putchar('#');
        }
        putchar('\n');
    }
}

void print_sideways_triangle(const int width) {
    const int height = (width * 2) - 1;
    for (int row = 1; row <= height; ++row) {
        int shape_span = width - abs(width - row);
        for (int col = 1; col <= shape_span; ++col) {
            putchar('#');
        }
        putchar('\n');
    }
}

void print_inverted_pyramid(const int width) {
    assert(width % 2 != 0 && "pyramid width must be odd");
    const int height = (width / 2) + 1;
    for (int row = 0; row < height; ++row) {
        int left_pad = row;
        for (int pad = 0; pad < left_pad; ++pad) {
            putchar(' ');
        }
        int shape_span = width - (left_pad * 2);
        for (int span = 0; span < shape_span; ++span) {
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

    printf("\nSIDEWAYS TRIANGLE\n\n");
    print_sideways_triangle(4);

    printf("\nINVERTED PYRAMID\n\n");
    print_inverted_pyramid(7);
    return 0;
}
