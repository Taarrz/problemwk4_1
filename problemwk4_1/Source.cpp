#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf_s("%d", &n);
    int i, empty, star, emptycount, starcount;
    i = -(n - 1);
    while (i <= (n - 1)) {
        emptycount = (n - 1) - abs(i);
        starcount = (2 * abs(i)) + 1;
        if (emptycount != 0) {
            for (empty = 1; empty <= emptycount; empty++) {
                printf(" ");
            }
        }
        for (star = 1; star <= starcount; star++) {
            printf("*");
        }
        if (emptycount != 0) {
            for (empty = 1; empty <= emptycount; empty++) {
                printf(" ");
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}