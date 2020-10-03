#include<stdio.h>
int c = 0;
void my_recursive_function(char *s, int i)
{
     if(s[i] == '\0')
        return;
     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
     	c++;
     my_recursive_function(s,i+1);//i=1
}
int main()
{
     my_recursive_function("thisisrecursion",0);
     printf("%d",c);
     return 0;
}
