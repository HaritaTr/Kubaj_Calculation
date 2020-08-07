#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

	double Azz1, Azz2, Azz3, Azz4, Azz5, Azz6, Azz7, Azz8, Azz9, Azz10, Azz11, Azz12, Azz13;
	double Ay1, Ay2, Ay3, Ay4, Ay5, Ay6, Ay7, Ay8, Ay9, Ay10, Ay11, Ay12, Ay13;
	double Ad1, Ad2, Ad3, Ad4, Ad5, Ad6, Ad7, Ad8, Ad9, Ad10, Ad11, Ad12, Ad13;
	double S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12, S13;

		/// Bilinenleri isteyelim.
	// Alan değerleri; zayıf zemin kazı alanı (Azz1…Azz101), yarma alan (Ay1…Ay101), dolgu alan (Ad1….Ad101)
	//Zayıf zemin kazı alanı (Azz1…Azz101):
	printf("Azz1 değerini giriniz: ");
	scanf("%lf", &Azz1);
	printf("Azz2 değerini giriniz: ");
	scanf("%lf", &Azz2);
	printf("Azz3 değerini giriniz: ");
	scanf("%lf", &Azz3);
	printf("Azz4 değerini giriniz: ");
	scanf("%lf", &Azz4);
	printf("Azz5 değerini giriniz: ");
	scanf("%lf", &Azz5);
	printf("Azz6 değerini giriniz: ");
	scanf("%lf", &Azz6);
	printf("Azz7 değerini giriniz: ");
	scanf("%lf", &Azz7);
	printf("Azz8 değerini giriniz: ");
	scanf("%lf", &Azz8);
	printf("Azz9 değerini giriniz: ");
	scanf("%lf", &Azz9);
	printf("Azz10 değerini giriniz: ");
	scanf("%lf", &Azz10);
	printf("Azz11 değerini giriniz: ");
	scanf("%lf", &Azz11);
	printf("Azz12 değerini giriniz: ");
	scanf("%lf", &Azz12);
	printf("Azz13 değerini giriniz: ");
	scanf("%lf", &Azz13);
	//Yarma alan (Ay1…Ay101):
	printf("Ay1 değerini giriniz: ");
	scanf("%lf", &Ay1);
	printf("Ay2 değerini giriniz: ");
	scanf("%lf", &Ay2);
	printf("Ay3 değerini giriniz: ");
	scanf("%lf", &Ay3);
	printf("Ay4 değerini giriniz: ");
	scanf("%lf", &Ay4);
	printf("Ay5 değerini giriniz: ");
	scanf("%lf", &Ay5);
	printf("Ay6 değerini giriniz: ");
	scanf("%lf", &Ay6);
	printf("Ay7 değerini giriniz: ");
	scanf("%lf", &Ay7);
	printf("Ay8 değerini giriniz: ");
	scanf("%lf", &Ay8);
	printf("Ay9 değerini giriniz: ");
	scanf("%lf", &Ay9);
	printf("Ay10 değerini giriniz: ");
	scanf("%lf", &Ay10);
	printf("Ay11 değerini giriniz: ");
	scanf("%lf", &Ay11);
	printf("Ay12 değerini giriniz: ");
	scanf("%lf", &Ay12);
	printf("Ay13 değerini giriniz: ");
	scanf("%lf", &Ay13);
	//Dolgu alan (Ad1….Ad101):
	printf("Ad1 değerini giriniz: ");
	scanf("%lf", &Ad1);
	printf("Ad2 değerini giriniz: ");
	scanf("%lf", &Ad2);
	printf("Ad3 değerini giriniz: ");
	scanf("%lf", &Ad3);
	printf("Ad4 değerini giriniz: ");
	scanf("%lf", &Ad4);
	printf("Ad5 değerini giriniz: ");
	scanf("%lf", &Ad5);
	printf("Ad6 değerini giriniz: ");
	scanf("%lf", &Ad6);
	printf("Ad7 değerini giriniz: ");
	scanf("%lf", &Ad7);
	printf("Ad8 değerini giriniz: ");
	scanf("%lf", &Ad8);
	printf("Ad9 değerini giriniz: ");
	scanf("%lf", &Ad9);
	printf("Ad10 değerini giriniz: ");
	scanf("%lf", &Ad10);
	printf("Ad11 değerini giriniz: ");
	scanf("%lf", &Ad11);
	printf("Ad12 değerini giriniz: ");
	scanf("%lf", &Ad12);
	printf("Ad13 değerini giriniz: ");
	scanf("%lf", &Ad13);
	// Mesafeler; kesitler arası mesafeler (S1….S101)
	printf("S1 değerini giriniz: ");
	scanf("%lf", &S1);
	printf("S2 değerini giriniz: ");
	scanf("%lf", &S2);
	printf("S3 değerini giriniz: ");
	scanf("%lf", &S3);
	printf("S4 değerini giriniz: ");
	scanf("%lf", &S4);
	printf("S5 değerini giriniz: ");
	scanf("%lf", &S5);
	printf("S6 değerini giriniz: ");
	scanf("%lf", &S6);
	printf("S7 değerini giriniz: ");
	scanf("%lf", &S7);
	printf("S8 değerini giriniz: ");
	scanf("%lf", &S8);
	printf("S9 değerini giriniz: ");
	scanf("%lf", &S9);
	printf("S10 değerini giriniz: ");
	scanf("%lf", &S10);
	printf("S11 değerini giriniz: ");
	scanf("%lf", &S11);
	printf("S12 değerini giriniz: ");
	scanf("%lf", &S12);
	printf("S13 değerini giriniz: ");
	scanf("%lf", &S13);


		/// Bilinmeyenlerin hesaplanması.
	printf("\n\t=== Hesap sonuçları! === \n");
	/* Hacim hesabı; zayıf zemin hacim (Vzz1..Vzz101), yarma hacim (Vy1…Vy101), dolgu hacim (Vd1…Vd101)
	                    * Vzz(n) = (Azz(n) + Azz(n+1)) / 2
	                    * Vy(n) = (Ay(n) + Ay(n+1)) / 2
	                    * Vd(n) = (Ad(n) + Ad(n+1)) / 2 */

	/* Kümülatif hacim hesabı; zayıf zemin kümülatif hacim (KVzz1..KVzz101), yarma kümülatif hacim (KVy1…KVy101), dolgu kümülatif hacim (KVd1…KVd101)
	                    * KVzz(n) = (Kvzz(n - 1) + Vzz(n))
	                    * KVy(n) = (Kvy(n - 1) + Vy(n))
	                    * KVd(n) = (Kvd(n - 1) + Vd(n)) */

	/* Brükner değeri hesabı; brükner değeri (brk1…brk101)
	                    * brk(n) = (KVy(n) - KVd(n)) */

	return 0;
}
