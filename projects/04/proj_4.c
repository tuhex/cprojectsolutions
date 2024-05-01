#include <stdio.h>

#define OCTAL_BASE 8

int main(void)
{
    int complete_num;

    printf("Enter a number between range of positive 2^16 integer: ");
    scanf("%d", &complete_num);
    printf("Octal form is: %1d%1d%1d%1d%1d", complete_num / OCTAL_BASE / OCTAL_BASE / OCTAL_BASE / OCTAL_BASE % OCTAL_BASE, complete_num / OCTAL_BASE / OCTAL_BASE / OCTAL_BASE % OCTAL_BASE, complete_num / OCTAL_BASE / OCTAL_BASE % OCTAL_BASE, complete_num / OCTAL_BASE % OCTAL_BASE, complete_num % OCTAL_BASE);
    // Cursed codes are very entertaining to read.
    return 0;
}