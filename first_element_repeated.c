#include<stdio.h>
int main()
{
int i,n;
printf("Enter array size");
scanf("%d",&n);
int arr[n];
printf("Enter Elements");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("First Element Repeated %d",first_element(arr,n));
return 0;
}
int first_element(int arr[],int n)
{
int i,j,ct=0,el=0;
for(i=0;i<n;i++)
{
ct=0;
for(j=0;j<n;j++)
{
if(arr[i]==arr[j])
{
ct++;
}
}
if(ct>1)
{
el=arr[i];
return el;
}
}
}
