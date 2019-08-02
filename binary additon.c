#include<stdio.h>
void add (int x,int y,int z){
    int c=(x&&y);
    int s=(x^y)^z;
    printf("%d\n%d",s,c);
    
}
int main ()
{
    int a=1010,b=0001;
    for(int i=0;a==0&&b==0;i++){
      int x=a%10;
      int y=b%10;
      int z=0;
      a/=10;
      b/=10;
    add(x,y,z);
    }
    
}
