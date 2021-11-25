typedef int bool;
#define True 1
#define False 0

/*The method gets values i , j and matrix
return "True" if there is a route from i to j. Otherwise, return "False"*/
bool ifTrajectoryFromItoJ (int, int, int[10][10]);

/*The method gets values i , j and matrix
return the shortest route from i to j, if there is no route the program will return -1*/
int shortestRouteFromItoJ (int, int, int[10][10]);

/*The method get matrix
update in matrix the shortest route from i to j*/
void shortestRoute (int[10][10]);