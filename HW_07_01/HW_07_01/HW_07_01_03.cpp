#include <stdio.h>
int main(void)
{
	int year;
	//�⵵�� �Է¹޴´�
	printf("�⵵�� �Է��ϼ��� : ");
		scanf_s("%d", &year);
	//�������� �Ǵ��� �� �ִ� ���ǹ� �ۼ�
		
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			printf("����");
		}
		 else
		{
			printf("������ �ƴϴ�");
		}

		return 0; 

}