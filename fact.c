#include <stdio.h>

int main() {
    int i;
int n=5;
    int fact=1;

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial = %d\n",fact);
    }
    return 0;
}
