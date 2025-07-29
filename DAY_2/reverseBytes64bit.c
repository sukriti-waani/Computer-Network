//  Write a C Program to reverse the bytes of a 64-bit double precision floating point number, print the original and reversed value in memory (byte-wise) and verify correctness.

#include <stdio.h>

int main()
{
  double num, reversed;
  unsigned char *ptr1, *ptr2;

  printf("Enter a double value: ");
  scanf("%lf", &num);

  // Original bytes
  ptr1 = (unsigned char *)&num;
  printf("\nOriginal bytes:\n");
  for (int i = 0; i < sizeof(double); i++)
    printf("Byte %d: 0x%02x\n", i, ptr1[i]);

  // Reverse bytes
  unsigned char temp[8];
  for (int i = 0; i < 8; i++)
    temp[i] = ptr1[7 - i];

  // Copy reversed bytes to another double variable
  ptr2 = (unsigned char *)&reversed;
  for (int i = 0; i < 8; i++)
    ptr2[i] = temp[i];

  printf("\nReversed bytes:\n");
  for (int i = 0; i < 8; i++)
    printf("Byte %d: 0x%02x\n", i, ptr2[i]);

  printf("\nOriginal value: %lf", num);
  printf("\nReversed value: %lf\n", reversed);

  return 0;
}
