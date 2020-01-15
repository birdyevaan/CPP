#include<iostream>
using namespace  std;
int main()
{
int flag=0;
int n,rem,temp=0;
cout<<"ENTER A NUMBER";
cin>>n;
int y=n;
while(y!=0)
{
rem=y%10;
temp=temp*10+rem;
y/=10;
}
if(n==temp)
cout<<"YES "<<n<<" IS A PALINDROME";
else
cout<<"NO "<<n<<" IS NOT A PALINDROME";
return 0;
}

