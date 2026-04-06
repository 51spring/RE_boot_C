#include <stdio.h>

int main()
{
	int floor;

	scanf_s("%d", &floor);

	for (int i = 1; i <= floor; i++) {
		// 공백
		for (int j = i; j < floor; j++) {
			printf(" ");
		}
		// 별
		for (int k = 1; k < 2 * i ; k++) {
			printf("*");
		}
		printf("\n"); // 줄바꿈 (이거 중요)
	}
	for (int i = 1; i < floor; i++) {
		for (int j = 0; j <i; j++) {
			printf(" ");
		}
		for (int k = 1; k < 2 * (floor - i); k++) {
			printf("*");
		}
		printf("\n");
	}
}