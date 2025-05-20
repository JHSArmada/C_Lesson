#include<stdio.h>

int main()
{
	//L.Value(변수만) = R.Value(변수, 상수, 함수, 연산...)
	int num = 1;
	int sum = 0;
	sum += num;  //sum = sum + num; --> sum = 1
	sum += num;  // sum = sum + num; --> sum = 2
	sum -= sum;  // sum = sun - num;
	sum *= num;  // sum = sun * num;
	sum /= num;  // sum = sun / num;
	sum %= num;  // sum = sun % num;


	//비교연산자 : >, >=, <, <=, ==, !=
	//비교 연산을 수행한 결과는 항상 논리값(1, 0)

	int result;
	result = 1 > 5;
	printf("Result = %d\n", result);

	result = 1 <= 5;
	printf("Result = %d\n", result);

	result = 1 == 5;
	printf("Result = %d\n", result);

	result = 1 != 5;
	printf("Result = %d\n", result);

	printf("================================\n");

	//논리 연산자 : &&(AND), ||(OR), !(NOT)

	num = -5;
	sum = 0;
	result = num && sum; // T && F = F
	printf("Result = %d\n", result);

	num = -5;
	sum = 0;
	result = num || sum; // T || F = T
	printf("Result = %d\n", result);

	result = !num; // !T = F (-5는 True이므로 False로 반전)
	printf("Result = %d\n", result);

	result = !sum; // !F = T(0은 False이므로 True로 반전)
	printf("Result = %d\n", result);

	printf("================================\n");

	//증감연산자 : ++, --
	num = 0;

	num++;  //num = num + 1;
	printf("num = %d\n", num); //1

	++num;  //num = num + 1;
	printf("num = %d\n", num); //2

	printf("num = %d\n", num++); // (prinrf)먼저 출력부터 하고 증가  //2로 출력 ==>3
	printf("num = %d\n", ++num); // 먼저 증가 후 출력  // 3 + 1 = 4

	num--;  //num = num - 1;
	printf("num = %d\n", num);

	--num;  //num = num - 1;
	printf("num = %d\n", num);

	/*
	//연산자 우선순위
	1. ++,--
	2. +, -(부호 연산자)
	3. *, /, %
	4. +, -
	5. >, >=, <, <=
	6. ==, !=
	7. 논리연산자
	8. 대입연산자
	*/


	return 0;
}