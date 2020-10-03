#include<stdio.h>
void fun(int n)//1
{
  if (n == 0)
    return;

  printf("%d", n%2);//10011
  fun(n/2);//fun(0)
  
}  

int main()
{
	int n=25;
	fun(n);
}
