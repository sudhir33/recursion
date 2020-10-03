#include<stdio.h>
void my_fun(int n)//50
{
    if(n == 0)
    {
         printf("False in if");
	   return;
    }
    if(n == 1)
    {
         printf("True");
         return;
    }
    if(n%2==0)
    	my_fun(n/2);//25
    else
    {
         printf("False in else");//
         return;
    }
 
}
int main()
{
     my_fun(100);
     return 0;
}
