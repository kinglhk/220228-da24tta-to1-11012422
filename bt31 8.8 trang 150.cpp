#include<stdio.h>
#define MAX 255
int main()
{
	char path1[50], path2[50], ketqua[MAX+1];
	FILE *fpl, *fp2;
	printf("\nNhap duong dan tap tin thu 1: ");
	fflush(stdin);
	gets(path1);
	printf("\nNhap duong dan tap tin thu 2: ");
	fflush(stdin);
	gets(path2);
	fpl=fopen(path1,"at");
	fp2=fopen(path2,"rt");
	if(fp2==NULL)
		printf("\nLoi mo file");
	else
	{
		fprintf(fpl,"\n");
		while(feof(fp2)==0)
			if(fgets(ketqua, MAX, fp2)!=NULL)
				fprintf(fpl,"%s", ketqua);
		fclose(fpl);
		fclose(fp2);
	}
	return 0;
}
