#include<stdio.h>

struct array
{
    int A[10];
    int size;
    int length;
};
void display(struct array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void NLF_PRS(struct array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0 )
        i++;
        while(arr->A[j]>=0)
            j--;
        if(i<j)
            swap(&arr->A[i],&arr->A[j]);
    }
}

int main(){
struct array arr={{-2,3,5,-6,-7,4,-8},10,7};

NLF_PRS(&arr);
display(arr);
return 0;
}
