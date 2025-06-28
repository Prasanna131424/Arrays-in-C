//given an integer array contains n elements where each element is gona repeated twice find the unique element
#include<stdio.h>
void main()
{
    int size;
    scanf("%d",&size);
    if(size<=0) return;
    int arr[size];
    for(int ind=0;ind<size;scanf("%d",&arr[ind++]));
    for(int ind=0;ind<size;ind++){
    int ele =arr[ind];
    int count=0;
    for(int inner=0;inner<size;inner++){
        if(arr[inner]==ele){
            count++;
        }
    }
    if(count==1){
         printf("%d",arr[ind]);
         break;
    }
}
}