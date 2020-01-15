#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"ENTER THE NUMBER";
cin>>n;
int sum;
int a=0;
int b=1;
int s=0;
while(s<n)
{
cout<<b<<"  ";
s=b+a;
a=b;
b=s;
}
return 0;
}
