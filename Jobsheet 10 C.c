#include<stdio.h>

int main(){ 
int i, j, matriks[100][100], transpose[100][100]; 

printf("Nama : Azhar");
printf("\nNIM : F1B019033");


for(i = 0; i< 3; i++)
{for(j = 0; j < 3; j++)
{printf("\nMasukanNilaiMatriks [%d][%d] : ", i+1, j+1);
scanf("%d", &matriks[i][j]);}}

printf("\nMatriks\n"); 
for (i = 0; i< 3; i++)
{for(j = 0; j < 3; j++)
{printf("%5d", matriks[i][j]);} 
printf("\n");} 

}
