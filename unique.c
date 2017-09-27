#include<stdio.h>
int main()
{
printf("asdsad");
int i,n,j,ct=0,el=0;
printf("Enter array size");
scanf("%d",&n);
int arr[n];
printf("Enter Elements");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
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
if(ct==1)
{
el=arr[i];
}
}
printf("Unique Element %d",el);
return 0;
}
