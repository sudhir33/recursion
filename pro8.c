#include<stdio.h>
void my_fun(int num)//1
{
	int i=2;
	if(num==1)
		return ;
	while(num%i!=0)//5%5!=0
		i++;//5
	
	my_fun(num/i);//5/5
	printf("%d ",i);//2 5
}
int main()
{
	int n=10;
	my_fun(n);//10
	return 0;
}
