#include<stdio.h>
main() {
    int row, star, space, level, tops = 0;
    scanf_s("%d", &level);
    for (row = 1; row <= level; ++row, tops = 0) {
        for (space = 1; space <= level - row; ++space) {
            printf("  ");
        }
        while (tops != 2 * row - 1) {
            printf("* ");
            ++tops;
        }
        printf("\n");
    }
    for (row = level - 1; row >= 1; --row) {
        for (space = 0; space < level - row; ++space)
            printf("  ");
        for (star = row; star <= 2 * row - 1; ++star)
            printf("* ");
        for (star = 0; star < row - 1; ++star)
            printf("* ");
        printf("\n");
    }
}