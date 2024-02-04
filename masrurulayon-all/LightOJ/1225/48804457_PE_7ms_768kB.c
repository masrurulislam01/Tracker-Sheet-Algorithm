#include <stdio.h>

int reverse(int n);

int main() {
    int T ;
    scanf("%d", &T);
    int arr[T];
    int arr1[T];
    for(int i = 0; i < T; i++) {
        scanf("%d",&arr[i]);
        arr1[i] = reverse(arr[i]);
    }
    
    for(int i=0;i<T;i++){
        if(arr[i]==arr1[i]){
            printf("Case  %d: Yes\n",i+1);
        }else{
            printf("Case  %d: No\n",i+1);
        }
    }
}

int reverse(int n){
    int reversed = 0, remainder, original;
    
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return reversed;
}