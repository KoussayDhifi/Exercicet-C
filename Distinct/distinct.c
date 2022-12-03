#include <stdio.h>

int exist (int M[][99], int el, int ec,int nc,  int x) 
{
	int i,j;

	for (i = 0; i<=el ; i++ ) {
		
		if (i<el)
		{
			for (j = 0; j<nc; j++) {
				if (M[i][j] == x)
					return 1;
		}
		}else if (i == el)
		{
			for (j = 0; j<ec; j++) {
				if (M[i][j] == x)
					return 1;
			}
		}
	
	}

	return 0;


}



int main () {

	int M[99][99],nl,nc,i,j;
	
	printf("Nombre des lignes = ");
	scanf("%i",&nl);

	printf("Nobres col = ");
	scanf("%i",&nc);

	for (i = 0; i<nl ;i++) {
		for (j = 0; j<nc ;j++) {
		
			do {
			
				printf("M[%d,%d] = ",i,j);
				scanf("%i",&M[i][j]);
			
			}while(exist(M,i,j,nc,M[i][j]) == 1);
		
		}
	
	}
	

	return 0;

}
