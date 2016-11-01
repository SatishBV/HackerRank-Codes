#include<iostream>
using namespace std;
int main()
{
int n,j,temp;
int arr[200];
arr[0]=1;
j=0;
cin>>n;
for(;n>=2;n--)
{
   temp=0;
   for(int i=0;i<=j;i++)
   {
      temp=(arr[i]*n)+temp;
      arr[i]=temp%10;
      temp=temp/10;
   }
   while(temp>0)//for
   {
      arr[++j]=temp%10;
      temp=temp/10;
   }
}
for(int i=j;i>=0;i--)
   printf("%d",arr[i]);
return 0;
}
