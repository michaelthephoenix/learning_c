#include<stdio.h>

int main()
{
  // a do while loop to out 5, 10, 15, 20, 25, 30, 35
  int m = 0;
  do
  {
    printf("%d ", m);
    m = m + 5;
  } while (m<=35);
}