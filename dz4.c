#include <stdio.h>

// Task 4, zadanie 5
// Zadaju funkcii k 5 zadaniju
int gcd2(int a, int b);
int lcm2(int x, int y);
int lcm(int x, int y, int z);

// zadaju funkcii k 6 zadaniju
int nod(int a, int b);
void drob(void);


// osnovnaja chast
int main() {
	// Main part of task 5, osnovaja chast 5 zadaija
	int l, m, k;
	printf("Task 5:\n\n");
	printf("In this task we will calculate lcm of 3 numbers\n");
	printf("Please enter the first number:\n");

	scanf_s("%d", &l);
	printf("Please enter the second number:\n");
	scanf_s("%d", &m);
	printf("Please enter the third number:\n");
	scanf_s("%d", &k);

	printf("Lcm of numbers %d, %d, %d is: %d", l, m, k, lcm(l, m, k));

	///////////////////////////////////////////////////////// osnovnaja chast 6 zadanija
	printf("\n\n");
	printf("task 6:\n\n");
	printf("In this tas we will sum to fractors\n\n");
	int a, b, c, d, e, f;

	printf("Please enter numerater for number 1 (cheslitel pervogo chisla):\n");
	scanf_s("%d", &a);
	printf("Please enter denumerater for number 1 (znamentael pervogo chisla):\n");
	scanf_s("%d", &b);
	printf("Please enter numerater for number 2 (cheslitel vtorogo chisla):\n");
	scanf_s("%d", &c);
	printf("Please enter denumerater for number 2 (znamentael vtorogo chisla):\n");
	scanf_s("%d", &d);

	e = (d * a) + (b * c); // counting numinator
	f = (b * d); // counting denoominator

	int p, q;
	drob(e, f, &p, &q);

	printf("The result of %d/%d + %d/%d is  %d/%d", a, b, c, d, p, q);


	return 0;
}






//////////////////////// pomogatelnaja chact 5 zadanija
int gcd2(int a, int b) {

	int g, d;
	if (b > a) {
		d = a;
		a = b;
		b = d;
	}
	while (b) {
		g = a % b;
		a = b;
		b = g;
	}
	return a;
}
int lcm2(int x, int y) {
	int result;

	result = (x * y) / (gcd2(x, y));

	return result;
}
int lcm(int x, int y, int z) {
	int result, trilcm;

	trilcm = lcm2(x, y);

	result = (trilcm * z) / gcd2(trilcm, z);

	return result;
}




///////////////////////////////// Task 6///////////////////////////////////////////////////////////
////////////// Pomogatelnaja chast




// counting gcd of numinator and denuminaor
int nod(int a, int b) {

	int g, d;
	if (b > a) {
		d = a;
		a = b;
		b = d;
	}
	while (b) {
		g = a % b;
		a = b;
		b = g;
	}
	return a;
}

// dividing numinator and denuminator on gcd of theese numbers
void drob(int e, int f, int* q, int* p) {

	*q = e / nod(e, f);
	*p = f / nod(e, f);
}
