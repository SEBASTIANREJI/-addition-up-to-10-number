#include<stdio.h>

int main()
{
  int  a[9],i,j;
int sum=0;
printf("Addition up to 10 numbers\n\n");
printf("Enter up to 10 number");
for(int i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
  
for(int j=0;j<10;j++)
{
sum=sum+a[j];
}
printf("Sum is %d",sum);

    return 0;
}