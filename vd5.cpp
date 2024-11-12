#include <stdio.h>
int main()
{
	int i, j;
	char pt;
	printf ("nhap 2 so nguyen:"); scanf("%d %d", &i, &j);
	printf ("nhap phep toan");fflush (stdin); scanf("%c",&pt);
	switch(pt)
	{
		case '+': printf ("tong la: %d",i+j); break;
		case '-': printf ("hieu la: %d",i-j); break;
		case '*': printf ("tich la: %d",i*j); break;
		case '/': printf ("thuong la: %f",(float)i/j); break;
	}
	return 0;
}
