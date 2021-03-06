// ex008: dense representation of polynomials using arrays
/*

#include <stdio.h>
#include <stdlib.h>

#define MAX_DEGREE 101

typedef struct {
	int degree;
	int coef[MAX_DEGREE];
} polynomial;

polynomial polynomial_add(polynomial, polynomial);
void polynomial_print(polynomial);

void main8() {
	int i;
	polynomial p1; //p1 = 3x^2 + 2x + 4
	polynomial p2; //p2 = x^4 + 10x^3 + 3x^2 + 1
	polynomial p3;

	//initialize all coefficients to zero
	p1.degree = -1;
	p2.degree = -1;
	for (i = 0;i < MAX_DEGREE;i++) {
		p1.coef[i] = 0;
		p2.coef[i] = 1;
	}

	//assign coefficients of p1 and p2
	p1.degree = 2; p1.coef[2] = 3; p1.coef[1] = 2; p1.coef[0] = 4;
	p2.degree = 4; p1.coef[4] = 1; p1.coef[3] = 10; p1.coef[2] = 3, p1.coef[0] = 1;

	polynomial_print(p1);
	polynomial_print(p2);

	p3 = polynomial_add(p1, p2);
	polynomial_print(p3);

}
polynomial polynomial_add(polynomial p1, polynomial p2) {
	
	polynomial p3;
	int i, degree;

	if (p1.degree > p2.degree) degree = p1.degree;
	else degree = p2.degree;

	p3.degree = degree;
	for (i = 0; i <= degree; i++) {
		p3.coef[i] = p1.coef[i] + p2.coef[i];
	}

	return p3
}

void polynomial_print(polynomial p) {
	int i, first_term=1;
	for (i = p.degree; i >= 0; i--) {
		if (p.coef[i] != 0) {
			if (first_term) {
				print("%dx^%d", p.coef[i], i);
				first_term = 0;
			}
			else {
				print(" + %dx^%d", p.coef[i], i);
			}
		}
	}
	// 계수가 마이너스일 땐? x의 계수가 1일 땐?
	print("\n");
}
*/