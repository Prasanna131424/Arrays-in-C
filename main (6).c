//write a code sum of array elemnts and product of array elements
#include<stdio.h>
void main()
{
    int size;
    scanf("%d",&size);
    if(size<=0) return;
    int arr[size];
    for(int ind=0;ind<size;scanf("%d",&arr[ind++]));
    int sum=0,product=1;
    for(int ind=0;ind<size;ind++){
        sum+=arr[ind];
        product*=arr[ind];
    }
    printf("sum=%d and producr=%d",sum,product);
}