#include <stdio.h>
#include <time.h>

int main()
{
  clock_t begin = clock();

  int x = 2520;
  int coun = 0;

  while(coun!=20)
  {
    x++;
    coun = 0;
    for(int i=1;i<=20;i++)
    {
      if((x%i)==0)
        coun++;
    }
  }
clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

  printf("%d\n",x);
  printf("time spent: %f\n",time_spent);
  return 0;
}
