#include <stdio.h>
// EAN Check Digit Verificator
int main(void)
{
    int e1,e2,e3,e4,e5,e6,e7,e8,e9,e10,e11,e12;
    int first_sum, second_sum, total;
    first_sum = second_sum = total = 0;

    printf("Enter the 12 digit EAN Number: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&e1,&e2,&e3,&e4,&e5,&e6,&e7,&e8,
    &e9, &e10, &e11, &e12);  

    first_sum = e2+e4+e6+e8+e10+e12;
    second_sum = e1+e3+e5+e7+e9+e11;
    total = 9 - ((first_sum * 3) + second_sum - 1) % 10;
    printf("%d\n",total);

    return 0;
}