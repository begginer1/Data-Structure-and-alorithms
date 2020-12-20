#include<iostream>
using namespace std;
int fact(int n)
{int i,no=1;
    if(n==0)
    return 1;
    else
    {
    for(i=n;i>=2;i--)
    no*=i;
    return no;
}
}
int main()
{
    int i,j,n;
cin>>n;
    for(i=0;i<n;i++){
    for(j=0;j<=i;j++)
    cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
    cout<<endl;
    }
 return 0;
}