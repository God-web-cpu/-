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

//int b = 1000;//全局变量
//int main()
//{
//	//{}-代码块
//	//在代码块内部定义的变量-局部变量
//	//在代码块之外定义的变量-全局变量
//	int a = 10;//局部变量
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
//	//全局变量和局部变量名字冲突的情况下，局部变量优先。
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个加数:>");
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//全局变量的作用域是整个工程
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
//	printf("%d\n", strlen(arr1));//计算字符串长度
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}
//转义字符
//int main()
//{
//	//printf("c:\test\32\test.c");
//	//printf("\a\a\a\a\a");
//	printf("%d\n", strlen("c:\test\32\test.c"));//13
//	return 0;
//}
//选择语句
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗（1/0）？\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}
//循环语句
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲代码:%d\n", line);
//		line++;
//	}
//	printf("好offer\n");
//	return 0;
//}
//函数
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
//	//sum = a + b;//计算方法
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//数组
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数的一个代码
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
//	max = (a > b) ? a : b;   //条件操作符(三目操作符）
//	printf("%d\n", max);
//	return 0;
//}
//static的作用：
//1.修饰局部变量：改变了变量的生命周期，生命周期变长了，出了局部范围也不销毁。
//2.修饰全局变量：改变了全局变量的作用域，作用域变小了。只能在自己所在的.c文件中使用，不能在其他源文件中使用。
//3.修饰函数：改变了函数的作用域，这个被修饰的函数，只能在自己所在的源文件中使用，其他源文件中不可使用。

//void test()
//{
//	static int a = 1;   //static修饰局部变量
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
//#define MAX(X,Y) (X>Y?X:Y)  //宏
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的方式
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* p = &a;//p是指针变量
//	printf("%p\n", p);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20; //*---解引用操作符 *pa就是a
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