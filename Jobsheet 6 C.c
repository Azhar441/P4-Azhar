#include<stdio.h>
int main() { 
int matrix[3][3]; 
int transpose[3][3]; 
int i,j; 
printf ("\nNAMA : AZHAR");
printf ("\nNIM  : F1B019033");

for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
{ printf("\nMasukan Nilai Matriks [%d][%d] : ", i+1, j+1);
scanf("%d",&matrix[i][j]);
}
}

for (i=0;i<3;i++) { 
	for (j=0;j<3;j++) {
transpose[j][i] = matrix[i][j]; } } 

printf("\nMatrik A [3x3]\n"); 
for (i=0;i<3;i++) { 
for (j=0;j<3;j++) { 
printf("%5d",matrix[i][j]); 
} printf("\n"); 
} 
 
printf("\nMatrik A Transpose [3x3]\n"); 
for (i=0; i<3; i++) { 
for (j=0; j<3; j++) { 
printf("%5d",transpose[i][j]); 
} 
printf("\n"); 
} 
}

