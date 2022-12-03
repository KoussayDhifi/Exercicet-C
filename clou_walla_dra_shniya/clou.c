#include <stdio.h>

int main () {

	int M[45][45],i,j,s,max,maxc,s1,id_l,id_c;

	for (i = 0; i<3; i++)
	{
		for (j = 0; j<3 ; j++)
		{
			printf("M[%d,%d] = ",i,j);
			scanf("%i",&M[i][j]);
		}


	}


	max = M[0][0];
	s = 0;

	for (i=0;i<3;i++) {
		s = 0;
		for (j = 0;j<3; j++) {
			if (i == 0)
			{
				max = max+M[i][j];
				id_l = i;

			
			}else {
				s+=M[i][j];
			}
		}
		if (s>max) {
			max = s;
			id_l = i;
		}	
	}


	for (j = 0; j<3; j++) {
		s1 = 0;
		for (i = 0; i<3 ; i++) {
			if (j == 0) {
				maxc +=M[i][j];
				id_c = j;
			}else {
				s1+=M[i][j];
			
			}
		
		}
		if (s1<maxc) 
		{
			maxc = s;
			id_c = j;
		}
	}

	printf("Ahawa %d",M[id_l][id_c]);


}
