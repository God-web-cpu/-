#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	printf("hello bit\n");
//	return 0;
//}


//int main()
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	printf("%d\n", age);
//	return 0;
//}
//int main()
//{
//	/*float weight = 49.5f;
//	printf("weight = %f\n",weight);*/
//	return 0;
//}
//

//int b = 1000;//ȫ�ֱ���
//int main()
//{
//	//{}-�����
//	//�ڴ�����ڲ�����ı���-�ֲ�����
//	//�ڴ����֮�ⶨ��ı���-ȫ�ֱ���
//	int a = 10;//�ֲ�����
//
//	return 0;
//}

//int a = 10;
//int main()
//{
//	{
//		printf("1-->=%d\n", a);
//	}
//	printf("2-->=%d\n", a);
//	return 0;
//}
//int main()
//{
//	{
//		int a = 10;
//		printf("1-->=%d\n", a);
//	}
//	printf("2-->=%d\n", a);
//	return 0;
//}
//int a = 1000;
//int main()
//{
//	int a = 10;
//	printf("a = %d\n", a);
//	//ȫ�ֱ����;ֲ��������ֳ�ͻ������£��ֲ��������ȡ�
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������:>");
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//ȫ�ֱ���������������������
//int num = 1000;
//void test()
//{
//	printf("3:num = %d\n", num);
//}
//int main()
//{
//	printf("1:num = %d\n", num);
//	{
//		printf("2:num = %d\n", num);
//	}
//	test();
//	return 0;
//}
//int main()
//{
//	const int n = 10;
//	int arr[n] = { 0 };
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));//�����ַ�������
//	printf("%d\n", strlen(arr2));//���ֵ
//	return 0;
//}
//ת���ַ�
//int main()
//{
//	//printf("c:\test\32\test.c");
//	//printf("\a\a\a\a\a");
//	printf("%d\n", strlen("c:\test\32\test.c"));//13
//	return 0;
//}
//ѡ�����
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��1/0����\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}
//ѭ�����
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("�ô���:%d\n", line);
//		line++;
//	}
//	printf("��offer\n");
//	return 0;
//}
//����
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &b);
//	//sum = a + b;//���㷽��
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//����
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ�����һ������
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sz);
//	return 0;
//}
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	//int b = a++;
//	//int b = --a;
//	//int b = a--;
//	printf("b = %d a = %d\n", b, a);
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	max = (a > b) ? a : b;   //����������(��Ŀ��������
//	printf("%d\n", max);
//	return 0;
//}
//static�����ã�
//1.���ξֲ��������ı��˱������������ڣ��������ڱ䳤�ˣ����˾ֲ���ΧҲ�����١�
//2.����ȫ�ֱ������ı���ȫ�ֱ������������������С�ˡ�ֻ�����Լ����ڵ�.c�ļ���ʹ�ã�����������Դ�ļ���ʹ�á�
//3.���κ������ı��˺�������������������εĺ�����ֻ�����Լ����ڵ�Դ�ļ���ʹ�ã�����Դ�ļ��в���ʹ�á�

//void test()
//{
//	static int a = 1;   //static���ξֲ�����
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int Max(int x, int y)
//{
//	return(x > y ? x : y);
//}
//#define MAX(X,Y) (X>Y?X:Y)  //��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ķ�ʽ
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p = &a;//p��ָ�����
//	printf("%p\n", p);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20; //*---�����ò����� *pa����a
//	printf("%d\n", a);
//	return 0;
//}
int main()
{
	char ch = 'a';
	int a = 10;
	char* pc = &ch;
	int* pa = &a;
	printf("%d\n", sizeof(pc));
	printf("%d\n", sizeof(pa));
	return 0;
}