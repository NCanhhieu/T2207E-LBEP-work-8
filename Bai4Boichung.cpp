#include <stdio.h>
using namespace std;
int BoiChung(int a, int b){
	int BCNN;
	int BCLN = a*b;
    for (int i = a; i <= BCLN; i++ ) {
	
	if ( i%a == 0 && i%b == 0) {
		     BCNN = i;
		     break;
		 } 
	}
	return BCNN;	
	}
int main () {
	printf(" nhap a: ");
	int a;
	scanf("%d", &a);
	printf(" nhap b: ");
	int b;
	scanf("%d", &b);
    int T;
    T = BoiChung(a,b);
	printf (" Boi chung nho nhat la = %d \n", T);
	return 0;
}
