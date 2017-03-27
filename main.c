#include <stdio.h>

int isPalindrome(int candidate) {
    int num = candidate;
    int reverse = 0;
    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    return candidate == reverse;
}

int main() {
    int max = 999;
    int biggest = 0;
    for (int leading = max; leading > 1; leading--){
        for (int trailing = max; trailing >= leading; trailing--) {
            if (isPalindrome(trailing*leading)) {
                 if (biggest < leading*trailing) {
                     biggest = leading*trailing;
                 }
            }
        }
    }
    printf("%i", biggest);
    return 0;
}