#include <stdio.h>
int main()
{
	int i, n, S = 0;
	printf("\nnhap so nguyen n: "); scanf("%d",&n);
	if(n < 0)
	{
		printf("\nnhap lai so nguyen n: "); scanf("%d",&n);
	}
	else
	{
		for(i = 1; i <= n; i++)
		{
			S += i;
		}
	}
	printf("tong cac chu so = %d", S);
	return 0;
}
