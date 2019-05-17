#include<stdio.h>
#include <stdlib.h>


int main(void)
{
    float *arrA,*arrB;

    int n  ;
    printf("\n Enter no of inputs: ");
    scanf("%d",&n);

    arrA=(float*)malloc(n*sizeof(float));
    arrB=(float*)malloc(n*sizeof(float));

    for(int i=0;i!=n;i++)
    {
        printf("\nEnter %d th value of set A",i+1);
        scanf("%f",(arrA+i));

        printf("\nEnter %d th value of set B",i+1);
        scanf("%f",(arrB+i));

    }
   // for(int i=0;i!=n;i++)
   // {
   //     printf("\n %d th value of set A is %0.2f",i+1,*(arrA+i));

   //     printf("\n %d th value of set A is %0.2f",i+1,*(arrB+i));
   // }

printf("\nA U B is:");
    for(int i=0;i!=n;i++)
    {

       if (*(arrA+i)>*(arrB+i))
       printf("\n %d th value of union set  is %0.2f",i+1,*(arrA+i));
       else
       printf("\n %d th value of union set  is %0.2f",i+1,*(arrB+i));

    }
     printf("\nA ^ B is:") ;
    for(int i=0;i!=n;i++)
    {

       if (*(arrA+i)<*(arrB+i))
       printf("\n %d th value of intersection set  is %0.2f",i+1,*(arrA+i));
       else
       printf("\n %d th value of intersection set  is %0.2f",i+1,*(arrB+i));

    }

    printf("\nComplement of set  A is");
    for(int i=0;i!=n;i++)
        {
            printf("\n %d th value of complement of set A is %0.2f",i+1,1-*(arrA+i));
        }


    printf("\nComplement of set  B is");

    for(int i=0;i!=n;i++)
        {
            printf("\n %d th value of complement of set B is %0.2f",i+1,1-*(arrB+i));
        }

    return 0;

}
