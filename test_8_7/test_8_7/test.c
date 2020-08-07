#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	short s = 5;
//	printf("%d\n", sizeof(s = a + 3));
//	printf("%d\n", s);
//	return 0;
//}

int main()
{
	int i = 0, a = 1,b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;   //为0后面就不用算了
	i = a++ || ++b || d++;   //为1后面就不用算了
	printf("a = %d\n b = %d\n c = %d\n d =%d\n", a, b, c, d);

}