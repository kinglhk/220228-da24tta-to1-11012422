#include <stdio.h>
main()
{
	FILE *fp;
	char path[50];
	printf("\nNhap duong dan: ");
	fflush(stdin);
	gets(path);
	fp=fopen(path,"wt");
	if(fp==NULL)
	{
		printf("\nLoi mo file");
	}
	else
	{
		fprintf(fp,"hoc phai di doi voi hanh");
		fclose(fp);
	}
	return 0;
}
