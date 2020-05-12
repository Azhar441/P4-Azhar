#include<iostream>
#include<string.h>
using namespace std;

float n, k, t, ku, ut, ua, p, pp;
int i,x;
float a, b, c, d, e;
struct data{
char nama[100];
char nim[100];
float absen;
float tugas;
float kuis;
float uas;
float uts;
float nilaiakhir;
char nilai[100];}

wow[5000];

int wadaw(){
do{
cout <<"\n===PERSENTASE PENILAIAN===\n";
cout <<"Masukkan Persentase Kehadiran (%) : ";
	cin >> k;
cout <<"Masukkan Persentase Tugas     (%) : ";
	cin >> t;
cout <<"Masukkan Persentase Kuis      (%) : ";
	cin >> ku;
cout <<"Masukkan Persentase UTS       (%) : ";
	cin >> ut;
cout <<"Masukkan Persentase UAS       (%) : ";
	cin >> ua;
	
pp = k + t + ku + ut + ua;

if(pp != 100){
cout <<"(**Persentase Penilaian Harus 100**)\n";}
if(pp == 100){
cout <<"Persentase Penilaian Sudah : "<< pp <<"%"<< endl;}}
while(pp != 100);
cout <<"\n----------------------------------\n";

cout <<"\nMasukkan Total Pertemuan : ";
	cin >> p;

cout <<"\nMasukkan banyak mahasiswa yang ingin di input : ";
	cin >> n;

for(i = 1; i <= n; i++){
cout <<"\n"<< i <<". Nama 	: ";
	fflush(stdin); 
	gets(wow[i].nama);
cout <<"   NIM 		: ";
	cin >> wow[i].nim;
cout <<"   Kehadiran    : ";
	cin >> wow[i].absen;
cout <<"   Nilai tugas 	: ";
	cin >> wow[i].tugas;
cout <<"   Nilai kuis   : ";
	cin >> wow[i].kuis;
cout <<"   Nilai UTS 	: ";
	cin >> wow[i].uts;
cout <<"   Nilai UAS 	: ";
	cin >> wow[i].uas;

a = ((wow[i].absen / p) * (k / 100) * 100);
b = ((wow[i].tugas) * (t / 100));
c = ((wow[i].kuis) * (k / 100));
d = ((wow[i].uts) * (ut / 100));
e = ((wow[i].uas) * (ua / 100));

wow[i].nilaiakhir = a+b+c+d;
if(wow[i].nilaiakhir <= 100 && wow[i].nilaiakhir >= 80){
strcpy(wow[i].nilai, "A");}
else if(wow[i].nilaiakhir <= 79 && wow[i].nilaiakhir >= 60){
strcpy(wow[i].nilai, "B+");}
else if(wow[i].nilaiakhir <=59 && wow[i].nilaiakhir >= 55){
strcpy(wow[i].nilai, "B");}
else if(wow[i].nilaiakhir <= 54 && wow[i].nilaiakhir >= 50){
strcpy(wow[i].nilai, "C+");}
else if(wow[i].nilaiakhir <= 49 && wow[i].nilaiakhir >= 45){
strcpy(wow[i].nilai, "C");}
else if(wow[i].nilaiakhir <= 44 && wow[i].nilaiakhir >= 40){
strcpy(wow[i].nilai, "D+");}
else if(wow[i].nilaiakhir <= 39 && wow[i].nilaiakhir >= 35){
strcpy(wow[i].nilai, "D");}
else {strcpy(wow[i].nilai, "E");}}

cout <<"\n________________________________________________________________________________\n";
cout <<"|No.|Nama Mahasiswa| Kehadiran| Tugas | Kuis | UTS | UAS | Nilai Akhir | Grade |\n";
for(i = 1; i <= n; i++){
cout <<"|"<< i <<"  |"<< wow[i].nama <<"\t\t"<< wow[i].absen <<"\t"<< wow[i].tugas <<"\t"<< wow[i].kuis <<"\t"<< wow[i].uts <<"\t"<< wow[i].uas <<"\t"<< wow[i].nilaiakhir <<"\t"<< wow[i].nilai;
cout <<"\n---------------------------------------------------------------------------------\n";}
}

main(){
printf("\nNAMA : AZHAR");
printf("\nNIM  : F1B019033");
printf("\n---PROGRAM MENGHITUNG NILAI AKHIR---\n");
printf("Pilih mata kuliah: \n");
printf("1. Kimia Dasar\n");
printf("2. Biokimia\n");


printf("Pilih mata kuliah: ");
	scanf("%d", &x);
printf("\n----------------------------------\n");
switch(x){

case 1:
wadaw();

break;

case 2:
wadaw();

break;


}


}
