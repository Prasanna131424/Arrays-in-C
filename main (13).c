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
    int ind1,ind2;
    for(int ind=0;ind<size;scanf("%d",&arr[ind++]));
    int safe=arr[size-1];
    for(int ind=size-1;ind>0;ind--){
        arr[ind]=arr[ind-1];
        }
        arr[0]=safe;
        for(int ind=0;ind<size;ind++)
        printf("%d ",arr[ind]);
}