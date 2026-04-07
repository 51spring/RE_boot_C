#include <stdio.h>

int main()
{
	int paper[100][100] = { 0 }; // 100x100 도화지, 0은 흰색 도화지, 1은 검은 색종이가 붙은 칸
	int n; // 색종이 개수
	int x, y; // 좌표
	int black_area = 0; // 검은색 영역의 넓이 저장

	scanf_s("%d", &n);

	for (int k = 0; k < n; k++) {
		scanf_s("%d %d", &x, &y);

		// 입력받은 좌표를 시작으로 가로 10칸, 세로 10칸을 칠한다
		for (int i = x; i < x + 10; i++) {
			for (int j = y; j < y + 10; j++) {
				paper[i][j] = 1;
			}
		}
	}

	// 1이면 검은색 색종이 => 1의 개수는 검은색 색종이 영역의 넓이
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] == 1) {
				black_area++;
			}
		}
	}

	printf("%d\n", black_area);
	return 0;
}