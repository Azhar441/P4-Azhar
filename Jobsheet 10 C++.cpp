#include<iostream>
using namespace std;

int main(){ 
int i, j, matriks[100][100]; 

cout << "Nama : Azhar" << endl;
cout << "NIM : F1B019033" << endl;


for(i = 0; i < 3; i++)
{for(j = 0; j < 3; j++)
{cout << "Masukan Nilai Matriks [" << i+1 << "][" << j+1 << "] : ";
	cin >> matriks[i][j];}}

cout << "\nMatriks" << endl; 
for (i = 0; i < 3; i++)
{for(j = 0; j < 3; j++)
{cout << matriks[i][j] << " ";} 

cout << endl;} 

}
