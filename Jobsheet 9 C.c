#include <stdio.h>
int main()
{
	printf ("\nNAMA : AZHAR");
    printf ("\nNIM  : F1B019033");

	int i;
	char nama[6]={'A','Z','H','A','R'};
	char nama2[6]="AZHAR";
	printf("\nNama per karakter = ");
	for(i=0;i<=5;i++)
	{
		printf("%c",nama[i]);
		
	}
	printf("\n");
	printf("Nama = %s\n\n",nama2);
	return 0;
}
