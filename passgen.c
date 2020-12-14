#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	
	srand(time(NULL)); // Initialization, should only be called once.
	int r1 = rand();   //var for first random number generated
	int r2 = rand();
	char namealias[1000];
	char symb1[] = {'%','$','&'};
	char symb2[] = {'/','=','!'};
	printf("Enter an alias or name:\n");
	scanf("%s",namealias);
	printf("password generated:\n");
	printf("%d")
	
	return 0;
}
