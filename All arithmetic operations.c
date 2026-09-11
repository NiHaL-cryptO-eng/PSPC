#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter Two operands");
	scanf("%d %d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=(float)(a/b);
	printf("%d addition,%d subraction,%d multiplication,%f divison",c,d,e,f);
	return 0;
}
