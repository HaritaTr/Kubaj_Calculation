#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");

		/// Bilinenleri isteyelim.
	// Alan değerleri; zayıf zemin kazı alanı (Azz1…Azz101), yarma alan (Ay1…Ay101), dolgu alan (Ad1….Ad101)

	// Mesafeler; kesitler arası mesafeler (S1….S101) 


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
