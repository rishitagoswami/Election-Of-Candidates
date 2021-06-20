//C PROJECT ON ELECTION OF CANDIDATES
#include<stdio.h>

void castVote();
void checkVotes();
void checkWinner();

    char candidate1[10]= "Alex";
	char candidate2[10]= "Divya";
	char candidate3[10]= "Ashi";
	char candidate4[10]= "Akon";
	char candidate5[10]= "Eric";
	char candidate6[10]= "Jessica";
	int voteCount1=0 , voteCount2=0 , voteCount3=0 , voteCount4=0 , voteCount5=0 , voteCount6=0 ;
	
int main(){
	int choice;
	do{
		printf("\n\n## WELCOME TO THE ELECTION VOTINGS ##");
	printf("\n\n\nChoose what you want to open.");
	printf("\n\n1. Cast a vote.");
	printf("\n2. Check the vote statistics.");
	printf("\n3. Check the elected representative with maximum votes.");
	printf("\n4. Exit.");
	printf("\nChoose one option: ");
	scanf("%d", &choice);
	
	switch (choice){
		case 1: castVote();
		break;
		case 2: checkVotes();
		break;
		case 3: checkWinner();
		break;
		case 4: printf("\nYou exited.");
		break;
		default: printf("\nInvalid input.");
		break;
	}
   }while(choice!=4);
}

void castVote(){
	int candidateNum;
	printf("\n\nCHOOSE YOUR LEADER AMONG THESE CANDIDATES.");
	printf("\nCandidate number 1: %s", candidate1);
	printf("\nCandidate number 2: %s", candidate2);
	printf("\nCandidate number 3: %s", candidate3);
	printf("\nCandidate number 4: %s", candidate4);
	printf("\nCandidate number 5: %s", candidate5);
	printf("\nCandidate number 6: %s", candidate6);
	

	printf("\n\nYou vote for candidate number: ");
	scanf("%d", &candidateNum);
	
	switch(candidateNum){
		case 1: voteCount1++;
			break;
		case 2: voteCount2++;
			break;
		case 3: voteCount3++;
			break;
		case 4: voteCount4++;
			break;
		case 5: voteCount5++;
			break;
		case 6: voteCount6++;
			break;
		default: printf("Invalid input.");
			break;						
	}
	printf("\n\nThanks for voting.");
}

void checkVotes(){
	printf("\n\nTotal number of votes of each candidate: ");
	printf("\n%s: %d", candidate1, voteCount1);
	printf("\n%s: %d", candidate2, voteCount2);
	printf("\n%s: %d", candidate3, voteCount3);
	printf("\n%s: %d", candidate4, voteCount4);
	printf("\n%s: %d", candidate5, voteCount5);
	printf("\n%s: %d", candidate6, voteCount6);
}

void checkWinner(){
	printf("\n\n**THE ELECTED REPRESENTATIVE WITH MAXIMUM VOTES IS:**");
	if(voteCount1>voteCount2 && voteCount1>voteCount3 && voteCount1>voteCount4 && voteCount1>voteCount5 && voteCount1>voteCount6){
		printf("\n%s \nvotes recieved: %d", candidate1, voteCount1);
	}
	else if(voteCount2>voteCount1 && voteCount2>voteCount3 && voteCount2>voteCount4 && voteCount2>voteCount5 && voteCount2>voteCount6){
		printf("\n%s \nvotes recieved: %d", candidate2, voteCount2);
	}
	else if(voteCount3>voteCount1 && voteCount3>voteCount2 && voteCount3>voteCount4 && voteCount3>voteCount5 && voteCount3>voteCount6){
		printf("\n%s \nvotes recieved: %d", candidate3, voteCount3);
	}
	else if(voteCount4>voteCount1 && voteCount4>voteCount2 && voteCount4>voteCount3 && voteCount4>voteCount5 && voteCount4>voteCount6){
		printf("\n%s \nvotes recieved: %d", candidate4, voteCount4);
	}
	else if(voteCount5>voteCount1 && voteCount5>voteCount2 && voteCount5>voteCount3 && voteCount5>voteCount4 && voteCount5>voteCount6){
		printf("\n%s \nvotes recieved: %d", candidate5, voteCount5);
	}
	else if(voteCount6>voteCount1 && voteCount6>voteCount2 && voteCount6>voteCount3 && voteCount6>voteCount4 && voteCount6>voteCount5){
		printf("\n%s \nvotes recieved: %d", candidate6, voteCount6);
	}
	else{
		printf("\nNO WIN SITUATION.");
	}
}
