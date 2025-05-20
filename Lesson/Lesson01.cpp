#include<stdio.h>
// stdhio : Standard.h in % OPtio

//매크로 상수
#define MAX_VALUE 100

int main()
{
	printf("안녕하세요.C언어시간입니다\n");

	//변수와 자료형

	//정수형 변수
	char ch;              // char형 변수 ch를 선언(만듬) 1바이트(8비트)2^8가지의 서로다른 데이터를 표현(저장)할 수 있다.256가지 -128 ~ 127까지 저장
	short n;              // 2바이트 2^16
	int num;              // 4바이트 2^32
	long money;           // 4바이트(8바이트) 2^32
	long long big_number; // 8바이트 2^64

	//양의 정수형을 선언
	unsigned char uch; //0~255
	unsigned short un;
	unsigned int unum;

	//실수형 변수
	float pi;             // 4바이트 
	double ma;			  // 8바이트
	long double real;     // 16바이트(Win64 bit기준 8바이트)

	printf("ch의크기 : %\n", sizeof(ch));
	//printf("ch의 크기 : %d\n", sizeof(ch));
	printf("short의크기 : %u\n", sizeof(n));
	printf("int의크기 : %u\n", sizeof(num));
	printf("long의크기 : %u\n", sizeof(money));
	printf("long long의크기 : %u\n", sizeof(big_number));
	
	printf("float의크기 : %u\n", sizeof(float));
	printf("double의크기 : %u\n", sizeof(double));
	printf("long double의크기 : %u\n", sizeof(long double));

	ch = 127; //리터럴(숫자, 문자, 문자열)
	printf("ch의 값 : %d\n",ch);
	ch = 128;
	printf("ch의 값 : %d\n", ch);
	n = 128;
	printf("short의 값 : %d\n", n);

	/*
	//변수명 작성 규칙
	1.대소문자를 구분한다. Num과 num은 서로 다른 변수이다.
	2.알파벳 대문자, 소문자, 숫자, _(언더바)를 사용할 수 있다.
	3. 키워드를 사용할수 없다.
	4. 숫자가 제일 첨움에 나올수 없다. ex) num3(O), 3num(X)

	//변수명 작성에 대한 권장 사항
	1. 변수명은 모두 소문자로만 구성한다 Nim → num
	2. 변수명만 보면 어떤자료가 저장되는지 유추가 가능하도록 작성 ex) int age;(O), int a;(X)
	3. 두개 이상의 단어를 사용하여 작성할때 언더바로 이어붙임. ex)my_data;(C, C++), myData;(C#, Java)대체로 사용한다.
	*/

	//ASCII Code
	ch = 'a'; //문자 리터럴(Literal)을 대입
	ch = 97;  //숫자 리터럴(Literal)을 대입
	printf("ch의 값 :  %d\n", ch);
	printf("ch의 값 :  %c\n", ch);

	//심볼릭 상수(Simbolic Constant)
	const float PI = 3.14F; // 한번 선언하면 값을 바꿀수 없음 값을 보호하기 위해(실수로 값을 변경못하게 하기 위해)
	//	PI = 5.0F; //3.14F = 5.0F
	
	ch = MAX_VALUE;

    return 0;
}