#include <stdio.h>



int pt_col(int n, int A[][50], int l, int c) 
{
	int maxl = n;
	int minl = n,i,j;

	//Marra bsh nfixou ligne wa marra l colonne

	for (i = 0; i<l ;i++) {
		if (A[i][c]<minl)
		{
			return 0;
		}
	}
	for (j = 0; j<c; j++) {
		if (A[l][j] > maxl)
		{
			return 0;
		}
	}

	return 1;
}



int main () {

	int nl,nc,A[50][50],i,j;

	do {
		printf("Nombres lignes = ");
		scanf("%i",&nl);
	}while (nl<=0 || nl>=50);

	do {
	
		printf("Nombres cols = ");
		scanf("%i",&nc);
	
	}while (nc<=0 || nc>=50);



	for (i = 0;i<nl;i++)
	{
		for (j = 0;j<nc; j++) {
			printf("M[%d,%d] = ",i,j);
			scanf("%i",&A[i][j]);
		}
	}



	for (i = 0;i<nl;i++)
	{
		for(j = 0; j<nc; j++) {
			if (pt_col(A[i][j],A,i,j) == 1)
			{
				printf("%d de coordonnes %i,%i est un point col",A[i][j],i,j);
			}	
		}
	}
	

}
