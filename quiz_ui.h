void quizStart(){
	char choice;
	char playername[20];
	float score;
	mainhome:
	printf("\n\t\t\tC PROGRAM QUIZ");
	printf("\n\t-----------------------------------------------");
	
	printf("\n\n\t\t\t   WELCOME\n\t\t\t     TO\n\t\t\t    GAME\n");
	printf("\n\t-----------------------------------------------");
	char S,V,Q;
	printf("\n\n\t\t>Press any key to continue to start the game");
	choice=toupper(getch());

		system("cls");
		printf("Enter Your Name:");
		gets(playername);
		system("cls");
		printf("\t\t*********************welcome %s to the quiz game***************************",playername);
		printf("\n\nHere are some tips before starting the game");
		printf("\n >> There are 10 sets in this quiz game.");
        printf("\n >> Each set contains 10 questions.");
        printf("\n >> Sets are selected on random basis.");
        printf("\n >> Each right answer will be awarded with 10 points!");
        printf("\n >> By this way you can score upto 100 :-) :-):-):-):-):-):-)!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the right option.");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t\t\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n Press any key to continue  to start the game!\n");
        getch();
        system("cls");
}



