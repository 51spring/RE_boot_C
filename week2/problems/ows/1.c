#include <stdio.h>

int main() {
    int n;
    int paper[100][100] = {0};
    int x, y;
    int i, j, k, l;
    int area = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);

        for (j = x; j < x + 10; j++) {
            for (k = y; k < y + 10; k++) {
                paper[j][k] = 1;
            }
        }
    }

    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            if (paper[i][j] == 1) {
                area++;
            }
        }
    }

    printf("%d\n", area);

    return 0;
}