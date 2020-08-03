#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("ÆæÊý\n");
//	else
//		printf("Å¼Êý\n");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		    printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}
//

int main()
{
	int a = 2;
	int b = 3;
	int c = 1;
	if (a<b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a<c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b<c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("a=%d b=%d c=%d\n", a, b, c);
	return 0;
}