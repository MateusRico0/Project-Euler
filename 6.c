#include <stdio.h>

unsigned long long int square(unsigned long long int x);

int main()
{
  unsigned long long int sum_squares = 0;
  unsigned long long int square_sums = 0;

  for(int i=1;i<=100;i++)
  {
    sum_squares += square(i);
    square_sums += i;
  }

  printf("%llu\n",square(square_sums)-sum_squares);

  return 0;
}

unsigned long long int square(unsigned long long int x)
{
  return x*x;
}
