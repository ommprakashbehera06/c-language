#include<stdio.h>
void sumArr(int arr1[],int arr2[],int size,int res[]){
    for(int i=0;i<size;i++)
    {
        res[i]=arr1[i]+arr2[i];
    }
}




int main(){
    int arr1[]={5,-1,7};
    int arr2[]={2,4,-2};
    int size=3;
    int res[3];
    sumArr(arr1,arr2,size,res);
    for(int i=0;i<size;i++)
    {
        printf("%d",res[i]);
    }
}