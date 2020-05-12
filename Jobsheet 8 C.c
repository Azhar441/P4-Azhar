#include <stdio.h>
int main()
{
	printf ("\nNAMA : AZHAR");
printf ("\nNIM  : F1B019033");

	int x[10],i;
	for(i=0;i<10;i++)
	{
		printf("\nmasukannilai %i : ",i+1);
		scanf("%i",&x[i]);
	}
	printf("\n");
	for(i=0;i<10;i++)
	{
	printf("nilaike %i = %i\n",i+1,x[i]);
	}
	printf("\n");
	return 0;
}
