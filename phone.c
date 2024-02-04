#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char digits[n + 1]; 
    scanf("%s", digits);

    int eight = 0;

    for (int i = 0; i < n; i++) {
        if (digits[i] == '8') {
            eight++;
        }
    }

    if(eight >= n/11){
        printf("%d\n",n/11);
    }
    else if(eight < n/11 && n > 11){
        printf("%d\n",eight);
    }
    else{
        printf("%d\n",0);
    }

    return 0;
}
