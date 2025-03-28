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
		
	int imax;
	int jmax;
	int minLocalMax = get_min_local_max(matrix, n, m, &imax, &jmax);

	cout << "The minimum maximum among all local maxima is " << minLocalMax
		<< " with coordinates [" << imax << ";" << jmax << "]" << endl;;
		





	return 0;

}