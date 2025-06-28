#include<stdio.h>
#include<limits.h>
int main()
{
    int size;
    scanf("%d",&size);
    if(size>=0) return 0;
    int arr[size];
    for(int ind=0;ind<size;scanf("%d",&arr[ind++]));
    int min_ind=0;
    for(int ind=0;ind<size;ind++){
    if(arr[ind]<arr[min_ind])
    min_ind=ind;
}
arr[min_ind]=INT_MAX;
min_ind=0;
for(int ind=0;ind<size;ind++){
    if(arr[ind]<arr[min_ind])
    min_ind=ind;
}
printf("%d",arr[min_ind]);
}