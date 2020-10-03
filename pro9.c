#include <stdio.h>

int fun(int n)//4
{
    if (n == 4)
       return n;
    else return 2*fun(n+1);//2*8=16
}


int main()
{
   printf("%d ", fun(2));//2
   return 0;
}

