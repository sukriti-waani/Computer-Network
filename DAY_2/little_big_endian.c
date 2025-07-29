// .Write a C program to check whether the Host machine is in Little Endian or Big Endian. Enter a number, print the content of each byte location andConvert the Endianness of the same i.e. Little to Big Endian and vice-versa.

#include <stdio.h>

// Function to check endianness
int checkEndian()
{
  unsigned int x = 1;
  char *c = (char *)&x;
  return (*c == 1); // 1 = Little Endian, 0 = Big Endian
}

// Function to convert endianness
unsigned int convertEndian(unsigned int num)
{
  return ((num >> 24) & 0xff) |
         ((num << 8) & 0xff0000) |
         ((num >> 8) & 0xff00) |
         ((num << 24) & 0xff000000);
}

int main()
{
  unsigned int num;
  unsigned char *ptr;
  int i;

  // Check system endianness
  if (checkEndian())
    printf("Host machine is Little Endian.\n\n");
  else
    printf("Host machine is Big Endian.\n\n");

  // Input number
  printf("Enter a 32-bit number: ");
  scanf("%u", &num);

  // Print bytes of original number
  ptr = (unsigned char *)&num;
  printf("\nOriginal number's byte representation:\n");
  for (i = 0; i < sizeof(num); i++)
    printf("Byte %d: 0x%02x\n", i, ptr[i]);

  // Convert endianness
  unsigned int converted = convertEndian(num);
  unsigned char *cptr = (unsigned char *)&converted;

  printf("\nNumber after converting endianness: %u\n", converted);
  printf("Converted number's byte representation:\n");
  for (i = 0; i < sizeof(converted); i++)
    printf("Byte %d: 0x%02x\n", i, cptr[i]);

  return 0;
}