#include<stdio.h>
int main()
{
    int n;
    scanf_s("%d", &n);
    int sum = 0;
    printf("%d", n);
    while (n > 0 || sum > 9)
    {
        //loop if not 1 digit //
        if (n == 0) {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
        if (n == 0) {
            printf(" -> %d", sum);
        }
    }
}