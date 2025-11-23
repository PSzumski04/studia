#include <stdio.h>

int main() {
    int t[2][2] = { {1,0}, {0,1} };

    printf("|--|\n");

    for (int i = 0; i < 2; i++) {
        printf("|");
        for (int j = 0; j < 2; j++) {
            if (t[i][j] == 1)
                printf("x");
            else
                printf(" ");
        }
        printf("|\n");
    }

    printf("|--|\n");

    return 0;
}
