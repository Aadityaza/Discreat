#include<stdio.h>

int main(void)
{
    int arr_A[]={1,2,3};
    int n=3;
    int arr_B[]={2,3,4};
    int n2=3;
    int c2=0;


    int prod_AB[100];
    for(int i=0;i!=n;i++)
    {
        for (int j=0;j!=n2;j++)
        {
            printf("%d,%d\n",arr_A[i],arr_B[j]);
        }

    }



    return 0;

}
