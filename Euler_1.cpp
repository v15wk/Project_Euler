#include <stdio.h> 
 
int main(void)
{ 
  int x,i=0; 
  for(i=1;i<1000;i++)
   if ((i%3==0) || (i%5==0))
      x=x+i;
  printf("%d", x);
} 