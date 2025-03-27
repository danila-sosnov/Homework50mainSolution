#include "util.h"


int main()
{
	int n;
	int m;
	int** matrix;

	cout << "Input size of matrix (n and m): ";
	cin >> n >> m;

	matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	init(matrix, n, m, 1, 9);

	cout << "Matrix: \n" << convert(matrix, n, m) << endl;

	int lastMinI;
	int lastMinJ;
	int localMin = get_last_local_min(matrix, n, m, &lastMinI, &lastMinJ);

	cout << "Last local minimum is " << localMin
		<< " with coordinates [" << lastMinI << ";" << lastMinJ << "]" << endl;





	return 0;

}