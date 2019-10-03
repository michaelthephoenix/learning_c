#include <stdio.h>

int main()
{
  int count;
  int n[ 6 ] = { 32, 27, 64, 18, 95, 14 };
  int m[3][3] = { {61, 72, 70}, {78, 80, 82}, {83, 70, 90} };

  for (int i = 0; i < 3; i++)
  {
    count++;
    printf("%d ", count);
    for (int j = 0; j < 3; j++)
    {
      /* code */
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
  

  return 0;
}