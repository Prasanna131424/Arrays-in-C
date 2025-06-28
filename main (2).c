#include<stdio.h>
void main()
{
    int arr[]={[3]=2,[2]=9,[0]=5,6,7};
    int noe=sizeof(arr)/sizeof(arr[0]);
    for(int ind=0;ind<noe;printf("%d",arr[ind++]));
}