#include <stdio.h>

int main() 
{
	int nｕｍ, i, j;

	printf("값을 입력하세요. ");
	scanf("%d", &nｕｍ);

	for (i = 0; i < nｕｍ; i++) //　모양의　윗부분
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("*"); //　모양의 상단　왼쪽부분
		}
		for (j = 0; j < (nｕｍ - 1 - i) * 2; j++)
		{
			printf(" "); //　공백
		}
		for (j = 0; j < i + 1; j++)
		{
			printf("*"); //　모양의 상단　오른쪽부분
		}
		printf("\n");
	}
	for (i = 0; i < nｕｍ; i++) //　모양의　아래
	{
		for (j = nｕｍ; j > i + 1; j--)
		{
			printf("*"); //　모양의 하단　왼쪽부분
		}
		for (j = 0; j < (nｕｍ * 2) - (nｕｍ - 1 - i) * 2; j++)
		{
			printf(" "); //　공백
		}
		for (j = nｕｍ; j > i + 1; j--)
		{
			printf("*"); //　모양의 하단　오른쪽부분
		}
		printf("\n");
	}
}
