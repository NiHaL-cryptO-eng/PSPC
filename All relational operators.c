#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter 2 numbers");
	scanf("%d %d",&a,&b);
	printf("%d\n",a<b);
	printf("%d\n",a>b);
	printf("%d\n",a<=b);
	printf("%d\n",a>=b);
	printf("%d\n",a==b);
	printf("Note:1 is true,0 is false");
	return 0;
}
