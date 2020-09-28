#include <stdio.h>
#include <conio.h>

/* Created by Rizky Khapidsyah */

int main() {
	float y, * x1, * x2;
	
	/* Operasi Pemberian Nilai */
	y = 12.34;
	x1 = &y;
	x2 = x1;
	
	printf("Nilai y yang ditunjuk oleh x1 adalah %2.2f di alamat %p\n", y, &y);
	printf("Nilai y yang ditunjuk oleh y2 adalah &2.2f di alamat %p\n", *x2, x2);

	_getch();
	return 0;
}