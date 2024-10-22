#include <stdio.h>

int climbStairs(int n) {
    if (n == 1) return 1;
    
    int prev1 = 1, prev2 = 2;
    for (int i = 3; i <= n; i++) {
        int current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    
    return prev2;
}

int main() {
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);
    int ways = climbStairs(n);
    printf("Number of distinct ways to climb to the top: %d\n", ways);
    return 0;
}
