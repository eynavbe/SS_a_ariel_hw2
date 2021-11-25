#include <stdio.h>
#include "my_mat.h"
typedef int bool;
#define True 1
#define False 0
int main()
{
    char a;
    int i;
    int j;
    scanf("%c", &a);
    int matrix[10][10];
    while (a != 'D')
    {
        if (a == 'A')
        {
            for(int i = 0; i < 10; i++) 
            {
                for(int j = 0; j < 10; j++) 
                {
                    scanf("%d", &matrix[i][j]);
                }
            }
            shortestRoute(matrix);
        }
        if (a == 'B')
        {
            scanf("%d %d", &i, &j);
            if (ifTrajectoryFromItoJ(i,j,matrix) == False)
            {
                printf("False\n");
            }else{
                printf("True\n");

            }
        }
        if (a == 'C')
        {
            scanf("%d %d", &i, &j);
            printf("%d\n",shortestRouteFromItoJ(i,j,matrix));
        }
        scanf("%c", &a);
    }
}
