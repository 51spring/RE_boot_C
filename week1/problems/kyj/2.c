#include <stdio.h>

int main()
{
	int floor;

	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {

		// 공백
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}

		// 별
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("*");
		}

		printf("\n"); // 줄바꿈 (이거 중요)
	}
}