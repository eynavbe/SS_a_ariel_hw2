#include "my_mat.h"
#include <stdio.h>
typedef int bool;
#define True 1
#define False 0

bool ifTrajectoryFromItoJ (int i, int j, int matrix[10][10]){
    if (matrix[i][j] > 0)
    {
        return True;
    }
    return False;
}

int shortestRouteFromItoJ (int i, int j, int matrix[10][10]){
    if (matrix[i][j] == 0)
    {
        return -1;
    }
    return matrix[i][j];
}

void shortestRoute(int matrix[10][10]){
    for (int k = 0; k < 10; k++)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = i+1; j < 10; j++)
            {   
                if ((matrix[i][k] > 0 && matrix[k][j] > 0) && ((matrix[i][j] == 0) || (matrix[i][j] > matrix[i][k] + matrix[k][j])))
                    {
                        matrix[i][j] = matrix[i][k] + matrix[k][j];
                        matrix[j][i] = matrix[i][k] + matrix[k][j];
                    }
                for (int r = 0; r < j; r++)
                {
                    if ((matrix[i][r] > 0 && matrix[r][j] > 0) && ((matrix[i][j] == 0) || (matrix[i][j] > matrix[i][r] + matrix[r][j])))
                    {
                        matrix[i][j] = matrix[i][r]+ matrix[r][j];
                        matrix[j][i] = matrix[i][r]+ matrix[r][j];
                    }
                }
            }
        }
    }
}
