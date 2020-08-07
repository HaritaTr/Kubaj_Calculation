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
	double Vzz1, Vy1, Vd1, Vzz2, Vy2, Vd2, Vzz3, Vy3, Vd3, Vzz4, Vy4, Vd4, Vzz5, Vy5, Vd5, Vzz6, Vy6, Vd6, Vzz7, Vy7, Vd7, Vzz8, Vy8, Vd8, Vzz9, Vy9, Vd9, Vzz10, Vy10, Vd10, Vzz11, Vy11, Vd11, Vzz12, Vy12, Vd12, Vzz13, Vy13, Vd13;
	double KVzz1, KVy1, KVd1, KVzz2, KVy2, KVd2, KVzz3, KVy3, KVd3, KVzz4, KVy4, KVd4, KVzz5, KVy5, KVd5, KVzz6, KVy6, KVd6, KVzz7, KVy7, KVd7, KVzz8, KVy8, KVd8, KVzz9, KVy9, KVd9, KVzz10, KVy10, KVd10, KVzz11, KVy11, KVd11, KVzz12, KVy12, KVd12, KVzz13, KVy13, KVd13;
	double brk1, brk2, brk3, brk4, brk5, brk6, brk7, brk8, brk9, brk10, brk11, brk12, brk13;


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
	printf("\n\t=== Hacim: === \n");
	/* Hacim hesabı; zayıf zemin hacim (Vzz1..Vzz101), yarma hacim (Vy1…Vy101), dolgu hacim (Vd1…Vd101)
	                    * Vzz(n) = (Azz(n) + Azz(n+1)) / 2
	                    * Vy(n) = (Ay(n) + Ay(n+1)) / 2
	                    * Vd(n) = (Ad(n) + Ad(n+1)) / 2 */
	Vzz1 = (Azz1 + Azz2) / 2;
	Vy1 = (Ay1 + Ay2) / 2;
	Vd1 = (Ad1 + Ad2) / 2;
	printf("Zayıf zemin Vzz1: %f \tYarma Vy1: %f \tDolgu Vd1: %f\n", Vzz1, Vy1, Vd1);
	Vzz2 = (Azz2 + Azz3) / 2;
	Vy2 = (Ay2 + Ay3) / 2;
	Vd2 = (Ad2 + Ad3) / 2;
	printf("Zayıf zemin Vzz2: %f \tYarma Vy2: %f \tDolgu Vd2: %f\n", Vzz2, Vy2, Vd2);
	Vzz3 = (Azz3 + Azz4) / 2;
	Vy3 = (Ay3 + Ay4) / 2;
	Vd3 = (Ad3 + Ad4) / 2;
	printf("Zayıf zemin Vzz3: %f \tYarma Vy3: %f \tDolgu Vd3: %f\n", Vzz3, Vy3, Vd3);
	Vzz4 = (Azz4 + Azz5) / 2;
	Vy4 = (Ay4 + Ay5) / 2;
	Vd4 = (Ad4 + Ad5) / 2;
	printf("Zayıf zemin Vzz4: %f \tYarma Vy4: %f \tDolgu Vd4: %f\n", Vzz4, Vy4, Vd4);
	Vzz5 = (Azz5 + Azz6) / 2;
	Vy5 = (Ay5 + Ay6) / 2;
	Vd5 = (Ad5 + Ad6) / 2;
	printf("Zayıf zemin Vzz5: %f \tYarma Vy5: %f \tDolgu Vd5: %f\n", Vzz5, Vy5, Vd5);
	Vzz6 = (Azz6 + Azz7) / 2;
	Vy6 = (Ay6 + Ay7) / 2;
	Vd6 = (Ad6 + Ad7) / 2;
	printf("Zayıf zemin Vzz6: %f \tYarma Vy6: %f \tDolgu Vd6: %f\n", Vzz6, Vy6, Vd6);
	Vzz7 = (Azz7 + Azz8) / 2;
	Vy7 = (Ay7 + Ay8) / 2;
	Vd7 = (Ad7 + Ad8) / 2;
	printf("Zayıf zemin Vzz7: %f \tYarma Vy7: %f \tDolgu Vd7: %f\n", Vzz7, Vy7, Vd7);
	Vzz8 = (Azz8 + Azz9) / 2;
	Vy8 = (Ay8 + Ay9) / 2;
	Vd8 = (Ad8 + Ad9) / 2;
	printf("Zayıf zemin Vzz8: %f \tYarma Vy8: %f \tDolgu Vd8: %f\n", Vzz8, Vy8, Vd8);
	Vzz9 = (Azz9 + Azz10) / 2;
	Vy9 = (Ay9 + Ay10) / 2;
	Vd9 = (Ad9 + Ad10) / 2;
	printf("Zayıf zemin Vzz9: %f \tYarma Vy9: %f \tDolgu Vd9: %f\n", Vzz9, Vy9, Vd9);
	Vzz10 = (Azz10 + Azz11) / 2;
	Vy10 = (Ay10 + Ay11) / 2;
	Vd10 = (Ad10 + Ad11) / 2;
	printf("Zayıf zemin Vzz10: %f \tYarma Vy10: %f \tDolgu Vd10: %f\n", Vzz10, Vy10, Vd10);
	Vzz11 = (Azz11 + Azz12) / 2;
	Vy11 = (Ay11 + Ay12) / 2;
	Vd11 = (Ad11 + Ad12) / 2;
	printf("Zayıf zemin Vzz11: %f \tYarma Vy11: %f \tDolgu Vd11: %f\n", Vzz11, Vy11, Vd11);
	Vzz12 = (Azz12 + Azz13) / 2;
	Vy12 = (Ay12 + Ay13) / 2;
	Vd12 = (Ad12 + Ad13) / 2;
	printf("Zayıf zemin Vzz12: %f \tYarma Vy12: %f \tDolgu Vd12: %f\n", Vzz12, Vy12, Vd12);
	Vzz13 = (Azz13 + Azz1) / 2;
	Vy13 = (Ay13 + Ay1) / 2;
	Vd13 = (Ad13 + Ad1) / 2;
	printf("Zayıf zemin Vzz13: %f \tYarma Vy13: %f \tDolgu Vd13: %f\n", Vzz13, Vy13, Vd13);

	printf("\n\t=== Kümülatif hacim: === \n");
	/* Kümülatif hacim hesabı; zayıf zemin kümülatif hacim (KVzz1..KVzz101), yarma kümülatif hacim (KVy1…KVy101), dolgu kümülatif hacim (KVd1…KVd101)
	                    * KVzz(n) = (Kvzz(n - 1) + Vzz(n))
	                    * KVy(n) = (Kvy(n - 1) + Vy(n))
	                    * KVd(n) = (Kvd(n - 1) + Vd(n)) */
	KVzz1 = (S13 + Vzz1);
	KVy1 = (S13 + Vy1);
	KVd1 = (S13 + Vd1);
	printf("Zayıf zemin KVzz1: %f \tYarma KVy1: %f \tDolgu KVd1: %f\n", KVzz1, KVy1, KVd1);
	KVzz2 = (S12 + Vzz2);
	KVy2 = (S12 + Vy2);
	KVd2 = (S12 + Vd2);
	printf("Zayıf zemin KVzz2: %f \tYarma KVy2: %f \tDolgu KVd2: %f\n", KVzz2, KVy2, KVd2);
	KVzz3 = (S11 + Vzz3);
	KVy3 = (S11 + Vy3);
	KVd3 = (S11 + Vd3);
	printf("Zayıf zemin KVzz3: %f \tYarma KVy3: %f \tDolgu KVd3: %f\n", KVzz3, KVy3, KVd3);
	KVzz4 = (S10 + Vzz4);
	KVy4 = (S10 + Vy4);
	KVd4 = (S10 + Vd4);
	printf("Zayıf zemin KVzz4: %f \tYarma KVy4: %f \tDolgu KVd4: %f\n", KVzz4, KVy4, KVd4);
	KVzz5 = (S9 + Vzz5);
	KVy5 = (S9 + Vy5);
	KVd5 = (S9 + Vd5);
	printf("Zayıf zemin KVzz5: %f \tYarma KVy5: %f \tDolgu KVd5: %f\n", KVzz5, KVy5, KVd5);
	KVzz6 = (S8 + Vzz6);
	KVy6 = (S8 + Vy6);
	KVd6 = (S8 + Vd6);
	printf("Zayıf zemin KVzz6: %f \tYarma KVy6: %f \tDolgu KVd6: %f\n", KVzz6, KVy6, KVd6);
	KVzz7 = (S7 + Vzz7);
	KVy7 = (S7 + Vy7);
	KVd7 = (S7 + Vd7);
	printf("Zayıf zemin KVzz7: %f \tYarma KVy7: %f \tDolgu KVd7: %f\n", KVzz7, KVy7, KVd7);
	KVzz8 = (S6 + Vzz8);
	KVy8 = (S6 + Vy8);
	KVd8 = (S6 + Vd8);
	printf("Zayıf zemin KVzz8: %f \tYarma KVy8: %f \tDolgu KVd8: %f\n", KVzz8, KVy8, KVd8);
	KVzz9 = (S5 + Vzz9);
	KVy9 = (S5 + Vy9);
	KVd9 = (S5 + Vd9);
	printf("Zayıf zemin KVzz9: %f \tYarma KVy9: %f \tDolgu KVd9: %f\n", KVzz9, KVy9, KVd9);
	KVzz10 = (S4 + Vzz10);
	KVy10 = (S4 + Vy10);
	KVd10 = (S4 + Vd10);
	printf("Zayıf zemin KVzz10: %f \tYarma KVy10: %f \tDolgu KVd10: %f\n", KVzz10, KVy10, KVd10);
	KVzz11 = (S3 + Vzz11);
	KVy11 = (S3 + Vy11);
	KVd11 = (S3 + Vd11);
	printf("Zayıf zemin KVzz11: %f \tYarma KVy11: %f \tDolgu KVd11: %f\n", KVzz11, KVy11, KVd11);
	KVzz12 = (S2 + Vzz12);
	KVy12 = (S2 + Vy12);
	KVd12 = (S2 + Vd12);
	printf("Zayıf zemin KVzz12: %f \tYarma KVy12: %f \tDolgu KVd12: %f\n", KVzz12, KVy12, KVd12);
	KVzz13 = (S1 + Vzz13);
	KVy13 = (S1 + Vy13);
	KVd13 = (S1 + Vd13);
	printf("Zayıf zemin KVzz13: %f \tYarma KVy13: %f \tDolgu KVd13: %f\n", KVzz13, KVy13, KVd13);

	printf("\n\t=== Brükner değeri: === \n");
	/* Brükner değeri hesabı; brükner değeri (brk1…brk101)
	                    * brk(n) = (KVy(n) - KVd(n)) */
	brk1 = (KVy1 - KVd1);
	printf("Brükner brk1 değeri: %f\n", brk1);
	brk2 = (KVy2 - KVd2);
	printf("Brükner brk2 değeri: %f\n", brk2);
	brk3 = (KVy3 - KVd3);
	printf("Brükner brk3 değeri: %f\n", brk3);
	brk4 = (KVy4 - KVd4);
	printf("Brükner brk4 değeri: %f\n", brk4);
	brk5 = (KVy5 - KVd5);
	printf("Brükner brk5 değeri: %f\n", brk5);
	brk6 = (KVy6 - KVd6);
	printf("Brükner brk6 değeri: %f\n", brk6);
	brk7 = (KVy7 - KVd7);
	printf("Brükner brk7 değeri: %f\n", brk7);
	brk8 = (KVy8 - KVd8);
	printf("Brükner brk8 değeri: %f\n", brk8);
	brk9 = (KVy9 - KVd9);
	printf("Brükner brk9 değeri: %f\n", brk9);
	brk10 = (KVy10 - KVd10);
	printf("Brükner brk10 değeri: %f\n", brk10);
	brk11 = (KVy11 - KVd11);
	printf("Brükner brk11 değeri: %f\n", brk11);
	brk12 = (KVy12 - KVd12);
	printf("Brükner brk12 değeri: %f\n", brk12);
	brk13 = (KVy13 - KVd13);
	printf("Brükner brk13 değeri: %f\n", brk13);

	return 0;
}
