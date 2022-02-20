#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
int main()
{
	char str1[] = "465197183@qq.com";
	char str2[100] = { 0 };
	char sep[] = "@.";
	strcpy(str2, str1);
	char* ret = NULL;
	for (ret = strtok(str2, sep); ret != NULL; ret = strtok(NULL, sep))
	{
		printf("%s\n", ret);
	}
	return 0;
}

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* s1;
//	char* s2;
//	char* flag = str1;
//	if (*str2 == '\0')
//		return str1;
//	while (*flag)
//	{
//		s1 = flag;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++, s2++;
//		}
//		if (*s2 == '\0')
//			return flag;
//		flag++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char str1[] = "my name is lrf";
//	char str2[] = "lrf";
//	//查找str1中str2第一次出现的位置/
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//		printf("find failed!\n");
//	else
//		printf("find success!\n");
//	return 0;
//}


//int main()
//{
//	char str1[20] = "abcdefg";
//	char str2[] = "hijk";
//	strncat(str1, str2,10);
//	
//	printf("%s", str1);
//	return 0;
//}
//
//char* my_strncpy(char* str1, const char* str2, size_t count)
//{
//	assert(str1 && str2);
//  char* start=str1;
//	for (size_t i = 0; i < count; i++)
//	{
//		if (*str2!= '\0')
//			*str1++ = *str2++;
//		else
//			*str1++ = '\0';
//	}
// return start;
//}
//int main()
//{
//	char str1[20] = "abcdefghijkl";
//	char str2[] = "hhh";
//	//strncpy
//	my_strncpy(str1, str2, 8);
//	//strncpy(str1, str2, 8);
//	printf("%s\n", str1);
//	return 0;
//}

//int my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++, str2++;
//	}
//	return *str1 - *str2;
//}
//int main()
//{
//	char str1[] = "abcc";
//	char str2[] = "abcdd";
//	int ret=my_strcmp(str1, str2);//比较对应位置上ASCII值的大小
//	printf("%d", ret);
//	return 0;
//}
//char* my_strcat(char* dest,const char* src)
//{
//	assert(dest&&src);
//	char* start = dest;
//	//1.找到目标字符串的\0
//	while (*dest) dest++;
//	//2.追加源字符串直到\0
//	while (*dest++ = *src++) { ; }
//	return start;
//}
//int main()
//{
//	char str1[20] = "abc";
//	char str2[] = "defgh";
//	strcat(str1, str2);
//	my_strcat(str1, str2);
//	printf("str1=%s", str1);
//	return 0;
//}

//char* my_strcpy(char* str1,const char*str2)
//{
//	assert(str1 && str2);
//	char* start = str1;
//	while (*str1++ = *str2++) { ; }
//	return start;
//}
//
//int main()
//{
//	char str1[] = "abcdefg";
//	char str2[] = "hijk";
//	char* tmp = my_strcpy(str1, str2);
//	printf("%s\n", tmp);
//
//	return 0;
//}
//int main()
//{
//	char str1[] = "xxxxxxxxx";
//	char str2[] = "hello";
//	char str3[] = { 'a','b','c' };
//	strcpy(str1, str2);
//	//strcpy(str1, str3);  //error
//	return 0;
//}

//int main()
//{
//	//返回值类型：size_t
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf(">0\n");
//	else
//		printf("<0\n");
//	if ((int)strlen("abc") -(int)strlen("abcdef") > 0)
//		printf(">0\n");
//	else
//		printf("<0\n");
//	return 0;
//}

//int main()
//{
//	int len = strlen("abcdefg");
//	printf("%u", len);
//	return 0;
//}