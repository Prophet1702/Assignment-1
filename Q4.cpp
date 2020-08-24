#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100];
    cin>>s;
    for(int i=0,j=strlen(s)-1;i<=strlen(s)/2;i++,j--)
    {
        if(s[i]!=s[j])
        {
            cout<<"Not a palindrome";
            return 0;
        }
    }
    cout<<"String is a palindrome ";
    return 0;
}