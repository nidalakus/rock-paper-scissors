#include <stdio.h>

int main() {
	
	char player1, player2;
	printf("player1 to enter a choice:\n");
	scanf(" %c", &player1);
	printf("player2 to enter a choice:\n");
	scanf(" %c", &player2);
	
	
	if (player1 == player2){
		
		printf("Draw\n");
	}
	else {
		switch(player1) {
			case 'R': case 'r':
				if (player2 == 'S' || player2 == 's'){
					printf("player1 wins! Rock crushes Scissors.\n");
				}
				else {
					printf("player2 wins! Paper wraps Rock.\n");
				}
				break;
			case 'P': case 'p':
			    if (player2 == 'R' || player2 == 'r'){
			    	printf("player2 wins! Because Paper wraps Rock.\n");
				}	
				else{
			    	printf("player1 wins! Because Scissors cuts Paper.\n");
				}
				break;	
			case 'S': case 's':
			    if (player2 == 'P' || player2 == 'p'){
			    	printf("player1 wins! Because Scissors cuts Paper.\n");
				}	
				else{
			    	printf("player2 wins! Because Rock crushes Scissors.\n");
				}
				break;
			default:
				printf("Invalid choice!");
				break;
			
		}
		
	}
	
	
	
	
	return 0;
	
}
