#include <stdio.h>
#include <math.h>



int main()
{
  float x, y, y1 = 2, y2 = 3, y3 = 4, y4 = 3;
  y1 = 1;
  y2 = 2;
  y3 = 126;
  y4 = 43;
  float arr[4] = {y1, y2, y3, y3};

  for (int i = 0; i < 4; i++)
  {
    y = arr[i];
    printf("%d \n", arr[i]);
  }
  
}