#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);
    int arr[T+5];
    for (int i = 0; i < T; i++) {
        int your, lift;
        scanf("%d %d", &your, &lift);

        // Calculate the time to reach the ground floor
        int travelTime = abs(lift-0) * 4; 
        int doorTime = 3;  
        int enterExitTime = 5; 

        int totalTime = travelTime + (doorTime*3) + (enterExitTime*2);

        arr[i] = totalTime;
        
    }
    for(int i=0;i< T;i++){
        printf("Case %d: %d\n",i,arr[i]);
    }

    return 0;
}
