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
void rotate(struct array *arr)
{
    int i,j;
    j=arr->length;
    arr->A[j]=arr->A[0];
    for(i=1;i<=arr->length;i++)

    arr->A[i-1]=arr->A[i];
}

int main(){
struct array arr={{3,6,8,69,7},10,5};
display(arr);
printf("\n");
rotate(&arr);
display(arr);


return 0;
}
