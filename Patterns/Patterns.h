//C-Storm, an extensive library for C.
//This header file is a part of C-Storm project.
#include <stdio.h>
void getHeart(){
	int row=19, ptr, col;
	for(col=1;col<=13;col++){
		if(col>=1 && col<=4){
			for(ptr=1;ptr<=row;ptr++){
				if((ptr>=(3-(col-1)) && ptr<=(7+(col-1))) || (ptr>=(13-(col-1)) && ptr<=(17+(col-1)))){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
		}
		else{
			for(ptr=1;ptr<=row;ptr++){
				if(ptr<=(col-4) || ptr>(row-(col-4))){
						printf(" ");
						}
				else{
						printf("*");
					}
				}
			}
		printf("\n");
	}
}

//******************************************************************************

void getHollowPyramid(int base){
	int countX, countY, mid;

	mid = base/2 +1;
	for(countY=1;countY<=mid;countY++){
		for(countX=1;countX<=base;countX++){
			if(countY == mid){
				printf("*");
			}
			else if(countX == (mid-(countY-1)) || countX == (mid+(countY-1))){
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}

//******************************************************************************

void getPyramid(int limit) {
	int line_control, ptr_control, mid_ptr;

	mid_ptr=(limit/2) + 1;
	for(line_control=1;line_control<=mid_ptr;line_control++){
		for(ptr_control=1;ptr_control<=limit;ptr_control++){
			if(ptr_control<=(mid_ptr+(line_control-1)) && ptr_control>=(mid_ptr-(line_control-1))){
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}

//******************************************************************************
