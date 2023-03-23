#include<stdio.h>
#include<string.h>
int main(int argc , char *argv[])//argc counts total arguments
				//argv stores all parameters
{
	int i;
	printf("\n File name :%s\n",argv[0]);
	printf("\n Total number of arguments :%d\n",argc);
	printf("\n Argument passed :");
	for(i=1;i<argc;i++)
	{
	printf("%s ",argv[i]);
	}
	printf("\n");
}
