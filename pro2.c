#include<stdio.h>
void my_fun(int n)//10 9 8 7 6 5 4 3 2
{
     if(n == 0)
     	return;
     my_fun(n-1);// return  
     printf("%d ",n);//1 2 3 4 5 6 7 8 9 10
}
int main()
{
     my_fun(10);
     return 0;
}
