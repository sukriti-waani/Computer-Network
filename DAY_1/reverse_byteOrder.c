// Write a program to reverse the byte order of a 32-bit unsigned integer. 

#include <stdio.h>

unsigned int reverseBytes(unsigned int num) {
    return ((num >> 24) & 0x000000FF) | 
           ((num >> 8)  & 0x0000FF00) | 
           ((num << 8)  & 0x00FF0000) | 
           ((num << 24) & 0xFF000000);
}

int main() {
    unsigned int n;
    printf("Enter a 32-bit unsigned integer: ");
    scanf("%u", &n);

    unsigned int reversed = reverseBytes(n);
    printf("Original number: %u\n", n);
    printf("Reversed byte order: %u\n", reversed);

    return 0;
}
