#include "util.h"



bool is_local_min(int** matrix,int n, int m, int i, int j)
{
		
			if (i > 0 && matrix[i - 1][j] <= matrix[i][j])
			{
				return false;
			}
			if (i < n - 1 && matrix[i + 1][j] < matrix[i][j])
			{
				return false;
			}
			if (j > 0 && matrix[i][j - 1] <= matrix[i][j])
			{
				return false;
			}
			if (j < m - 1 && matrix[i][j + 1] < matrix[i][j])
			{
				return false;
			}

	
	return true;
}

int get_last_local_min(int** matrix, int n, int m, int* lastMinI,int* lastMinJ)
{
	int lastLocalMin = matrix[0][0];
	*lastMinI = 0;
	*lastMinJ = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (is_local_min(matrix, n, m,i,j))
			{
				lastLocalMin = matrix[i][j];
				*lastMinI = i + 1;
				*lastMinJ = j + 1;
			}
		}
	}
	return lastLocalMin;
}