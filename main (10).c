/*write a code for reversing an array of integer elements
to slove these program
printing in reverse order
soring in new array in reverse order
reversing in place*/
//printing in reverse order
#include<stdio.h>
void main()
{
    int size;
    scanf("%d",&size);
    if(size<=0) return;
    int arr[size];
    for(int ind=0;ind<size;scanf("%d",&arr[ind++]));
    for(int ind=size-1;ind>=0;printf("%d ",arr[ind--]));
}