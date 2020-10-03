#include<stdio.h>
int my_fun(int a,int b)//10,5
{
	if(a<=0 || b<=0)//10<=0 || 5<=0
		return 1;
	return my_fun(a-2,b-1)+my_fun(a-3,b-2);
}
int main()
{
	int a=10,b=5;
	a=my_fun(a,b);//10,5
	printf("%d",a);//
}
