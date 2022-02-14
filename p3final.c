/*Write a program to find Sum of n numbers
a. Sum of n numbers
int input_n();
int sum_n(int n);
void output(int n, int sum);
input*/
#include<stdio.h>
int input_n()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  return n;  
}
int sum_n(int n)
{
 int i,sum=0 ;
  for (i=1;i<=n;i++)
    sum+=i;
 return sum; 
}
void output(int n, int sum)
{
  int i;
for (i=1;i<n;i++)
  printf("%d+",i);
  printf("%d=%d",n,sum);
}
int main()
{
  int n, sum;
n=input_n();
sum=sum_n(n);
output(n,sum);
return 0;  
}