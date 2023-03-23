#include<stdio.h>
void print(char *msg)
{
	if(msg!=NULL)
	{
	printf("MSG : %s\n",msg);
	}
}
int main()
{
	char buff[] = "Linux";
	print(buff);
	return 0;
}

