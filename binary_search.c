#include <stdio.h>
void main (void) 
{
    printf(" ======================== binary search algorithm ======================== \n ");
    int n ;
    printf ("enter the legnth of lest ");
    scanf("%d",&n);
    int arr [n];
    int i ;
    printf("reading the list form user :   (note : this app is working with sorted data only) \n");
    for (i=0 ; i<n ;i++)
    {
        printf ("value [%d] = ",i+1);
        scanf ("%d",& arr[i]);
    }
    printf("=========================================\n");
    int key ;
    printf("enter the number to be searched  ");
    scanf("%d",&key );
    /*********************binary search algorithm*********************/
    int lower , upper , mid ;
    lower=0;
    upper = n-1;
    int pos ;
    do 
    {
        mid =( lower + upper ) / 2;
        if (arr[mid]==key)
        {
                pos = mid ;
                break;
        }
        else if (key > arr[mid])
        {
              lower = mid;
        }
        else 
        {
                upper = mid ;
        }


    }while (lower < upper );
    printf("=========================================\n");

    printf (" %d is in the position of %d in the list you entered \n" ,key,pos+1);

    

}