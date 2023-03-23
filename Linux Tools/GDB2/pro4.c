#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int *ptr =malloc(sizeof(int));
	*ptr=77;
	printf("Value of ptr :%d\n",(*ptr));
	free(ptr);
	*ptr = 10;
	printf("Value of ptr after free :%d\n",(*ptr));
	return 0;
}
