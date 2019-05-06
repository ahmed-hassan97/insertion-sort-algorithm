#include <stdio.h>
#include <stdlib.h>
#define max 4
void insertion_sort(int *arr,int length);
void swap(int *a,int *b);
int i,j;

int main()
{
int arr[max];
printf("enter array you want \n");
for( i=0;i<max;i++){
scanf("%d",arr+i);
}
printf("array you enter is\n");
for( i=0;i<max;i++){
    printf("%d  ",arr[i]);
}
printf("\n");
insertion_sort(arr,max);
printf("\n array after swap is\n");
for( i=0;i<max;i++){
    printf("%d  ",arr[i]);

    }

    return 0;
}
void insertion_sort(int *arr,int length){
for( i=1;i<length;i++){
        int key=arr[i];
        j=i-1;
while(j>=0&&arr[j]>key) {
  arr[j+1]=arr[j];
  j=j-1;
 }
 arr[j+1]=key;
}

}

