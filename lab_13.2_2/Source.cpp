#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdarg.h>

#define SUM(a, b) ((a)+(b))
#define RIZ(a, b) ((a)-(b))
#define DOB(a, b) ((a)*(b))
#define DIV(a, b) ((a)/((b)))
#define PRINT_REZ(w) puts (""); \
			printf (#w" = %f\n",(float)w)

using namespace std;

void main() {
	double a, b;
	char com;
	
	do {

	cout << "Enter numbers\n";
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	cout << "Choose operation:\n1)suma\n2)riznica\n3)dobutok\n4)chastka\n0)exit\n";
	com = _getch();
	
		if (com == '1') {
			PRINT_REZ(SUM(a, b));
		}
		else if (com == '2') {
			PRINT_REZ(RIZ(a, b));
		}
		else if (com == '3') {
			PRINT_REZ(DOB(a, b));
		}
		else if (com == '4') {
			PRINT_REZ(DIV(a, b));
		}
		else if (com == '0') {
			break;
		}
		else {
			cout << "NO! Chose from the offered options! It`s quite simple!\n";
		}
	} while (true);
}