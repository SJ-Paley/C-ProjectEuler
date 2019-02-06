#include <stdio.h>

int smallestDivisible();

int main()
{
  int value = smallestDivisible();

  printf("Smallest number divisable by 1-20 is: %d\n", value);

  getchar();
  return 0;
}

int smallestDivisible()
{
  //NOTES:
  // In order to be divisible by 2,5,10,15,20 the 
  // value must end in 0, thus jump by 20 for each check
  //
  // No need to check divisible by 1 or 2 in the above
  // situation

  int testValue = 20;

  while(1)
  {
    for (int i = 3; i < 21; i++)
    {
      if (testValue%i != 0)
      {
        break;
      }
      else if (i == 20)
      {
        return testValue;
      }
      //else, continue
    }

    testValue = testValue + 20;
  }
}
