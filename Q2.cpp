#include<iostream>
using namespace std;
int main()
{
	int max,a[3];
	for(int i=0;i<3;i++)
		cin>>a[i];
	max=a[0];
	for(int i=0;i<3;i++)
		if(a[i]>max)
			max=a[i];
	cout<<endl<<max;
	return 0;
}
