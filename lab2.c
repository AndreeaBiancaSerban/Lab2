#include <stdlib.h>
#include <stdio.h>

int function(int x,int i)
{
	x=x-2;
    i++;
	if(x>0)
		i=function(x,i);
		
	return i;
}

int main()
{
	int a=30, i=0;

		i=function(a,i);
		
	printf("%d\n", i);
	return 0;	
}

