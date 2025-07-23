// Write a program to swap the contents of two variables entered through command line using function and pointers.

#include <stdio.h>

void swap(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int n1, n2;

  printf("Enter first number: ");
  scanf("%d", &n1);

  printf("Enter second number: ");
  scanf("%d", &n2);

  printf("Before swapping: num1 = %d, num2 = %d\n", n1, n2);

  swap(&n1, &n2);

  printf("After swapping: num1 = %d, num2 = %d\n", n1, n2);

  return 0;
}
