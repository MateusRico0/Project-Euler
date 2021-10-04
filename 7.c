#include <stdio.h>
#include <time.h>

int main()
{
  int number = 1;
  int position = 0;

  clock_t begin = clock(); //ignore, it's just the chronometer

  while(position!=10001)   //change the position here
  {
    int i = 1;
    int aux = 0;
    number++;

    while(i<=number)
    {
      if((number%i)==0)
        aux++;

      i++;
    }

    if(aux==2)
    {
      position++;
      printf("%d\r",position);
    }


  }

  clock_t end = clock();                                      // ignore, it's just the chronometer
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC; //

  printf("\n%d\n",number);
  printf("time spent: %f\n",time_spent);  //chronometer
  return 0;
}
