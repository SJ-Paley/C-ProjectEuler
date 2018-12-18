#include <stdio.h>

int main()
{
  long int n2 = 1; //n-2 initialized to 1
  long int n1 = 2; //n-1 initialized to 2
  long int n = 0;
  long int sum = n1; //initial condition

  while (n < 4000000)
  {
    n = n1 + n2;
    n2 = n1;
    n1 = n;

    if(n%2==0)
    {
      sum += n;
    }
  }

  printf("%ld\n", sum);
  getchar();
  return 0;
}
