#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("input.txt");
ofstream fout("output.txt");


int main() {

	
	int min, max, i = 0, o;
	int A[10] = {};
	max = A[0];
	min = A[0];
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
	fout << o<<endl;
	return 0;
}
