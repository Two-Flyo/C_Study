#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void find(int(*matrix)[3], int k,int r,int c)
{
	int x = 0, y = r - 1;
	while (x <= r & y >= 0)
	{
		if (matrix[x][y] < k) x++;
		if (matrix[x][y] > k) y--;
		else
		{
			printf("find success!");
			return ;
		}
	}
	printf("find failed!\n");
}
int main()
{
	int matrix[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int num = 7;
	find(&matrix, num,3,3);
	return 0;
}

//void check_str(char* str1, char* str2)
//{
//	if (strlen(str2) !=strlen(str1))
//	{
//		printf("NO!\n");
//		return;
//	}
//	strncat(str1, str1, strlen(str1));
//	int* flag = strstr(str1, str2);
//	if (flag == NULL)
//		printf("NO!\n");
//	else
//		printf("YES!\n");
//}
//int main()
//{
//	(*fun)(int,int)
//	char arr1[20] = "abcde";
//	char arr2[] = "eabcd";
//	check_str(arr1, arr2);
//	return 0;
//}
//void left_move(char* str, int k)
//{
//	int len = strlen(str);
//	for (int i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		for (int j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char str[] = "abcdefg";
//	left_move(str, 2);
//	printf("%s\n", str);//´òÓ¡×Ö·û´®
//	return 0;
//}
//int main()
//{
//	for(int a=1;a<=5;a++)
//		for(int b=1;b<=5;b++)
//			for(int c=1;c<=5;c++)
//				for(int d=1;d<=5;d++)
//					for (int e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3)) == 1
//							&& ((b == 2) + (e == 4)) == 1
//							&& ((c == 1) + (d == 2)) == 1
//							&& ((c == 5) + (d == 3)) == 1
//							&& ((e == 4) + (a == 1)) == 1)
//						{
//							if (a * b * c * d * e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//
//						}
//						
//					}
//
//	return 0;
//}
//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			break;
//	}
//	printf("The killer is %c", killer);
//}
//#include<string.h>
//int main()
//{
//	int arr[10][10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j <=i; j++)
//		{
//			if (j == 0 || i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j <= i; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	//int a = 3;
//	//int ret = sizeof(a++);
//	//printf("%d %d", ret, a);
//	////char str[] = { 'a','b','c','d','e','f','g' ,'\0'};
//	////int x=strlen(97);
//	int arr[3][2] = { 1,2,3,4,5,6 };
//	printf("%d",12);
//
//	return 0;
//}