/*write a code for reversing an array of integer elements
to slove these program
printing in reverse order
storing in new array in reverse order
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
    int ind1,ind2;
    int reverse[size];
    for( ind1=size-1,ind2=0;ind2<=size;ind1--,ind2++)
    reverse[ind2]=arr[ind1];
    for(int ind=0;ind<size;ind++)
    printf("%d ",reverse[ind2]);
}