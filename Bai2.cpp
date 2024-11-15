#include<stdio.h>
int main()
{
	int i, j, n;
	printf("\nnhap bang cuu chuong ");scanf("%d",&n);
	for (i = 1; i <= 10; i++)
	{
		printf("\n%d * %d = %d", n, i, n * i);
	}
	printf("\n");
	printf("\n");
	printf("	Bang Cuu chuong		");
	for(i = 2; i < 10; i++)
	{
		for(j = 1; j <= 10; j++)
		{
			printf("\n%d * %d = %d", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
