#include <stdio.h>
#include <math.h>
#include <locale.h>

#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164

int main()
{
	setlocale(LC_ALL, "Turkish");

	/* Yazılım Gereksinimleri;

	1- Bilinenlerin tanımlanması

	1.1- Alan değerleri; Zayıf Zemin Kazı Alanı(Azz1…Azz101), Yarma Alan(Ay1…Ay101), Dolgu Alan(Ad1….Ad101)

	1.2- Mesafeler; Kesitler arası mesafeler (S1….S101)

	2- Bilinmeyenlerin Hesaplanması

	2.1- Hacim Hesabı; Zayıf Zemin Hacim(Vzz1..Vzz101), Yarma Hacim(Vy1…Vy101), Dolgu Hacim(Vd1…Vd101)

	                     * Vzz(n)=(Azz(n)+Azz(n+1))/2
	                     * Vy(n)=(Ay(n)+Ay(n+1))/2
	                     * Vd(n)=(Ad(n)+Ad(n+1))/2
	2.2- Kümülatif Hacim Hesabı; Zayıf Zemin Kümülatif Hacim(KVzz1..KVzz101), Yarma Kümülatif Hacim(KVy1…KVy101), Dolgu Kümülatif Hacim(KVd1…KVd101)

	                      * KVzz(n)=(Kvzz(n-1)+Vzz(n))
	                      * KVy(n)=(Kvy(n-1)+Vy(n))
	                      * KVd(n)=(Kvd(n-1)+Vd(n))
	2.3- Brükner Değeri Hesabı; Brükner değeri (brk1…brk101)

	                      * brk(n)=(KVy(n)-KVd(n)) */

	return 0;
}
