#include<stdio.h>

int main()
{
  // a for loop to out 5, 10, 15, 20, 25, 30, 35
  int k;
  int max = 35;
  for ( k = 0; k <= max; k = k+5)
  {
    printf("%d " ,k);
  }
  printf("\n");
}