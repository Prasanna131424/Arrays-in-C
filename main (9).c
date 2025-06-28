//returning an array from function
#include<stdio.h>
#include<stdlib.h>
int* create_array(int);
int main(){
    int size;
    scanf("%d",&size);
    if(size<=0) return 0;
    int *arr=create_array(size);
    for(int ind=0;ind<size;ind++){
        printf("%d",arr[ind]);
    }
}
int *create_array(int size){
    int *arr=(int*) malloc(size*sizeof(int));
    for(int ind=0;ind<size;scanf("%d",&arr[ind++]));
    return arr;
}
   