#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("a = %d\n",a);
//	return 0;
//}

//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	return 0;
//}

struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1 = { "C���Գ������",55 };
	struct Book* pb = &b1;
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	//printf("����: %s\n", b1.name);
	//printf("�۸�: %d\n", b1.price);
	return 0;
}