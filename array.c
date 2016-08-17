#include <stdio.h>
#include <stdlib.h>
void get2nonpepeatingnos(int arr[],int n,int *x,int *y)
{
int xor=arr[0];
int set_bit_no;
int i;
*x=0;
*y=0;
for(i=1;i<n;i++)
xor^=aee[i];
set_bit-no=xor & (xor-1);
for(i=0;i<n;i++)
{
if(arr[i] & st_bit_no)
*x=*x^arr[i];
else
*y=*yarr[i];
}
}
int main()
{
int arr[]={2,3,4,5,6,711};
int *x={int *}malloc(size(int));
int *y={int *)malloc(size(int));
printf("the non_repeting elements are  %d %d,*x,*y);getchar();
}
