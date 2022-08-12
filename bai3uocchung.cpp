#include <stdio.h>
using namespace std;
int UocChung(int a, int b){
	int t = 1;
	int UCLN = 0;
	while ( t <= a && t <= b) {
	if ( a%t == 0 && b%t == 0) {
		     UCLN = t;
		 }
		t++;
	}
	return UCLN;
}

int main () {
	printf(" nhap a: ");
	int a;
	scanf("%d", &a);
	printf(" nhap b: ");
	int b;
	scanf("%d", &b);
	
    int T;
    T = UocChung(a,b);
	printf (" Uoc chung lon nhat la = %d \n", T);
	return 0;
}
