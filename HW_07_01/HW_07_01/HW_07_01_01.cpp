#include <stdio.h>
int main(void)
{
	// 변수를 선언한다
    float num1 = 0;
	float num2 = 0;
	float num3 = 0;
	float num4 = 0;
	float num5 = 0;
	// 평균과 최대, 최소를 결정할  변수를 선언한다
	float avg = 0;
	float max, min = 0;
	

	//사용자로 부터 값을 입력받는다
	printf("1 번째 실수를 입력하시오. ");
	scanf_s("%f", &num1);
	printf("2 번째 실수를 입력하시오. "); 
	scanf_s("%f", &num2);
	printf("3 번째 실수를 입력하시오. "); 
	scanf_s("%f", &num3);
	printf("4 번째 실수를 입력하시오. "); 
	scanf_s("%f", &num4);
	printf("5 번째 실수를 입력하시오. "); 
	scanf_s("%f", &num5);

	//평균값을 구한다
	avg = (num1 + num2 + num3 + num4 + num5)/ 5;
	//최대 최소를 구한다
	max = num1;

	if (num2 > max) 
	{
		max = num2; 
	}
	if (num3 > max) 
	{
		max = num3; 
	}
	if (num4 > max) 
	{
		max = num4; 
	}
    if (num5 > max) 
	{
		max = num5; 
	}

	min = num1;
	if (num2 < min) {
		min = num2;
	}
	if (num3 < min) {
		min = num3;
	}
	if (num4 < min) {
		min = num4;
	}
	if (num5 < min) {
		min = num5;
	}
	//결과를 출력한다
	printf("---- 결과 ----\n");
	printf("평균은 %f입니다.\n",avg);
	printf("최댓값은 %f입니다.\n",max);
	printf("최소값은 %f입니다.\n",min);
	
	return 0;
}