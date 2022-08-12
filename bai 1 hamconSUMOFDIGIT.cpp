#include <stdio.h>
using namespace std;
int Sumof(int n) {
	int k = 0;
		while ( n>0) {
			k  += (n%10);
			n/=10;
		}
		return k;
}
int main () {
	printf(" nhap n nguyen duong: ");
	int n;
	do {
	
	scanf("%d", &n);
	if (n <= 0) { printf ("nhap lai\n");
	}
} while (n<=0);
	int d = n;
	if ( n < 10) {
		
		printf ( " tong chu so cua %d la : %d " , d , n);
	} else {
	    while(n >= 10){
			n = Sumof(n);
		} 
		printf ( " tong chu so cua %d la : %d" , d , n);
	}
	return 0;
}
