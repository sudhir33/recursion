#include<stdio.h>
int my_recursive_function(char *s)//n
{
	 static int c=0;
     if(*s== '\0')
        return;
     if(*s== 'a' || *s == 'e' || *s== 'i' || *s== 'o' || *s== 'u')
     	c++;
     my_recursive_function(++s);//91
     return c;
}
int main()
{
     int c=my_recursive_function("thisisrecursio");
     printf("%d",c);
     return 0;
}
