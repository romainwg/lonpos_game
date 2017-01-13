#include "object.h"

piece* createPiece(int** ptrMatricePiece){
	piece* ptrPcs = NULL;
	int x = 0;
	int y = 0;
	
	//malloc pointeur de retour
	ptrPcs = malloc(sizeof(piece));
	
	//malloc matrice piece
	ptrPcs->matrice = malloc(matX*sizeof(int*));
	for(x=0;x<matX;x++){
		*(ptrPcs->matrice + x) = malloc(matY*sizeof(int));
	}
	
	for(x=0;x<matX;x++){
		for(y=0;y<matY;y++){
			(*(*(ptrPcs->matrice + x) + y)) = *(*(ptrMatricePiece + x) + y);
		}
	}
	
	ptrPcs->xmin = 0;
	ptrPcs->xmax = 0;
	ptrPcs->ymin = 0;
	ptrPcs->ymax = 0;
	
	return ptrPcs;
}

object* createObject(piece* ptrPiece){
	object* ptrObject = NULL;
	
	ptrObject = malloc(sizeof(object));
	
	ptrObject->id = 0;
	ptrObject->ssid = 0;
	ptrObject->squelette = ptrPiece;
	
	return ptrObject;
}

map* createMap(int** ptrMatriceMap){
	map* ptrMap = NULL;
	int x = 0;
	int y = 0;
	
	//malloc pointeur de retour
	ptrMap = malloc(sizeof(map));
	
	//malloc matrice map
	ptrMap->matrice = malloc(mapX*sizeof(int*));
	for(x=0;x<mapX;x++){
		*(ptrMap->matrice + x) = malloc(mapY*sizeof(int));
	}
	
	
	
	for(x=0;x<mapX;x++){
		for(y=0;y<mapY;y++){
			
			*(*(ptrMap->matrice + x) + y) = *(*(ptrMatriceMap + x) + y);
			
		}
	}
	
	ptrMap->id = 0;
	
	return ptrMap;
}

int viewPiece(piece pcs){
	int x = 0;
	int y = 0;
	
	
	return 0;
}

int viewMap(map mp){
	int x = 0;
	int y = 0;
	
	printf("\n\n AFFICHAGE CARTE \n\n");
	
	for(x=0;x<mapX;x++){
		for(y=0;y<mapY;y++){
			
			if((mp.matrice)[x][y] == 0){
				printf(" ");
			}else{
				printf("#");
			}
			
			
		}
		printf("\n");
	}
	printf("\n /AFFICHAGE CARTE \n\n");
	return 0;
}

int ecritureMapOne(int*** matriceMap){
	printf("\n-p3 : %p-\n", matriceMap);
	printf("\n-p4 : %p-\n", *matriceMap);
	int x = 0, y = 0, ymax = 0, ymin = 0;
	
	for(x=0;x<mapX;x++){
		
		switch(x){
			case 0:
				ymax = 5;
				break;
			case 1:
				ymax = 6;
				break;
			case 2:
				ymax = 7;
				break;
			case 3:
				ymax = 8;
				break;
			case 4:
				ymax = 8;
				break;
			case 5:
				ymax = 6;
				break;
			case 6:
				ymin = 1;
				ymax = 5;
				break;
			case 7:
				ymin = 2;
				ymax = 4;
				break;
			case 8:
				ymin = 3;
				ymax = 4;
				break;
			default:
				ymin = 0;
				ymax = mapY-1;
		}
		
		for(y=ymin;y<ymax+1;y++){
			(*matriceMap)[x][y] = 1;
		}
		
	}
	
	(*matriceMap)[3][2] = 0;
	
	return 0;
}