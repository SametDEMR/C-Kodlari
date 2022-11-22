#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define Maksimum(s1,s2) (s1>s2) ? s1 : s2
#define Minimum(s1,s2) (s2>s1) ? s1 : s2

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	
	int a, b, c, d, buyuk, f, kucuk, devam;
	
	printf("<---ÜÇGEN EÞÝTSÝZLÝÐÝ--->\n");
	tekrar:
	printf("ÜÇGENÝN 1.KENARINI GÝRÝNÝZ --> ");
	scanf("%d", &a);
	printf("\n");
	
	printf("ÜÇGENÝN 2. KENARINI GÝRÝNÝZ --> ");
	scanf("%d", &b);
	printf("\n");
	
	printf("ÜÇGENÝN 3. KENARINI GÝRÝNÝZ --> ");
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
			printf("\tGÝRÝLEN DEÐERLER BÝR ÜÇGEN OLUÞTURABÝLÝR.");
			goto devametmek;
		}
		else
		{
			printf("\tGÝRÝLEN DEÐERLER BÝR ÜÇGEN OLUÞTURAMAZ.");
			goto devametmek;
		}
	}
	else
	{
		printf("\tGÝRÝLEN DEÐERLER BÝR ÜÇGEN OLUÞTURAMAZ.");
		goto devametmek;
	}
	
	devametmek:
	printf("\n\n\t\tDEVAM ETMEK ÝSTER MÝSÝNÝZ?\n1--->EVET\n2--->HAYIR\n----> ");
	scanf("%d", &devam);
	if(devam == 1)
	{
		goto tekrar;
	}
	else
	{
		printf("\n\n\t<---UYGULAMAMI KULLANDIÐINIZ ÝÇÝN TEÞEKKÜR EDERÝM--->");
	}
	
	getchar();
	return 0;
}
