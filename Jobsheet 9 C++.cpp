#include <iostream>
using namespace std;
int main()
{
	cout <<"NAMA : AZHAR\n";
    cout <<"NIM  : F1B019033\n";

	int i;
	char nama[6]={'A','Z','H','A','R','\0'};
	char nama2[6]="AZHAR";
	cout<<"Nama per karakter = ";
	for(i=0;i<=5;i++)
	{
		cout<<nama[i];
		
	}
	cout<<endl;
	cout<<"Nama = "<<nama2<<endl<<endl;
	return 0;
}
