#include <stdio.h>

main() {

	int x [5];
	printf("Masukkan NIM 1 : ") ;
	scanf("%i",&x[0]) ;
	printf("Masukkan NIM 2 : ") ;
	scanf("%i",&x[1]) ;
	printf("Masukkan NIM 3 : ") ;
	scanf("%i",&x[2]) ;
	printf("Masukkan NIM 4 : ") ;
	scanf("%i",&x[3]) ;
    printf("Masukkan NIM 5 : ");
    scanf("%i",&x[4]);
	
	printf("\n") ;
	printf("NIM ke-1 = %i\n",x[0]) ;
	printf("NIM ke-2 = %i\n",x[1]) ;
	printf("NIM ke-3 = %i\n",x[2]) ;
	printf("NIM ke-4 = %i\n",x[3]) ;
	printf("NIM ke-5 = %i\n",x[4]);

	return 0;
}
