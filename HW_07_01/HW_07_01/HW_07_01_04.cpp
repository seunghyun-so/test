#include <stdio.h>
int main(void) 
{
	// ��ȣ�� ���ڸ� ���� ������ �����Ѵ�
    double num1, num2, result=0;
	char operato;

	// ���� �� �ȳ� ���� ���
    printf("Input Arithmetic Operation\n");
	printf("ex)     3.4 * 8.5\n");
	printf("        2.9 - 5.4\n");
	printf("        3.9 * 8.0\n");
	printf("        3.9 ^ 8\n");
	
	// ���� �Է� �ޱ�
	printf("input : ");
	scanf("%lf %c %lf", &num1, &operato, &num2);

    //�����ڿ� ���缭 ��� ����
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
		//�и� 0�� �� �� �����Ƿ� ���� �ۼ��߽��ϴ�
		if (num2 == 0)
		{
			printf("�и𿡴� 0�� �� �� �����ϴ�");
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
