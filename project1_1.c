#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct array
{
    int A[10];
    int size;
    int length;
};
  void display(struct array arr)
  {
      for(int i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
  }
int min(struct array arr)
{
    int min=arr.A[0];
    int i;
    for(i=1;i<arr.length;i++)
    {
        if(arr.A[i]<min)
            min=arr.A[i];

    }
    return min;
}
int getindex(struct array arr,int x)
{
   int i;
   for(i=0;i<arr.length;i++)
   {
       if(arr.A[i]==x)
        return i;
   }
   return -1;
}


int main(){
    struct array arr={{23,54,67,87,56},10,5};
    struct array p;
int minm,k;
minm=min(arr);
int index;
index=getindex(arr,minm);
for(int i=0;i<arr.length;i++)
{
    p.A[i]=arr.A[index];
    arr.A[index]=INT_MAX;
    minm=min(arr);
    index=getindex(arr,minm);
}
p.length=arr.length;
p.size=arr.size;
for(int j=0;j<arr.length;j++)
printf("%d ",p.A[j]);

arr=p;

printf("\n");
display(arr);
printf("\n");
scanf("%d",&k);
int kmax=arr.length-k;
printf("%d ",arr.A[kmax]);
return 0;
}



