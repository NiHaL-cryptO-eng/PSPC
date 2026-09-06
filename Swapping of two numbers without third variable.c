#include <stdio.h>
int main()
{
	int a,b;
	printf("enter 2 values a and b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d  a and b are swapped",a,b);
	return 0;
	
}
