#include <stdio.h>

int main(void) {
	int number; // �Է¹��� ����
	int num; //�μ��� ���� ���� ����
	int num1 = 0, num2 = 1;

	printf("���ڸ� �Է��ϼ���.");
	scanf_s("%d", &number);

		if (number == 1)
		{
			printf("1��° �Ǻ���ġ ���� 0 �Դϴ�");
		}
		else if (number == 2)
	    {
			printf("2��° �Ǻ���ġ ���� 1 �Դϴ�");
	    }
	
	for (int i = 0; i < number - 2; i++)
	{
		num = num1 + num2;
		num1 = num2;
		num2 = num;
	}
	printf("%d��° �Ǻ���ġ ���� %d�Դϴ�\n", number, num);

	return 0;
}
