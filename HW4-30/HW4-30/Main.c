#include <stdio.h>
#include <stdlib.h>

void insverse(int *);

int main()
{
	int a[3] = { 3,5,7 }, i;
	for (i = 0;i < 3;i++)
		printf("\n");

	inserve(a);

	for (i = 0;i < 3;i++)
		printf("%d  ", a[i]);
	printf("\n");

	system("pause");
	return 0;
}

int inserve(int *b)
{
	int tmp[3], i;
	for (i = 0;i < 3;i++)
		tmp[2 - i] = b[i];
	for (i = 0;i < 3;i++)
		b[i] = tmp[i];
}

insverse(int*)
{
	return 0;
}
