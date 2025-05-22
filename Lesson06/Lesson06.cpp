#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
git config --global user.name "VArMaDa"
git config --global user.email "gojhs82@naver.com"

git clone https://github.com/JHSArmada/C_Lesson.git

복습을 한다
저장 하고....

git add.
git commit -m
git push origin main

//학원에서
git pull origin main

*/


int main()
{
	// 삼항 연산자
	// 조건식(비교식, 논리식) ? 참일때 반환값 : 거짓일때 반환값;

	int n = 5;
	char ch;
	ch = (n % 2) == 0 ? 'e' : 'o';
	printf("ch = %c\n", ch);

	int n2 = 4;
	ch = (n2 % 2) == 0 ? 'e' : 'o';
	printf("ch = %c\n", ch);

	// 제어문 : if, switch
	// if문
	/*

	if(조건식)
	{ //local 지역
		조건식이 참일때 실행되는 명령문1
		조건식이 참일때 실행되는 명령문2
		.....
	}

	if(조건식)
	{
		조건식이 참일때 실행되는 명령문1
		조건식이 참일때 실행되는 명령문2
		.....
	}else
	{
		조건식이 거짓일때 실행되는 명령문1
		조건식이 거짓일때 실행되는 명령문1
		.....
	}

	if(조건식)
	{
		조건식이 참일때 실행되는 명령문들...
		.....
	}else if(조건식2)
	{
		조건식2 거짓일때 실행되는 명령문...
	}else if(조건식3)
	{
		조건식3 거짓일때 실행되는 명령문...
	}else
	{
	위에 모든 조건식들이 거짓일때 실행되는 명령문들
	}

	*/

	//if문의 첫번째 형식
	if (!(n%2))//(n2 % 2 == 0)
	{
		printf("%d는 짝수입니다.\n", n);
	}

	//if문의 두번째 형식
	if (n % 2 == 0)
	{
		printf("%d는 짝수입니다.\n", n);
	}
	else
	{
		printf("%d는 홀수입니다.\n", n);
	}

	//나이에 따른 버스요금 결정하기
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
	printf("버스요금은 %d입니다.\n", payment);
	

	// 문제
	// 점수가 100 ~ 90 A학점
	// 점수가 89 ~ 80 B학점
	// 점수가 79 ~ 70 C학점
	// 점수가 69 ~ 60 D학점
	// 그외에는 F학점
	// 
	//출력형식
	// 점수를 입력하세요(0~100점까지) >>>>> xx
	//점수는 90점이고, A학점 입니다.

	printf("==========================");
	int score;
	char cha;
	

	printf("점수를 입력하세요(0~100점까지) >>>>>");
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

	printf("점수는 %d이고, %c 학점 입니다.\n", score, cha);



	return 0;
}