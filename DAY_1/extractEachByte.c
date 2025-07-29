//  Write a program to extract each byte from a given number and store them in a separate character variables and print the content of those variables.

#include <stdio.h>

int main()
{
    unsigned int num;
    unsigned char byte1, byte2, byte3, byte4;

    // Input: a 4-byte (32-bit) integer number
    printf("Enter an integer (0 to 4294967295): ");
    scanf("%u", &num);

    // Extract bytes using bitwise AND and shifting
    byte1 = (num & 0x000000FF); // Least significant byte (LSB)
    byte2 = (num & 0x0000FF00) >> 8;
    byte3 = (num & 0x00FF0000) >> 16;
    byte4 = (num & 0xFF000000) >> 24; // Most significant byte (MSB)

    // Display each byte
    printf("\nExtracted Bytes:\n");
    printf("Byte 1 (LSB)  : %u\n", byte1);
    printf("Byte 2        : %u\n", byte2);
    printf("Byte 3        : %u\n", byte3);
    printf("Byte 4 (MSB)  : %u\n", byte4);

    return 0;
}