#include <stdio.h>

int main(void) {
	int number; // 입력받을 변수
	int num; //두수의 합을 받을 변수
	int num1 = 0, num2 = 1;

	printf("숫자를 입력하세요.");
	scanf_s("%d", &number);

		if (number == 1)
		{
			printf("1번째 피보나치 수는 0 입니다");
		}
		else if (number == 2)
	    {
			printf("2번째 피보나치 수는 1 입니다");
	    }
	
	for (int i = 0; i < number - 2; i++)
	{
		num = num1 + num2;
		num1 = num2;
		num2 = num;
	}
	printf("%d번째 피보나치 수는 %d입니다\n", number, num);

	return 0;
}
