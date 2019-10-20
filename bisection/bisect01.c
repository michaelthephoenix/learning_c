#include <stdio.h>
#include <math.h>

#define sign(x) (x > 0) ? 1 : ((x < 0) ? -1 : 0)
float bisect();
float f (float x);
void show();
int f_disp(int i, float a, float b, float c);
float a = 1, y;
float b = 4;
float TOL = 1E-3;
float NMAX = 1000;
float c = 0; 
int i = 0; //index



int main(void)
{
  
  // printf("i\ta\t\tb\t\tc\t\tf(a)\t\tf(b)\t\tf(c)\n");
  // f_disp(i, a, b, c);
  // bisect();
  // printf("\nRoot is c=%.7f found after %d iterations\n", c, i);
  // printf("The value of the function f(c) is: %.10f\n", f(c));
  // for (int i = 0; i < 5; i++)
  // {
  //   float x;
  //   switch (i)
  //   {
  //   case 0:
  //     y = 4 - x*x*x;
  //     show();
  //     break;
    
  //   default:
  //     break;
  //   }
  // }
  
  show();
  return 0;

}

float bisect()
  {
    c = (a + b)/2;
    if(f(c) == 0)
    {
      printf("root is: %f \n" ,c);
    }
    else
    {
      while ((fabs(f(c)) > TOL) && (i<=NMAX))
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
  }

float f(float x)
{
  // float arr[4] = {y1, y2, y3, y4};
  float y;
  y = 4 - x*x*x;
  // y2 = 2 - x * x;
  // y3 = 126 - pow(x, 7);
  // y4 = 43 - pow(x, 3);
  
  return y;
}

int f_disp (int i, float a, float b, float c)
{
  printf("%d\t%.7f\t%.7f\t%.7f\t", i, a, b, c);
 printf("%.7f\t%.7f\t%.7f\n", f(a), f(b), f(c));
}

void show()
{
  printf("i\ta\t\tb\t\tc\t\tf(a)\t\tf(b)\t\tf(c)\n");
  f_disp(i, a, b, c);
  bisect();
  printf("\nRoot is c=%.7f found after %d iterations\n", c, i);
  printf("The value of the function f(c) is: %.10f\n", f(c));
}