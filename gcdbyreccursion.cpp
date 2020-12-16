#include<iostream>
using namespace std;
int gcd(int no1,int no2)
{
if(no1==0)
return no2;
else if(no1<=no2)
 return gcd(no2%no1,no1);
else if(no1>=no2)
 return gcd(no1%no2,no2);
}
int main()
{
    int no1,no2;
    cin>>no1>>no2;
    cout<<gcd(no1,no2);
    return 0;
}