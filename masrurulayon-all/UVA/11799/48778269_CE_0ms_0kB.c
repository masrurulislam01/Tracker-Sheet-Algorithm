#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    int min_speed[T] ;
    //tes
    for (int i = 0; i < T; i++) {
        int n;
        scanf("%d", &n);

        int speeds[n];
        

        for (int j = 0; j < n; j++) {
            scanf("%d", &speeds[j]);
            //find max
            if (speeds[j] > min_speed[i]) {
                min_speed[i] = speeds[j];
            }
        }

        
    }
    //output
    for (int i = 0; i < T; i++){
        printf("Case %d: %d\n", i + 1, min_speed[i]);
    }
    return 0;
}

