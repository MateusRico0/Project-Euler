#include <stdio.h>

int main()
{
    int term0 = 1;
    int term1 = 2;
    int termx;

    int sum = 0;

    while(termx<4000000)
    {
      termx = term0 + term1;
      term0 = term1;
      term1 = termx;

      if((term0%2)==0)
        sum += term0;
    }

    printf("%d\n",sum);

    return 0;
}
