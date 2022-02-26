/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int minimum (int no_1,int no_2);
int maximum (int no_1,int no_2);
int multiply(int no_1,int no_2);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

int minimum (int no_1,int no_2)
{
  if(no_1 > no_2)
    return no_2;

  else 
    return no_1;
}

int maximum (int no_1,int no_2)
{
  if(no_1 > no_2)
    return no_1;

  else 
    return no_2;
}

int multiply(int no_1,int no_2)
{
  return no_1 * no_2;
}

