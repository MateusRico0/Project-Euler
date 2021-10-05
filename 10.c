#include <stdio.h>
#include <time.h>

int prime(unsigned long long int x);

int main()
{
  unsigned long long int sum = 0;

  clock_t begin = clock(); //ignore, it's just the chronometer

  for(unsigned long long int i=2;i<2000000;i++)
  {
      sum += prime(i);
      printf("sum %lld = %lld\r",i,sum);
  }
  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("\nResult = %lld\n",sum);
  printf("time spent: %f\n",time_spent);
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
    return x;
}
