#include<stdio.h>
int fun(int x, int y) //0,13
{
  if (x == 0)
    return y;
  return fun(x - 1,  x + y);//
} 

int main()
{
	int x=4,y=3;
	printf("%d",fun(x,y));//4 3
}
