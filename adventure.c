/****************************************************
 ** Name: Unnamed                            
 ** Author: Christopher Harper               
 ** Date of Last Update: 9/10/12             
 ****************************************************/

//Libraries
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Constants
#define TITLE "Untitled"

//Prototypes
bool displayTitleScreen();
void beginGame();
void getName();

//Global Constants
char *user;

int main(){
	//Allocate username memory
	user = (char *)malloc(10 * sizeof(char));

	if(displayTitleScreen()){
		beginGame();
	}
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
	return again;
}

void beginGame(){
	getName();
}

void getName(){
	printf("Enter your name (10 character max)\n");
	scanf("%s", user);
	printf("%s \n", user);
}
