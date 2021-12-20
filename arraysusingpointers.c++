#include<iostream>
using namespace std;
int main()
{int a[5],*p;
	cout<<"Enter elements:"<<endl;
	for(int i=0;i<5;i++)
	{
	cin>>a[i];
}
cout<<"You entered:\n"; 
p=a;
for(int i=0;i<5;i++)
{cout<<*p<<endl;
p++;
}
return 0;
}
