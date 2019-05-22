#include<stdio.h>

int main(void)
{
    int arr_A[]={1,2,43,7,9,8,41,32};
    int n=8;
    int arr_B[]={21,78,2,9,43,78,8,23,67};
    int n2=9;
    int c2=0;
    
    int arr_int[100];

    for(int i= 0;i !=n2 ; i++)//b
    {

        for(int j=0 ;j!=n;j++)//a
        {
        if(arr_B[i] == arr_A[j])
        {
            arr_int[c2++]=arr_B[i];
        }

        }
    }

    printf("intersect is:\n");
    for(int i=0 ; i != c2; i++)
    {
     printf("%d \n",arr_int[i]);
    }
    return 0;

}
