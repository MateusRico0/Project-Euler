#include <stdio.h>

int prime(unsigned long long int x);


int main()
{
    unsigned long long int r = 1;
    unsigned long long int i = 0;

    while(r!=600851475143)
    {
      i++;
      if(((600851475143%i)==0) && (prime(i)==1))
      {
          r = r * i;
      }
      printf("%llu\n",r);

    }
    printf("Result = %llu\n",i);
    return 0;
}


int prime(unsigned long long int x)
{
  int c = 0;
  int i = 1;

  while(i<=x)
  {
    if((x%i)==0)
        c++;
    if(c>2)
      return 0;
    i++;
  }

  if(c==2)
    return 1;
}
