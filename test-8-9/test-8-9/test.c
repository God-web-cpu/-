#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= n; j++)
//	{
//		//����j�Ľ׳�
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret *= j;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//#include <string.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//int main()
//{
//	char arr1[20] = "###################";
//	char arr2[] = "abcdef";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <string.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//int main()
//{
//	char arr1[20] = "###################";
//	char arr2[] = "abcdef";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <string.h>
//void my_strcpy(char* dest, char* src)
//{
//	if ((dest != NULL) && (src != NULL))
//	{
//
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//int main()
//{
//	char arr1[20] = "###################";
//	char arr2[] = "abcdef";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include <string.h>
//#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);
//
//	while (*dest++ = *src++)
//	{
//			;
//	}
//}
//int main()
//{
//	char arr1[20] = "###################";
//	char arr2[] = "abcdef";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//#include <string.h>
//#include <assert.h>
//char*  my_strcpy(char* dest,const char* src)
//{
//	char *ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//����Ŀ�ĵ���ʼ��ַ
//}
//int main()
//{
//	char arr1[20] = "###################";
//	char arr2[] = "abcdef";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{//const����ָ��
//	//1.const����*����ߣ����ε���ָ��ָ������ݣ�*p����ʹ��ָ��ָ������ݣ�����ͨ��p���ı��ˡ�����ָ�������p���ǿ��Ըı�ġ�
//	//2.const����*���ұߣ����ε���ָ���������p����ʹ��ָ����������ܱ��޸ģ�����ָ��ָ������ݣ�*p)�ǿ��Ըı�ġ�
//	const int num = 10;
//	int n = 100;
//	const int* p = &num;
//	//*p = 20;
//	p = &n;
//	printf("num = %d\n", num);
//	printf(" %d\n",*p);
//	return 0;
//}
#include <assert.h>
#include <string.h>
int my_strlen( const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}