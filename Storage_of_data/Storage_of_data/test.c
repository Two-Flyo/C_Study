#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>

int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("%d\n", n);
	printf("%lf\n", *pFloat);
	*pFloat = 9.0;
	printf("%d\n", n);
	printf("%f\n", *pFloat);

	return 0;
}
//unsigned char i = 0;
//int main()
//{
//	for ( i = 0; i <= 255; i++)
//	{
//		printf("hello!\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	// -128: 1000000 00000000 00000000 10000000
//	//       1111111 11111111 11111111 10000000
//    //	    
//	//       1111111 11111111 11111111 11111111
//	//       1111111 11111111 11111111 01111111
//	//       1000000 00000000 00000000 11111111
//	printf("%d", strlen(a));
//	return 0;
//}
//#include<Windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n",i);
//		Sleep(1000);
//	}
//	//-1:10000000 00000000 00000000 00000001
//	//  :11111111 11111111 11111111 11111111
//	return 0;
//}

//int main()
//{
//	int i = -20;
//	//-20 : 10000000 00000000 00000000 00010100 ��
//	//-20 ��11111111 11111111 11111111 11101100 ԭ
//
//	unsigned int j = 10;
//	
//	// 10 : 00000000 00000000 00000000 00001010
//	//i+j:
//	//    : 11111111 11111111 11111111 11110110 ��
//	//    : 10000000 00000000 00000000 00001010 ԭ
//	printf("%u\n", i + j);
//	return 0;
//}

//int main()
//{
//	char b = 128;
//	//128: 00000000 00000000 00000000 10000000
//	printf("%u", b);
//
//	//char a = -128;
//	//-128  10000000 00000000 00000000 10000000
//	//      11111111 11111111 11111111 10000000
//	//      10000000 <--a��ʵ�ʴ洢
//	
//	//�������� %u���޷���������ʽ��ӡ����
//	// 11111111 11111111 11111111 10000000
//	//printf("%u", a);
//
//	return 0;
//}
////�жϴ�С�˴洢
//void judge(int* x)
//{
//	char* p = (char*)x;
//	if (*p == 1)
//		printf("С�˴洢\n");
//	else
//		printf("��˴洢\n");
//}
//int main()
//{
//	int x = 1;
//	judge(&x);
//	return 0;
//}
//int main()
//{
//	unsigned char c1 = 255;
//	char c2 = 255;
//	printf("c1=%d \nc2=%d", c1, c2);
//	return 0;
//}

//int main()
//{
//	int a = 10;  //4Byte
//	float f = 10.0; //4Byte
//	char c;
//	//charȡ���ڱ��������󲿷ֵı�������char��signed char
//	// short int long �����з��ŵ� <=> signed short / signed int / signed long
//	unsigned long long x = 1000;
//	printf("%lld", x);
//	return 0;
//}
