#include <stdio.h>

int Chuvi(int a, int b, int c) {
	int P = 0;
	P = a + b + c;
	return P;
}

bool kiemtra ( int a, int b, int c) {
	return (a+b)>c && (a+c) > b && (b+c) > a;
}

int main () {
	printf (" nhap 3 canh cua tam giac a, b, c: \n");
	int x,y,z;
	do {
		scanf("%d",&x);
		scanf("%d",&y);
		scanf("%d",&z);
		if ( x <=0 || y <=0 || z <= 0) { printf (" nhap lai so duong \n");
		}
	} while ( x <=0 || y <=0 || z <= 0);
	int P=0;
	if (kiemtra(x,y,z)) {
		P = Chuvi(x,y,z);
		printf( " chuvi la %d", P);
	} else {
		printf (" khong phai 3 canh cua tam giac");
	}
	return 0;
}
