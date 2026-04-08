#include <stdio.h>
#include <string.h>

int main()
{
    char doc[2501]; // 문서
    char word[51];  // 찾을 단어
    int count = 0;  // 찾은 횟수
    int i, j;
    int docLen, wordLen;
    int same;

    // 공백 포함 한 줄 입력
    fgets(doc, sizeof(doc), stdin);
    fgets(word, sizeof(word), stdin);

    // fgets로 받은 줄바꿈 제거
    doc[strcspn(doc, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';

    docLen = strlen(doc);
    wordLen = strlen(word);

    i = 0;

    // 단어 길이만큼 비교할 수 있는 위치까지만 반복
    while (i <= docLen - wordLen)
    {
        same = 1; // 일단 같다고 가정

        // 현재 위치에서 단어와 같은지 확인
        for (j = 0; j < wordLen; j++)
        {
            if (doc[i + j] != word[j])
            {
                same = 0; // 다르면 실패
                break;
            }
        }

        if (same)
        {
            count++;      // 찾음
            i += wordLen; // 겹치지 않게 단어 길이만큼 이동
        }
        else
        {
            i++; // 아니면 한 칸만 이동
        }
    }

    printf("%d\n", count);

    return 0;
}