#include <stdio.h>

int main(void)
{
    int complete_num;

    scanf("%d", &complete_num);
    printf("The reversal is: %d%d\n", complete_num % 10, complete_num / 10);
    return 0;
}