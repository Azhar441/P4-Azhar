#include<stdio.h>
#include<string.h>

int x, i;
float p, pp, n;
float a, b, c, d, e;
float k, t, ku, ut, ua;
char temp;

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
printf("\n===PERSENTASE PENILAIAN===\n");
printf("Masukkan persentase kehadiran (%%) : ");
	scanf("%f", &k);
printf("Masukkan persentase tugas     (%%) : ");
	scanf("%f", &t);
printf("Masukkan persentase kuis      (%%) : ");
	scanf("%f", &ku);
printf("Masukkan persentase UTS       (%%) : ");
	scanf("%f", &ut);
printf("Masukkan persentase UAS       (%%) : ");
	scanf("%f", &ua);
	
pp = k + t + ku + ut + ua;

if(pp != 100){
printf ("(**Persentase Penilaian Harus 100**)\n");}
if(pp == 100){
printf ("Persentase Penilaian Sudah :%.0f\n ", pp);}}
while(pp != 100);
printf ("\n----------------------------------\n");

printf ("\nMasukkan Total Pertemuan : ");
	scanf ("%f", &p) ;

printf ("\nMasukkan banyak mahasiswa yang ingin di input : ");
	scanf ("%f", &n);

for(i = 1; i <= n; i++){
printf("Nama 	    : ");
	scanf("%c", &temp);
	scanf("%[^\n]s", &wow[i].nama);
printf("NIM 	    : ");
	scanf("%s", &wow[i].nim);
printf("Kehadiran   : ");
	scanf("%f", &wow[i].absen);
printf("Nilai tugas : ");
	scanf("%f", &wow[i].tugas);
printf("Nilai kuis  : ");
	scanf("%f", &wow[i].kuis);
printf("Nilai UTS   : ");
	scanf("%f", &wow[i].uts);
printf("Nilai UAS   : ");
	scanf("%f", &wow[i].uas);

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

printf ("\n________________________________________________________________________________\n");
printf ("|No.|Nama Mahasiswa| Kehadiran| Tugas | Kuis | UTS | UAS | Nilai Akhir | Grade |\n");
for(i = 1; i <= n; i++){
printf("|%-3i|", i);
printf("%-13s|", wow[i].nama);
printf("%-11.0f|", wow[i].absen);
printf("%-7.0f|", wow[i].tugas);
printf("%-6.0f|", wow[i].kuis);
printf("%-5.0f|", wow[i].uts);
printf("%-5.0f|", wow[i].uas);
printf("%-13f|", wow[i].nilaiakhir);
printf("%-7s|", wow[i].nilai);
printf("\n");
printf ("\n---------------------------------------------------------------------------------\n");}
}

main(){
printf("\nNAMA : AZHAR");
printf("\nNIM  : F1B019033");
printf("\n---PROGRAM MENGHITUNG NILAI AKHIR---\n");
printf("Pilih mata kuliah: \n");
printf("1. Kimia Dasar (3 SKS)\n");
printf("2. Biokimia    (2 SKS)\n");


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
