#include<stdio.h>
int c=0;
void my_fun(int n)//0
{
     if(n == 0)
     	return;
     c++;//4
     my_fun(n/10);//0
}
int main()
{
     my_fun(223);
     printf("%d",c);
     return 0;
}
