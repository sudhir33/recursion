#include<stdio.h>
void my_fun(int n)//0
{
    if(n == 0)
    	return;
    printf("%d ",n);//10 9 8 7 6 5 4 3 2 1
    my_fun(n-1);//1-1
}
int main()
{
    my_fun(10);//10
    return 0;
}
