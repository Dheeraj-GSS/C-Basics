/*
OVERVIEW: Write a function which takes two numbers as input and swaps those two numbers.
E.g.: int a = 1, b = 2; after swap(a, b) call value of "a" should be 2 and value of "b" should be 1.

INPUTS:  Two integer pointers a, b.

OUTPUT:  Swap the values of a, b.

ERROR CASES:

NOTES:
*/
#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	*b =*a + *b;
	*a = *b - *a;
	*b = *b - *a;
}

int main()
{
	int a, b;
	cout << "Enter two numbers: " << endl;
	cin >> a >> b;
	cout << "Elements before swapped: " << a << " and " << b << endl;
	swap(&a, &b);
	cout << "Elements after swapped: " << a << " and " << b << endl;
}
