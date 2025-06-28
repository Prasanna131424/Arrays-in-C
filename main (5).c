//given n array elements find max and second max number
#include<stdio.h>
void main()
{
    int size;
    scanf("%d",&size);
    if(size<=0) return;
    int arr[size];
    for(int ind=0;ind<size;scanf("%d",&arr[ind++]));
    int max=arr[0],s_max=arr[0];
    for(int ind=0;ind<size;ind++)
    {
        if(arr[ind]>s_max){
            s_max=max;
            max=arr[ind];
        }else if(arr[ind]>s_max){
            s_max=arr[max];
        }
    }
    printf("max=%d and s_max=%d",max,s_max);


}