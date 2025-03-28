#include "util.h"



bool is_local_max(int** matrix, int n, int m, int i, int j)
{

	if (i > 0 && matrix[i - 1][j] >= matrix[i][j])
	{
		return false;
	}
	if (i < n - 1 && matrix[i + 1][j] > matrix[i][j])
	{
		return false;
	}
	if (j > 0 && matrix[i][j - 1] >= matrix[i][j])
	{
		return false;
	}
	if (j < m - 1 && matrix[i][j + 1] > matrix[i][j])
	{
		return false;
	}


	return true;
}

int get_min_local_max(int** matrix, int n, int m, int* imax, int* jmax)
{
	int minLocalMax = INT_MAX;
	*imax = 0;
	*jmax = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (is_local_max(matrix, n, m, i, j))
			{
				if (matrix[i][j] < minLocalMax)
				{
					minLocalMax = matrix[i][j];
					*imax = i + 1;
					*jmax = j + 1;
				}
			}
		}
	}
	return minLocalMax;
}