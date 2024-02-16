#include <stdio.h>
int * git_greater(int array [],int v );
int * qiuck_sort (int arr []);
int * git_less(int array [],int v );
int size =0 ;
void main (void)
{

    printf("======================== quick sort algorithm ========================\n");
    printf("======================================================================\n");
    
    printf("enter the legnth of the list : ");
    scanf("%d",&size);
    int data [size];
    int i ;

    for (i=0 ; i<size ;i++)
    {
        printf ("value [%d] = ",i+1);
        scanf ("%d",& data[i]);
    }
    printf("=========================================\n");



    qiuck_sort(data);

     for (i=0 ; i<size ;i++)
    {
        printf ("value [%d] = %d",i+1 , data[i]);
        
    }
    printf("=========================================\n");


}

int * qiuck_sort (int arr [])
{
    int * less;
    int * greater ;
    int n=sizeof(arr)/sizeof(arr[0]);
    if (n<2)
    return arr;
    else
    {
        int pivot;
        pivot=arr[0];
        less=git_less(arr,pivot);
        greater=git_greater(arr,pivot);
        return (qiuck_sort(less) +  pivot + (int)qiuck_sort(greater)) ;

    }
      


}
int * git_less(int array [],int v )
{
    int i ;
    int count =0;
    for (i=0; i<size;i++)
    {
        if (array[i]<v) count++ ;
    }
    int less[count];
    int index =0;
    for (i=0; i<size;i++)
    {
        if (array[i]<v) 
        {
            less[index]=array[i];
            index++;
        }
    }
    return less;
}
int * git_greater(int array [],int v )
{
    int i ;
    int count =0;
    for (i=0; i<size;i++)
    {
        if (array[i]>v) count++ ;
    }
    int greater[count];
    int index =0;
    for (i=0; i<size;i++)
    {
        if (array[i]>v) 
        {
            greater[index]=array[i];
            index++;
        }
    }
    return greater ;
}