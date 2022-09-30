#include <stdio.h>
#include <stdlib.h>
int DeleteElement(int arr[], int index,int n)
{    for(int i = index;i<n ;i++)
   {
       arr[i]= arr[i+1];
   }
   arr[9]= 0;

}
int main()
{
    int arr[10], n =10, index;
    printf("enter the array \n");
    for(int i = 0;i<10;i++)
    {
        printf("index %d =  ",i);
        scanf(" %d", &arr[i]);
    }
    printf("enter the index of the element you want to delete:   ");
    scanf("%d", &index);
    DeleteElement(arr, index,n);
    printf("the array after deleting \n");
    for(int i = 0;i<9;i++)
    {
        printf(" %d ",arr[i]);

    }
    return 0;
}
