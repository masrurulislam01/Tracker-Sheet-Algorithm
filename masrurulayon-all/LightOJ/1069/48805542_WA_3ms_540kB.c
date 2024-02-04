#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    int arr[T+5][2];
    int arr1[T+5];
    for(int i =0;i<T;i++){
        scanf("%d %d",&arr[i][0],&arr[i][1]);
        int up_down = arr[i][1]*4;
        int total =up_down+(3*3)+(5*2);
        arr1[i]=total;
    }
    for(int i=0;i<T;i++){
        printf("Case %d: %d\n",i+1,arr1[i]);
    }

}