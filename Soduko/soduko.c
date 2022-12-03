#include <stdio.h>


int fonction_li_tverifi_les_lignes_cols_distincts(int M[][9]/*fel matrice ki tpasseha fl fonction lezem twarri ll fonction longueur maximale t3 les colonnes*/)
{
	int i,j,v,dl = 0,dc = 0;
	//dl : nombres distincts dans chaque ligne
	//dc : nombres distincts dans chaque col
	
	for (v = 1;v<=9; v++) {
			
	for (i = 0; i<9 ; i++) {
		for (j = 0; j<9; j++)
		{
			if (M[i][j] == v)
			{
				dl++;
			}
			if (M[j][i] == v)
			{
				dc++;
			}	
		
		}
	
	}

}
	if (dl == 81 && dc == 81) {
		//lezemhom ykounou_81 5ater kol ra9m lezem nalgouh_9 marrat fl matrice wa na7na 3anna_9 ar9am ya3ni lezem lar9am lkol yet3awdou_81 marra
	
	return 1;
	}
	return 0;
}
							 

int fonction_li_tverifi_existance_t3_nombre_fi_region(int v, int M[][9], int debut_ligne, int fin_ligne, int debut_col, int fin_col)
{
	int i,j;

	for (i = debut_ligne; i<fin_ligne; i++) {
		for (j = debut_col; j<fin_col; j++) {
			if (M[i][j] == v)
				return 1; //return ta3ml break ll fonction bkolha ya3ni c bon nwa9rfou l fonction ken lgineh nombre		
		}
	
	}

	return 0; //ken malgineshou awka zero


}







int main () {

	int M[9][9],i,j,e,v;


	//Remplissage t3 l matrice
	
	for (i = 0; i<9 ; ++i) {
		for (j = 0; j<9 ; ++j) {
			printf("M[%d,%d] = ",i,j);
			scanf("%i",&M[i][j]);
		}
	}
	


	if (fonction_li_tverifi_les_lignes_cols_distincts(M) == 1)
	{
	

		for (v = 1; v<=9; v++) {
			e = 0;    //e howa 3dad_lmarrat li yabda v mawjoud f chaque region lezmou ykoun_9 fi kol operation fl boucle v
			for (i = 0; i<8 ; i+=3) {
				for (j = 0;j<8;j+=3) {
					if (fonction_li_tverifi_existance_t3_nombre_fi_region(v,M,i,i+3,j,j+3) == 1) 
					{
						e++;
					}
				
				}
			
			}
			if (e!=9)
			{
				printf("Verifier region");
				break;
			}
		}

		if (e == 9) 
		{
			printf("Soduko");
		}

	}else {
		printf("Probleme dans lignes et colonnes");
	}


	return 0;

}
