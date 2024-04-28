#include <stdio.h>

/*
    C Programming: A Modern Approach 2nd Edition
    Chapter 3 ~ Project 5
*/

int main(void)
{
    int numerator_one, numerator_two;
    int denom_one, denom_two;

    printf("Enter two fractions seperated by a plus sign: ");
    scanf("%d /%d +%d /%d", &numerator_one, &denom_one, 
        &numerator_two, &denom_two);
    printf("The sum is %d/%d\n", numerator_one * denom_two + numerator_two * denom_one, denom_one * denom_two);
    return 0;
}