#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define Maksimum(s1,s2) (s1>s2) ? s1 : s2
#define Minimum(s1,s2) (s2>s1) ? s1 : s2

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	int a, b, c, d, buyuk, f, kucuk, devam;
	
	printf("<---��GEN E��TS�ZL���--->\n");
	tekrar:
	printf("��GEN�N 1.KENARINI G�R�N�Z --> ");
	scanf("%d", &a);
	printf("\n");
	
	printf("��GEN�N 2. KENARINI G�R�N�Z --> ");
	scanf("%d", &b);
	printf("\n");
	
	printf("��GEN�N 3. KENARINI G�R�N�Z --> ");
	scanf("%d", &c);
	printf("\n");
	
	d = Minimum(a, b);
	kucuk = Minimum(c, d);
	
	f = Maksimum(a, b);
	buyuk = Maksimum(c, d);
	
	printf("\n\n");
	
	if(f + kucuk > buyuk)
	{
		if(buyuk > f - kucuk)
		{
			printf("\tG�R�LEN DE�ERLER B�R ��GEN OLU�TURAB�L�R.");
			goto devametmek;
		}
		else
		{
			printf("\tG�R�LEN DE�ERLER B�R ��GEN OLU�TURAMAZ.");
			goto devametmek;
		}
	}
	else
	{
		printf("\tG�R�LEN DE�ERLER B�R ��GEN OLU�TURAMAZ.");
		goto devametmek;
	}
	
	devametmek:
	printf("\n\n\t\tDEVAM ETMEK �STER M�S�N�Z?\n1--->EVET\n2--->HAYIR\n----> ");
	scanf("%d", &devam);
	if(devam == 1)
	{
		goto tekrar;
	}
	else
	{
		printf("\n\n\t<---UYGULAMAMI KULLANDI�INIZ ���N TE�EKK�R EDER�M--->");
	}
	
	getchar();
	return 0;
}
