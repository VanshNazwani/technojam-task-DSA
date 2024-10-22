
#include <stdio.h>
void generatePascalTriangle(int n)
{
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++)
            printf("  ");
        
        int a = 1;
        for (int j = 1; j <= i; j++) {
            printf("%4d", a);
            a = a * (i - j) / j;
        }
        printf("\n");
    }
}

// Driver code
int main()
{
    int n;
    printf("Enter the value of n :  ");
    scanf("%d",&n);
    generatePascalTriangle(n);
    return 0;
}