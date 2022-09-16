#include<stdio.h>
int main()
{
int n;
printf("Enter Array Size : ");
scanf("%d", &n);
int arr[n];
int count_odd=0,count_even=0;
printf("Enter Array Elements:\n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
if(arr[i]%2==0)
{
count_even+=1;
}
else
count_odd+=1;
}
printf("EVEN COUNT :%d\n",count_even);
printf("ODD COUNT :%d",count_odd);
}
