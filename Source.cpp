#include <iostream>
#include <fstream>
ifstream fin("input.txt");
ofstream fout("output.txt");
using namespace std;

int main() {

	
	int min, max, i = 0, o;
	int A[10] = {};
	max = A[1];
	min = A[1];
	for (i = 0; i < 10; i++) {

		fin >> A[i];

		if (min > A[i])
		{
			min = A[i];
		};

		if (max < A[i])
		{
			max = A[i];
		};

	}
	o=max-min;
	fout << o;
	return 0;
}
