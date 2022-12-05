#include <stdio.h>



int gan (int M[][10], int n, int x)
{
	int i,j,l = 1, c = 1;

	for (i = 0; i<n ; i++)
	{
		for (j = 0 ; j<n-1 ; j++)
		{
			if (M[i][j] == x && M[i][j+1] == M[i][j])
			{
				l = l+1;
				if (l == 4)
					return 1;
			}else 
			{
				l = 1;
			}
	}
	}

	for (i = 0; i<n ; i++)
	{
		for (j = 0; j<n-1 ; j++) {
			if (M[j][i] == x && M[j+1][i] == M[j][i])
			{
				c = c+1;
				if (c == 4)
					return 1;
				
			}else
				c = 1;
		}
	}


	return 0;
}







void Gangnat(int M[][10], int n)
{
	if (gan(M,n,1) == 1 && gan(M,n,2) == 1)
		{
			printf("Dra1");
		}else if (gan(M,n,1) == 1)
		{
			printf("Player 1 Winner !!");
		}else if (gan (M,n,2) == 1)
		{
			printf("Player 2 Winner !!");
		}else 
		{
			printf("Draw");
		}


}




int main () {

	int M[10][10],n,i,j;

	do 
	{
		printf("n = ");
		scanf("%i",&n);
	}while (n<4 || n>10);



	for (i = 0; i<n ; i++) {
		for (j = 0; j<n ; j++) {
			do {
				printf("M[%d,%d] = ",i,j);
				scanf("%i",&M[i][j]);
			}while (M[i][j] != 1 && M[i][j] != 0 && M[i][j] != 2);

					
		}
	
	}

	


	
	Gangnat(M,n);

	return 0;	

}
