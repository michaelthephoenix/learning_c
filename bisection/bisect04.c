#include <stdio.h>
#include <math.h>

#define sign(x) (x > 0) ? 1 : ((x < 0) ? -1 : 0)
float bisect();
float f(float x);
int f_disp(int i, float a, float b, float c);
float TOL = 1E-3, NMAX = 1000;
int i = 0, k = 0;

int main(void)
{
  while (k <= 4)
  {
    bisect();
    k++;
  }

  return 0;
}

float bisect()
{
  float c = 0, a = 1, b = 4;
  c = (a + b) / 2;
  printf("i\ta\t\tb\t\tc\t\tf(a)\t\tf(b)\t\tf(c)\n");
  f_disp(i, a, b, c);
  if (f(c) == 0)
  {
    printf("root is: %f \n", c);
  }
  else
  {
    while ((fabs(f(c)) > TOL) && (i <= NMAX))
    {
      if (sign(f(c)) == sign(f(a)))
      {
        a = c;
      }
      else
      {
        b = c;
      }
      c = (a + b) / 2;
      f_disp(i + 1, a, b, c);
      i++;
    }
  }
  printf("\nRoot is c=%.7f found after %d iterations\n", c, i);
  printf("The value of the function f(c) is: %.10f\n", f(c));
}

float f(float x)
{
  float y;

  if (k == 0)
  {
    y = 4 - pow(x, 3);
    return y;
  }
  if (k == 1)
  {
    y = 2 - x * x;
  }
  if (k == 2)
  {
    y = 126 - pow(x, 7);
  }
  if (k == 3)
  {
    y = 43 - pow(x, 3);
  }
  if (k == 4)
  {
    y = 726 - pow(x, 5);
  }
  return y;
}

int f_disp(int i, float a, float b, float c)
{
  printf("%d\t%.7f\t%.7f\t%.7f\t", i, a, b, c);
  printf("%.7f\t%.7f\t%.7f\n", f(a), f(b), f(c));
}