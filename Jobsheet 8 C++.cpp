#include <iostream>
using namespace std;
int main()
{
	cout <<"NAMA : AZHAR\n";
  cout <<"NIM  : F1B019033\n";

	int x[10],i;
	for(i=0;i<10;i++)
	{
		cout<<"masukan nilai "<<i+1<<" : ";
		cin>>x[i];
	}
	cout<<endl;
	for(i=0;i<10;i++)
	{
	cout<<"nilai ke "<<i+1<<" = "<<x[i]<<endl;
}
	return 0;
}
