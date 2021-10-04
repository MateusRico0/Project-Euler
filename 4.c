#include <stdio.h>
#include <string.h>


int palindromic(long int x);
int digits(int x);
void vector(int x, int y[x],int z);


int main()
{
  int aux = 0;
  for(int i=999;i>99;i--)
  {
    for(int j=999;j>99;j--)
    {
      if(palindromic(j*i)==1)
      {
        if(aux<=j*i)              //if you delete this line
        {                         // and this
          printf("%d * %d = %d\r",j,i,j*i); //change the r to n                         //follow these rules and all the palindromic numbers will be shown
          aux = j*i;         // delete this
        }                    // and this
      }
    }
  }
  return 0;
}


int palindromic(long int  x)
{
  int num[digits(x)];
  vector(digits(x),num,x);

  int j = 0;
  int coun = 0;

  for(int i=digits(x)-1;i>=(digits(x)/2);i--)
  {
    if(num[i]==num[j])
    {
      coun++;
    }
    j++;
  }
  //printf("\n");
  if((digits(x)%2)==0)
  {
    if(coun==digits(x)/2)
      return 1;
  }
  if((digits(x)%2)!=0)
  {
    if(coun==(digits(x)/2)+1)
      return 1;
  }

}

int digits(int x)  // number of digits of an integer number
{
  int digit = 0;
  while(x!=0)
  {
    x = x/10;
    digit++;
  }

  return digit;
}

void vector(int x, int y[x],int z) // covert a number into array
{
  int i = 0;
  while(z!=0)
  {
    y[i] = z%10;
    z = z/10;
    i++;
  }
}
