#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
	Matrice a(3, 3);
	float v[9] = {2, 1, 0, 2, 4, 3, 5, 2, 9};
	a.assegna(v, 9);

	a.stampa();
	float vect[3] = {3, 4, 3};
	float *res = a.mColonna(vect, 3);
	for (int i = 0; i < 3; i++)
	{
		cout << res[i] << " ";
	}
	cout << endl;
	float *res2 = a.mRiga(vect, 3);
	for (int i = 0; i < 3; i++)
	{
		cout << res2[i] << " ";
	}
	cout << endl;

	return 0;
};
