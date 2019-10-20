#include <stdio.h>
#include <math.h>

#define sign(x) (x > 0) ? 1 : ((x < 0) ? -1 : 0)
float bisect(), f(float x), TOL = 1E-3, NMAX = 1000;
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
            i++;
        }
    }
    printf("\nRoot is c=%.7f found after %d iterations\n", c, i);
    printf("The value of the function f(c) is: %.10f\n", f(c));
}

float f(float x)
{
    float y;
    switch (k)
    {
    case 0:
        y = 4 - pow(x, 3);
        break;
    case 1:
        y = 2 - x * x;
        break;
    case 2:
        y = 126 - pow(x, 7);
        break;
    case 3:
        y = 43 - pow(x, 3);
        break;
    case 4:
        y = 726 - pow(x, 5);
        break;

    default:
        break;
    }
    return y;
}