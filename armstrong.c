#include <stdio.h>
int main() {
    int num, org, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    org = num;
    while (org!=0)
        {
        remainder=org%10;
        result += remainder * remainder * remainder;
        org=org/10;
        }
    if (result==num)
        printf("%d is an Armstrong number.",num);
    else
        printf("%d is not an Armstrong number.",num);
    return 0;
}



