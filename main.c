//SAYI TAHM�N OYUNU


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>



int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	int islem, hak, sayi, tahmin, oyuna;
	
	anatekrar:
	
	printf("\t*****SAYI TAHM�N OYUNU*****\n\n");
	
	tekrar:
	printf("ZORLUK MODUNU SE��N�Z=\n\n");
	printf("1-->\tKOLAY\n");
	printf("2-->\tORTA\n");
	printf("3-->\tZOR\n");
	printf("--->");
	scanf("%d", &islem);
	printf("\n\n");
	switch(islem)
	{
		case 1 : goto kolay; break;
		
		case 2 : goto orta; break;
		
		case 3 : goto zor; break;
		
		default : printf("YANLI� SE��M YAPTINIZ, TEKRAR DENEY�N�Z.\n\n"); goto tekrar; break;
	}
	
	
	kolay:
		printf("SAYILAR 1-10[DAH�L] ARASINDADIR.\n\n\n");
		hak = 3;
		srand(time(NULL));
		srand(time(NULL)); 
		sayi = rand()%10 + 1;
		kalan1:
		printf("KALAN HAKKINIZ\t%d\n\n", hak);
		
		if(hak == 0)
		{
			goto kaybet;
		}
		else
		{
			yanlis1:
			printf("TAHM�N�N�Z� G�R�N�Z-->");
			scanf("%d", &tahmin);
			printf("\n");
			if(tahmin < 1 || tahmin > 10)
			{
				printf("ARALIK DI�I DE�ER G�RD�N�Z.TEKRAR DENEY�N�Z.\n\n");
				goto yanlis1;
			}
			else
			{
				if(tahmin == sayi)
				{
					goto kazan;
				}
				else
				{
					if(sayi > tahmin)
					{
						printf("TAHM�N�N�Z SAYIDAN K���KT�R.\n");
						printf("TEKRAR DENEY�N�Z.\n\n");
						hak--;
						goto kalan1;
					}
					else
					{
						printf("TAHM�N�N�Z SAYIDAN B�Y�KT�R.\n");
						printf("TEKRAR DENEY�N�Z.\n\n");
						hak--;
						goto kalan1;
					}
				}
			}
		}
			
		
		
		return 0;
	
	orta:
		printf("SAYILAR 1-20[DAH�L] ARASINDADIR.\n\n\n");
		hak=5;
		srand(time(NULL));
		srand(time(NULL)); 
		sayi = rand() % 20 + 1;
		kalan2:
		printf("KALAN HAKKINIZ\t%d\n\n",hak);
		
		if(hak == 0)
		{
			goto kaybet;
		}
		else
		{
			yanlis2:
			printf("TAHM�N�N�Z� G�R�N�Z-->");
			scanf("%d", &tahmin);
			printf("\n");
			
			if(tahmin < 1 || tahmin > 20)
			{
				printf("ARALIK DI�I DE�ER G�RD�N�Z.TEKRAR DENEY�N�Z.\n\n");
				goto yanlis2;
			}
			else
			{
				if(tahmin == sayi)
				{
					goto kazan;
				}
				else
				{
					if(sayi > tahmin)
					{
						printf("TAHM�N�N�Z SAYIDAN K���KT�R.\n");
						printf("TEKRAR DENEY�N�Z.\n\n");
						hak--;
						goto kalan2;
					}
					else
					{
						printf("TAHM�N�N�Z SAYIDAN B�Y�KT�R.\n");
						printf("TEKRAR DENEY�N�Z.\n\n");
						hak--;
						goto kalan2;
					}
				}
			}
		}
		
		return 0;
	
	zor:
		printf("SAYILAR 1-30[DAH�L] ARASINDADIR.\n\n\n");
		hak=7;
		srand(time(NULL));
		srand(time(NULL)); 
		sayi = rand() % 30 + 1;
		kalan3:
		printf("KALAN HAKKINIZ\t%d\n\n",hak);
		
		if(hak == 0)
		{
			goto kaybet;
		}
		else
		{
			if(tahmin < 1 || tahmin > 30)
			{
				printf("ARALIK DI�I DE�ER G�RD�N�Z.TEKRAR DENEY�N�Z.\n\n");
				goto yanlis2;
			}
			else
			{
				if(tahmin == sayi)
				{
					goto kazan;
				}
				else
				{
					if(sayi > tahmin)
					{
						printf("TAHM�N�N�Z SAYIDAN K���KT�R.\n");
						printf("TEKRAR DENEY�N�Z.\n\n");
						hak--;
						goto kalan3;
					}
					else
					{
						printf("TAHM�N�N�Z SAYIDAN B�Y�KT�R.\n");
						printf("TEKRAR DENEY�N�Z.\n\n");
						hak--;
						goto kalan3;
					}
				}
			}
		}
		
		return 0;
	
	kazan:
		printf("<---\tOYUNU KAZANDINIZ TEBR�KLER.\t--->\n");
		printf("TEKRAR OYNAMAK �STER M�S�N�Z?\n\n\n");
		printf("1-->EVET\n2-->HAYIR\n");
		scanf("%d", &oyuna);
		
		if(oyuna == 1)
		{
			goto anatekrar;
		}
		else
		{
			goto bitis;
		}
	
	kaybet:
		printf("<---\tKAYBETT�N�Z.\t--->\n");
		printf("B�LG�SAYARIN TUTTU�U SAYI= %d\n\n\n", sayi);
		printf("TEKRAR OYNAMAK �STER M�S�N�Z?\n");
		printf("1-->EVET\n2-->HAYIR\n");
		scanf("%d", &oyuna);
		
		if(oyuna == 1)
		{
			printf("\n");
			goto anatekrar;
		}
		else
		{
			printf("\n");
			goto bitis;
		}
	
	
	
	
	
	bitis:
		printf("<---\tOYUNU OYNADI�INIZ ���N TE�EKK�RLER.\t--->"); return 0;
	
	getchar();
	return 0;
}
