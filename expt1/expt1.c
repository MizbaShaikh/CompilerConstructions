#include<stdio.h>


int main()
{
	
	char array[20];
	int i,n;
	
	printf("Enter the size of the string\n");
	scanf("%d",&n);
	
	
	printf("Enter the characters\n");
	
	for(i=1;i<=n;i++)
	{	
	scanf("%c",&array[i]);
	}

for(i=1;i<=n;i++)
{
	
	printf("output %c ",array[i]);
}
return 0;
}
