#include <stdio.h>
int main(void)
{
	// ������ �����Ѵ�
    float num1 = 0;
	float num2 = 0;
	float num3 = 0;
	float num4 = 0;
	float num5 = 0;
	// ��հ� �ִ�, �ּҸ� ������  ������ �����Ѵ�
	float avg = 0;
	float max, min = 0;
	

	//����ڷ� ���� ���� �Է¹޴´�
	printf("1 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf_s("%f", &num1);
	printf("2 ��° �Ǽ��� �Է��Ͻÿ�. "); 
	scanf_s("%f", &num2);
	printf("3 ��° �Ǽ��� �Է��Ͻÿ�. "); 
	scanf_s("%f", &num3);
	printf("4 ��° �Ǽ��� �Է��Ͻÿ�. "); 
	scanf_s("%f", &num4);
	printf("5 ��° �Ǽ��� �Է��Ͻÿ�. "); 
	scanf_s("%f", &num5);

	//��հ��� ���Ѵ�
	avg = (num1 + num2 + num3 + num4 + num5)/ 5;
	//�ִ� �ּҸ� ���Ѵ�
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
	//����� ����Ѵ�
	printf("---- ��� ----\n");
	printf("����� %f�Դϴ�.\n",avg);
	printf("�ִ��� %f�Դϴ�.\n",max);
	printf("�ּҰ��� %f�Դϴ�.\n",min);
	
	return 0;
}