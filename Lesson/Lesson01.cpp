#include<stdio.h>
// stdhio : Standard.h in % OPtio

//��ũ�� ���
#define MAX_VALUE 100

int main()
{
	printf("�ȳ��ϼ���.C���ð��Դϴ�\n");

	//������ �ڷ���

	//������ ����
	char ch;              // char�� ���� ch�� ����(����) 1����Ʈ(8��Ʈ)2^8������ ���δٸ� �����͸� ǥ��(����)�� �� �ִ�.256���� -128 ~ 127���� ����
	short n;              // 2����Ʈ 2^16
	int num;              // 4����Ʈ 2^32
	long money;           // 4����Ʈ(8����Ʈ) 2^32
	long long big_number; // 8����Ʈ 2^64

	//���� �������� ����
	unsigned char uch; //0~255
	unsigned short un;
	unsigned int unum;

	//�Ǽ��� ����
	float pi;             // 4����Ʈ 
	double ma;			  // 8����Ʈ
	long double real;     // 16����Ʈ(Win64 bit���� 8����Ʈ)

	printf("ch��ũ�� : %\n", sizeof(ch));
	//printf("ch�� ũ�� : %d\n", sizeof(ch));
	printf("short��ũ�� : %u\n", sizeof(n));
	printf("int��ũ�� : %u\n", sizeof(num));
	printf("long��ũ�� : %u\n", sizeof(money));
	printf("long long��ũ�� : %u\n", sizeof(big_number));
	
	printf("float��ũ�� : %u\n", sizeof(float));
	printf("double��ũ�� : %u\n", sizeof(double));
	printf("long double��ũ�� : %u\n", sizeof(long double));

	ch = 127; //���ͷ�(����, ����, ���ڿ�)
	printf("ch�� �� : %d\n",ch);
	ch = 128;
	printf("ch�� �� : %d\n", ch);
	n = 128;
	printf("short�� �� : %d\n", n);

	/*
	//������ �ۼ� ��Ģ
	1.��ҹ��ڸ� �����Ѵ�. Num�� num�� ���� �ٸ� �����̴�.
	2.���ĺ� �빮��, �ҹ���, ����, _(�����)�� ����� �� �ִ�.
	3. Ű���带 ����Ҽ� ����.
	4. ���ڰ� ���� ÷�� ���ü� ����. ex) num3(O), 3num(X)

	//������ �ۼ��� ���� ���� ����
	1. �������� ��� �ҹ��ڷθ� �����Ѵ� Nim �� num
	2. ������ ���� ��ڷᰡ ����Ǵ��� ���߰� �����ϵ��� �ۼ� ex) int age;(O), int a;(X)
	3. �ΰ� �̻��� �ܾ ����Ͽ� �ۼ��Ҷ� ����ٷ� �̾����. ex)my_data;(C, C++), myData;(C#, Java)��ü�� ����Ѵ�.
	*/

	//ASCII Code
	ch = 'a'; //���� ���ͷ�(Literal)�� ����
	ch = 97;  //���� ���ͷ�(Literal)�� ����
	printf("ch�� �� :  %d\n", ch);
	printf("ch�� �� :  %c\n", ch);

	//�ɺ��� ���(Simbolic Constant)
	const float PI = 3.14F; // �ѹ� �����ϸ� ���� �ٲܼ� ���� ���� ��ȣ�ϱ� ����(�Ǽ��� ���� ������ϰ� �ϱ� ����)
	//	PI = 5.0F; //3.14F = 5.0F
	
	ch = MAX_VALUE;

    return 0;
}