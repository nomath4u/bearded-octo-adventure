/****************************************************
 ** Name: Unnamed                            
 ** Author: Christopher Harper               
 ** Date of Last Update: 9/10/12             
 ****************************************************/

#include <stdio.h>
#include <stdbool.h>
#define TITLE "Untitled"

bool displayTitleScreen();


int main(){
	displayTitleScreen();
	return 0;
}

bool displayTitleScreen(){
	int titleselection;
	bool again;
	bool validselection = false;

	printf("Welcome to ");
	printf(TITLE);
	printf("\n \n");
	printf("1. New Game \n");
	printf("2. Exit\n \n");
	scanf("%d", &titleselection);

	while(!validselection){
		if(titleselection == 1){
			again = true;
			validselection = true;
		}

		else if(titleselection == 2){
			again = false;
			validselection = true;
		}
		else{
			printf("Invalid selection \n");
		}
	}
}
