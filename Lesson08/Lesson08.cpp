#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Winodws OS���� �ܼ� ����¿� ���õ� �Լ����� ���� �Ǿ� �ִ� �������
#include <conio.h>

int main()
{
	//�ݺ��� : while, do ~ while, for
	/*
	while(���ǽ�)
	���ǽ��� ���϶� ����Ǵ� �ڵ�
	*/

	  int i = 10;
	  while (i < 10)
	  {
	  	printf("�ȳ��ϼ���\n");
	  		i++;
	  }
	  
	  
	  while (1) // ���ѹݺ�, ���ѷ���
	  {
	  	printf("�ȳ��ϼ���\n");
	  	if(i == 0) // i�� 0�� ���ٸ� while���� Ż���Ŵ
	  	break;
	  	i--;
	  }
	  i = 0;
	  //�������
	  // 0  1  2  3  4  5  6  7  8  9
	  //���� ���� ��µǵ��� while�ݸ��� �̿��Ͽ� �ڵ带 �ۼ��ϼ���
	  
	  while (i < 10)
	  {
	  	printf("%d\t",i++);
	  	if (i == 0)
	  	break;
	  	//i++;
	  }
	  printf("\n");

	//�������
	/*
	4 X 1 = 4
	4 X 2 = 8
	.
	.
	.
	4 X 9 = 36
	*/
	i = 1;
	while (i < 10)
	{
		printf("4 X %d = %d\n", i, 4 * i);
		i++;
	}printf("\n");


	//�������
	//20������ 3�� ����� ����ϼ���
	i = 1;
	while (i <= 20)
	{
		if (i % 3 == 0)
			printf("%d\t", i);
		i++;
	}printf("\n\n\n");

	//while���� �ݺ� Ƚ���� ��Ȯ���� ������ ����Ѵ�.
	char ch = '1';
	while (ch != 'x')
	{
		printf("1. ������\n");
		printf("2. ���Ͽ���\n");
		printf("3. ��������\n");
		printf("4. �μ�\n");
		printf("=============================\n");
		printf("X. ���α׷� ����\n");
		printf("=============================\n");
		printf("�޴��� �����ϼ��� : \n\n");
		
		//scanf("%c\n", &ch);
		//printf("���õ� �޴��� %d\n", ch);
		
		//conio.h�� ���ǵǾ� �ִ�.
		ch = _getch(); // ����Ű ���� �Ѱ��� Ű�Է��� �ٷ� ó���Ѵ�.
		
		switch (ch)
		{
		case '1':
			printf("�������� ���õǾ����ϴ�.\n");
			break;
		case '2':
			printf("���Ͽ��Ⱑ ���õǾ����ϴ�.\n");
			break;
		case '3':
			printf("���������� ���õǾ����ϴ�.\n");
			break;
		case '4':
			printf("�μⰡ ���õǾ����ϴ�.\n");;
			break;
		case 'X':
			printf("���α׷��� �����մϴ�.\n");
			break;
		default :
			printf("�ش� �޴��� �������� �ʽ��ϴ�.\n");
			break;
		}
	}





	printf("while �ݺ����� ����Ǿ����ϴ�.\n");
	return 0;
}