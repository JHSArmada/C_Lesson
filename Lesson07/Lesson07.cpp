#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	/*
	switch(변수(또는 함수, 수식))
	{
	case n1:
		위 변수가 n1과 같을때 실행되는 명령문들...;
	break;
	case n2:
		위 변수가 n2과 같을때 실행되는 명령문들...;
	break;
	case n3:
		위 변수가 n3과 같을때 실행되는 명령문들...;
	break;
	case n4:
		위 변수가 n4과 같을때 실행되는 명령문들...;
	break;
	case n5:
		위 변수가 n5과 같을때 실행되는 명령문들...;
	break;
	defalt:
		위 변수가 모든 case에 해당되지 않을때 실행되는 명령문들...;
	}

	*/

	//사용자로부터 메뉴를 선택받아서 해당메뉴를 출력하는 코드를 작성

	// printf("1. 새파일\n");
	// printf("2. 파일열기\n");
	// printf("3. 파일저장\n");
	// printf("4. 인쇄\n");
	// printf("=============================\n");
	// printf("0. 프로그램 종료\n");
	// printf("=============================\n");
	// printf("메뉴 번호를 선택하여 입력하세요 >>>>>\n");
	// 
	// int menu;
	// scanf("%d", &menu);
	// printf("선택된 메뉴눈 %d\n",menu);
	// 
	// switch (menu)
	// {
	// case 1:
	// 	printf("새파일이 선택되었습니다.\n");
	// 	break;
	// case 2:
	// 	printf("파일열기가 선택되었습니다.\n");
	// 	break;
	// case 3:
	// 	printf("파일저장이 선택되었습니다.\n");
	// 	break;
	// case 4:
	// 	printf("인쇄가 선택되었습니다.\n");;
	// 	break;
	// case 0:
	// 	printf("프로그램 종료가 선택되었습니다.\n");
	// 	break;
	// 
	// default :
	// 	printf("알 수 없는 값이 선택되었습니다.\n");
	// 
	// }

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
	int score;
    char ch;

	printf("점수를 입력하세요(0~100점까지) >>>>>");
	scanf("%d", &score);
	switch (score/10)
	{
	case 10:
	case 9:
		ch = 'A';
		break;
	case 8:
		ch = 'B';
		break;
	case 7:
		ch = 'C';
		break;
	case 6:
		ch = 'D';
		break;
	default:
		ch = 'F';
	}
	printf("점수는 %d이고, %c 학점 입니다.\n", score, ch);




	return 0;
}