#include<studio.h>
void main(){
    int size;
    scanf("%d",&size);
    if(size<=0) return;
    int arr[size];
    for(int ind=0;ind<size;sacnf("%d",&arr[ind++]));
    int unique=0;
    for(int ind=0;ind<size;ind++){
        unique^=arr[ind];
    }
    printf("%d,unique");
}