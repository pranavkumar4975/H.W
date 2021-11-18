#include<stdio.h>
struct array
{
    int A[10];
    int size;
    int length;
};

int main(){
struct array arr1={{2,3,4,5,6},10,5};
struct array arr2={{2,4,6,8,10},10,5};
struct array arr3;
int i,j,k;
i=j=k=0;
while(i<arr1.length && j<arr2.length)
{

if(arr1.A[i]<arr2.A[j])

          i++;

      else if(arr2.A[j]<arr1.A[i])

        j++;

      else{
        arr3.A[k]=arr1.A[i];
      k++;
      i++;
      j++;
      }
  }

arr3.length=k;
for(int a=0;a<k;a++)
    printf("%d ",arr3.A[a]);


return 0;
}
