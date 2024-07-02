#include <stdio.h>
int main(void)
{
	int year;
	//년도를 입력받는다
	printf("년도를 입력하세요 : ");
		scanf_s("%d", &year);
	//윤년인지 판단할 수 있는 조건문 작성
		
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			printf("윤년");
		}
		 else
		{
			printf("윤년이 아니다");
		}

		return 0; 

}