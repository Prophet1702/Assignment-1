#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,m,rev=0;
    cin>>n;
    m=n;
    int i=0;
    while(m!=0)
    {
        m=m/10;
        i++;
    }
    m=n;
    while(m!=0)
    {
        rev=rev+(m%10)*pow(10,i-1);
        m=m/10;
        i--;
    }
    if(rev==n)
    cout<<"Number is a palindrome ";
    else
    {
        cout<<"Number is not a palindrome ";
    }
    
    return 0;
}