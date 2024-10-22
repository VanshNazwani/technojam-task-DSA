#include <stdio.h>

int rangeBitwiseAnd(int left, int right) {
    int Count = 0;
    
    // Shift both left and right until they are the same
    while (left < right) {
        left >>= 1;
        right >>= 1;
        Count++;
    }
    
    // Shift back the common prefix
    return left << Count;
}

int main() {
    int left, right;
    printf("Enter Left value: ");
    scanf("%d", &left);
    printf("Enter Right value: ");
    scanf("%d", &right);
    
    
    int result = rangeBitwiseAnd(left, right);
    printf("Bitwise AND of numbers between %d and %d is: %d\n", left, right, result);
    
    return 0;
}
