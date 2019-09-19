#include<stdio.h>

void prime_factorize(int n)
{
  int i = 2;
  printf("prime factorization of %d: ", n);
  while (n != 1)
  {
    if (n % i == 0)
    {
      while (n % i == 0)
      {
        printf("%d", i);
        printf("*");
        
        n = n / i;
      }
      
    }
    i++;
  }
  
}

int main()
{
  int n;
  printf("Please enter a number: ");
  scanf("%d", &n);
  prime_factorize(n);
  return 0;
}