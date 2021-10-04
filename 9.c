#include <stdio.h>
                            //simple brute force
int main()
{
    long int sum = 0;

    for(int i=1;i<1000;i++)
    {
      for(int j=1;j<1000;j++)
      {
        for(int k=1;k<1000;k++)
        {
          printf("%d %d %d\r",i,j,k);
          if(((i*i)+(j*j))==(k*k))
            sum = i+j+k;
          if (sum==1000)
            printf("\n%ld\n",i*j*k);
          sum = 0;
        }
      }
    }
    return 0;
}
