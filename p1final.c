#include<stdio.h>

void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter two fraction numbers");
  scanf("%d%d",num1,den1);
  scanf("%d%d",num2,den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  num1 = num1 * den2;
  num2 = num2 * den1;
  *num3 = num1 + num2;
  *den3=den1 * den2;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("Sum of two given fractions is %d/%d+%d/%d=%d/%d\n",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,num2,num3,den1,den2,den3;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
  return 0;
}