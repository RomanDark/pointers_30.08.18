// ConsoleApplication8.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

//int *a;


//void add(int a[], int &size, int value) {
//
//	int *tmp = new int[size+1];
//
//	for (int i = 0; i < size; i++) {
//		tmp[i] = a[i];
//	}
//	tmp[size] = value;
//	size += 1;
//
//	if (size != 0)	delete[] a;
//
//	a = tmp;
//	//size++;
//}
//void add(int *&a, int &size, int value) {
//
//	int *tmp = new int[size + 1];
//	for (int i = 0; i < size; i++)
//	{
//		tmp[i] = a[i];
//	}
//	tmp[size] = value;
//	size += 1;
//	delete[] a;
//	a = tmp;
//}
//
//void print(int *a, int size) {
//	for (int i = 0; i < size; i++)
//	{
//		cout << a[i] << endl;
//	}
//}
//
//void search(int *a, int size, int s) {
//	for (int i = 0; i < size; i++)
//	{
//		if (a[i] == s) cout << "takoi element imeetsya v baze!" << endl;
//	}
//}
//
//int main()
//{
//	int *ar;
//	int n = 0;
//	ar = new int[n];
//	int numb, action;
//
//	cout << "(add 1, del 2, search 3  =	";
//	cin >> action;
//
//	switch (action)
//	{
//	case 1: {
//		cin >> numb;
//		add(ar, n, numb);
//	}
//			break;
//	case 2: {
//
//	}
//			break;
//	case 3: {
//
//	}
//			break;
//
//	}
//
//
//	cout << n << endl;
//
//
//	print(ar, n);


	// 16.
	/*int **a;
	int n, m;
	cin >> n >> m;
	srand(time(NULL));
	a = new int* [n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % 12 + 1;
			if (a[i][j] >= 10) sum++;
			cout << a[i][j] << " ";
		}
		cout << "\t pyaterok = " << sum;
		cout << endl;

	}

	for (int i = 0; i < n; i++)
	{
		delete[] a[i];
	}
	delete[] a;*/

//	return 0;
//}

bool asc(int a, int b) {
	return a < b;
}

bool desc(int a, int b) {
	return a > b;
}

//void sort_array(int *a, int n, bool(*f)(int, int))
//{
//	for (int pass = 0; pass < n - 1; pass++)
//	{
//
//		for (int i = 0; i < n - 1; i++)
//		{
//			if (f(a[i], a[i + 1]))
//				swap(a[i], a[i + 1]);
//		}
//	}
//}
void func(int *a, int size) {
	int *p = a;
	for (p = a; p < a + size; p++) {
		if (*p < 0) *p = 0; else *p = -1;
		cout << *p << " ";
	} 
	cout << endl;
}

void func2(int *b, int size) {
	int *p = b;
	for (p = b; p < b + size; p++)
	{
		if (*p % 4 == 0) *p = 999;
		cout << *p << " ";
	}
	cout << endl;
}

bool prost(int a) {

	bool result (true);

	if (a == 2 || a == 3) result = true; else 
		for (int i = 2; i <= (sqrt(a)); i++)
		{
			if (a%i == 0) { result = false; break; }
		}
	return (result && a != 1);
}

int* func3(int *c, int size) {
	
	int s = 0;
	int count = 0;
	for (int i = 0; i < size; ++i) {
		if (!prost(c[i]))
			++count;
	}

	int* B = new int[count];

	int j = 0;
	for (int i = 0; i < size; ++i)
		if (!prost(c[i]))
			B[j++] = c[i];

	for (int j = 0; j < count; j++)
		cout << B[j] << " ";

	return B;
}


int main() {

	srand(time(NULL));

	int a[10] = { -1,8,-3,1,2,-4,5,-6, 9,0 };
	func(a, 10);

	int b[10] = { 4, 8, 16, 17, 18, 19, 20, 21, 22, 23 };
	func2(b, 10);


	int c[10] = { 10,2,3,4,5,6,7,8,9,17 };
	for (int i = 0; i < 10; i++)
	{
		cout << c[i] << " ";
	}
	cout << endl;
	func3(c, 10);
	

	/*for (*p = *c; p < c + 10; p++)
	{
		*p =1 + rand() % 20;
		cout << *p << " ";

	}
	cout << endl;*/




	/*int *a;
	int n = 12;
	a = new int[n];
	bool(*fs[2])(int, int) = { asc, desc };

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 12;
		cout << a[i] << " ";
	}
	sort_array(a, n, asc);
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;*/

	return 0;
}

