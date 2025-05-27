#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Winodws OS전용 콘솔 입출력에 관련된 함수들이 정의 되어 있는 헤더파일
#include <conio.h>

int main()
{
	//반복문 : while, do ~ while, for
	/*
	while(조건식)
	조건식이 참일때 실행되는 코드
	*/

	  int i = 10;
	  while (i < 10)
	  {
	  	printf("안녕하세요\n");
	  		i++;
	  }
	  
	  
	  while (1) // 무한반복, 무한루프
	  {
	  	printf("안녕하세요\n");
	  	if(i == 0) // i가 0과 같다면 while문을 탈출시킴
	  	break;
	  	i--;
	  }
	  i = 0;
	  //출력형식
	  // 0  1  2  3  4  5  6  7  8  9
	  //위와 같이 출력되도록 while반목문을 이용하여 코드를 작성하세요
	  
	  while (i < 10)
	  {
	  	printf("%d\t",i++);
	  	if (i == 0)
	  	break;
	  	//i++;
	  }
	  printf("\n");

	//출력형식
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


	//출력형식
	//20이하의 3의 배수를 출력하세요
	i = 1;
	while (i <= 20)
	{
		if (i % 3 == 0)
			printf("%d\t", i);
		i++;
	}printf("\n\n\n");

	//while문은 반복 횟수가 명확하지 않을때 사용한다.
	char ch = '1';
	while (ch != 'x')
	{
		printf("1. 새파일\n");
		printf("2. 파일열기\n");
		printf("3. 파일저장\n");
		printf("4. 인쇄\n");
		printf("=============================\n");
		printf("X. 프로그램 종료\n");
		printf("=============================\n");
		printf("메뉴를 선택하세요 : \n\n");
		
		//scanf("%c\n", &ch);
		//printf("선택된 메뉴는 %d\n", ch);
		
		//conio.h에 정의되어 있다.
		ch = _getch(); // 엔터키 없이 한개의 키입력을 바로 처리한다.
		
		switch (ch)
		{
		case '1':
			printf("새파일이 선택되었습니다.\n");
			break;
		case '2':
			printf("파일열기가 선택되었습니다.\n");
			break;
		case '3':
			printf("파일저장이 선택되었습니다.\n");
			break;
		case '4':
			printf("인쇄가 선택되었습니다.\n");;
			break;
		case 'X':
			printf("프로그램을 종료합니다.\n");
			break;
		default :
			printf("해당 메뉴가 존재하지 않습니다.\n");
			break;
		}
	}





	printf("while 반복문이 종료되었습니다.\n");
	return 0;
}