/* Write a program to find largest of 3 numbers using 4 functions using Pass by value
int input()
int cmp(int a, int b, int c)
void output(int a, int b, int c, int largest)*/
#include<stdio.h>
int input()
{
  int n;
  printf("Enter a number \n");
  scanf("%d",&n);
  return n;
  
}
int cmp(int a, int b, int c)
{
  if(a>b&&a>c)
  {
    return a;

  }
  else if (b>c)
  {
    return b;
  }
  else
  {
    return c;
  }
}
void output(int a, int b, int c, int largest)
{
  printf("The largest of %d , %d and %d is %d\n",a,b,c,largest);
}
int main()
{
int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest = cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}