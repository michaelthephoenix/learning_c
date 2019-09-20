#include <stdio.h>

int main()
{
  int i;
  for ( i = 0; i < 6; i++)
  {
    if (i<=5)
    {
      int j = 0;
      while (j <= 4)
      {
        printf("&");
        j++;
      }
      printf("\n");
    }
    
    
  }

  // a while loop to output 5, 10, 15, 20, 25, 30, 35
  int n=0;
  while (n<=35)
  {
    printf("%d " ,n);
    n = n + 5;
  }
  printf("\n");

  // a for loop to out 5, 10, 15, 20, 25, 30, 35
  int k;
  int max = 35;
  for ( k = 0; k <= max; k = k+5)
  {
    printf("%d " ,k);
  }
  printf("\n");
  
  // a do while loop to out 5, 10, 15, 20, 25, 30, 35
  int m = 0;
  do
  {
    printf("%d ", m);
    m = m + 5;
  } while (m<=35);
  
  

  return 0;
}




