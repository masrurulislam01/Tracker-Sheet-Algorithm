#include <stdio.h>
#include <stdlib.h>

int main() {
    int T,k;
    scanf("%d", &T);
    int arr[T+5];
    for (int i = 0; i < T; i++) {
        int you, lift;
        scanf("%d %d", &you, &lift);
        if(lift <= you){
            k = you - lift;
        }
        else{
            k = lift -you;
            }
        int extratime = 19 ; // 3 time OpenClose + 2 time EnterExit
        
        
        int totalTime = 4*k + 4*you + 19;

        arr[i] = totalTime;
        
    }
    for(int i=0;i< T;i++){
        printf("Case %d: %d\n",i,arr[i]);
    }

    return 0;
}
