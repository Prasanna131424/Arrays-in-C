#include<stdio.h>
void main()
{
    int size;
    scanf("%d",&size);
    if(size<=0) return;
    int arr[size];
    for(int ind=0;ind<size;scanf("%d",&arr[ind++]));
    int min=arr[0],s_min=arr[0];
    for(int ind=0;ind<size;ind++)
    {
        if(arr[ind]<min){
            s_min=min;
            min=arr[ind];
        }else if(arr[ind]<s_min){
            s_min=arr[min];
        }
    }
    printf("min=%d and s_min=%d",min,s_min);


}