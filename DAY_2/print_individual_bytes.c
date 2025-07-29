//  Write a C program to print the individual bytes of a given integer using a pointer.

#include <stdio.h>

int main()
{
  int num;
  unsigned char *ptr;

  printf("Enter an integer: ");
  scanf("%d", &num);

  ptr = (unsigned char *)&num;

  printf("\nBytes of integer:\n");
  for (int i = 0; i < sizeof(int); i++)
    printf("Byte %d: 0x%02x\n", i, ptr[i]);

  return 0;
}
