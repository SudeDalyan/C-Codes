#include <stdio.h>
#include <stdlib.h>
int function(int x)
{
  if(x<=0)
    return 0;
  else
  return function(x-1)+2;
}

int main(void)
{
  int i;
  for(i=0;i<=10;i++)
    {
    printf("%d\n",function(i));

  }

return 0;
}
