#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
git config --global user.name "VArMaDa"
git config --global user.email "gojhs82@naver.com"

git clone https://github.com/JHSArmada/C_Lesson.git

������ �Ѵ�
���� �ϰ�....

git add.
git commit -m
git push origin main

//�п�����
git pull origin main

*/


int main()
{
	// ���� ������
	// ���ǽ�(�񱳽�, ����) ? ���϶� ��ȯ�� : �����϶� ��ȯ��;

	int n = 5;
	char ch;
	ch = (n % 2) == 0 ? 'e' : 'o';
	printf("ch = %c\n", ch);

	int n2 = 4;
	ch = (n2 % 2) == 0 ? 'e' : 'o';
	printf("ch = %c\n", ch);

	// ��� : if, switch
	// if��
	/*

	if(���ǽ�)
	{ //local ����
		���ǽ��� ���϶� ����Ǵ� ��ɹ�1
		���ǽ��� ���϶� ����Ǵ� ��ɹ�2
		.....
	}

	if(���ǽ�)
	{
		���ǽ��� ���϶� ����Ǵ� ��ɹ�1
		���ǽ��� ���϶� ����Ǵ� ��ɹ�2
		.....
	}else
	{
		���ǽ��� �����϶� ����Ǵ� ��ɹ�1
		���ǽ��� �����϶� ����Ǵ� ��ɹ�1
		.....
	}

	if(���ǽ�)
	{
		���ǽ��� ���϶� ����Ǵ� ��ɹ���...
		.....
	}else if(���ǽ�2)
	{
		���ǽ�2 �����϶� ����Ǵ� ��ɹ�...
	}else if(���ǽ�3)
	{
		���ǽ�3 �����϶� ����Ǵ� ��ɹ�...
	}else
	{
	���� ��� ���ǽĵ��� �����϶� ����Ǵ� ��ɹ���
	}

	*/

	//if���� ù��° ����
	if (!(n%2))//(n2 % 2 == 0)
	{
		printf("%d�� ¦���Դϴ�.\n", n);
	}

	//if���� �ι�° ����
	if (n % 2 == 0)
	{
		printf("%d�� ¦���Դϴ�.\n", n);
	}
	else
	{
		printf("%d�� Ȧ���Դϴ�.\n", n);
	}

	//���̿� ���� ������� �����ϱ�
	int age = 15;
	int payment = 0;

	if (age >= 65)
	{
		payment = 0;
	}
	else if (age < 65 && age >18) // 19 ~ 64
	{
		payment = 1500;
	}
	else if (age <= 18 && age >= 8)
	{
		payment = 1000;
	}
	else
	{
		payment = 500;
	}
	printf("��������� %d�Դϴ�.\n", payment);
	

	// ����
	// ������ 100 ~ 90 A����
	// ������ 89 ~ 80 B����
	// ������ 79 ~ 70 C����
	// ������ 69 ~ 60 D����
	// �׿ܿ��� F����
	// 
	//�������
	// ������ �Է��ϼ���(0~100������) >>>>> xx
	//������ 90���̰�, A���� �Դϴ�.

	printf("==========================");
	int score;
	char cha;
	

	printf("������ �Է��ϼ���(0~100������) >>>>>");
	scanf("%d", &score);
	if (score >= 90)
	{
		cha = 'A';
	}else if (score >= 80)
	{
		cha = 'B';
	}
	else if (score >= 70)
	{
		cha = 'C';
	}
	else if (score >= 60)
	{
		cha = 'D';
	}
	else
	{
		cha = 'F';
	}

	printf("������ %d�̰�, %c ���� �Դϴ�.\n", score, cha);



	return 0;
}