#include <stdio.h>

// Function prototype
int isPalindrome(int n);

int main() {
    int T;
    scanf("%d", &T);
    int arr[T+5];
    for (int i = 1; i <= T; i++) {
        int n;
        scanf("%d", &n);
        arr[i]=n;
        // Check if the number is palindromic 
    }
    for(int i =1;i<= T ;i++){

        if (isPalindrome(arr[i])) {
            printf("Case %d: Yes\n", i);
        } else {
            printf("Case %d: No\n", i);
        }
    }

    return 0;
}

// Function to check if a number is palindromic
int isPalindrome(int n) {
    int reversed = 0, original = n;

    while (n != 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    return original == reversed;
}
