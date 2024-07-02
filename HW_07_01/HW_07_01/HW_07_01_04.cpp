#include <stdio.h>
int main(void) 
{
	// 부호와 숫자를 받을 변수를 선언한다
    double num1, num2, result=0;
	char operato;

	// 예시 및 안내 문구 출력
    printf("Input Arithmetic Operation\n");
	printf("ex)     3.4 * 8.5\n");
	printf("        2.9 - 5.4\n");
	printf("        3.9 * 8.0\n");
	printf("        3.9 ^ 8\n");
	
	// 값을 입력 받기
	printf("input : ");
	scanf("%lf %c %lf", &num1, &operato, &num2);

    //연산자에 맞춰서 계산 진행
	if (operato == '+')
	{
		printf("%.2f + %.2f = %f", num1, num2, num1 + num2);
	}
	else if (operato == '-')
	{
		printf("%.2f - %.2f = %f", num1, num2, num1 - num2);
	}
	else if (operato == '*')
	{
		printf("%.2f * %.2f = %f", num1, num2, num1 * num2);
	}
	else if (operato == '/')
	{
		//분모에 0이 들어갈 수 없으므로 예외 작성했습니다
		if (num2 == 0)
		{
			printf("분모에는 0이 올 수 없습니다");
		}
		else
		{
			printf("%.2f / %.2f = %f", num1, num2, num1 / num2);
		}
	}
	else if (operato == '^')
	{
		for (int operato = 1; operato <= num2; operato++)
		{
			result *= num1;
	    }
		printf("%.2f ^ %.2f = %f", num1, num2, result);
	}
	return 0;

}
