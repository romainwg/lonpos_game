#include <stdio.h>
#include <stdlib.h>

#include "object.h"

int main()
{
	
	printf("hello world - lonpos\n");
	printf("# # # #\n");
	printf(" # # # #\n\n\n");
	
	int x = 0;
	int y = 0;
	
	//matrice de grandeur matX+mapX peut contenir l'un ou l'autre
	int** matriceTemp = NULL;
	
	matriceTemp = malloc((mapX+matX)*sizeof(int*));
	for(x=0;x<mapX+matX;x++){
		*(matriceTemp + x) = malloc((mapY+matY)*sizeof(int));
	}
	
	// printf("%d\n", matriceTemp[0][1]);
	// printf("%d", *(*(matriceTemp)+1));
	for(x=0;x<mapX;x++){
		for(y=0;y<mapY;y++){
			matriceTemp[x][y] = 0;
		}
	}
	printf("\n-p1 : %p-\n", matriceTemp);
	printf("\n-p2 : %p-\n", &matriceTemp);
	ecritureMapOne(&matriceTemp);
	
	map* mapOne;
	
	mapOne = createMap(matriceTemp);
	
	viewMap(*mapOne);
	
    return 0;
}
