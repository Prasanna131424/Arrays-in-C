// given an integer n elements find min and max 
#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    if(size<=0) return 0;
    int arr[size];
    for(int ind=0;ind<size;scanf("%d",&arr[ind++]));
    int min=arr[0];
    int max=arr[0];
    for(int ind=1;ind<size;ind++){
        if(arr[ind]<min) min=arr[ind];
        if(arr[ind]>max) max=arr[ind];
    }
    printf(min="%d" and max="%d",min,max );
}