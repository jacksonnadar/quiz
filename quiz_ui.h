void quizStart(){
	system("color f0");
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
		printf("Enter Your Name:  ");
		strupr(gets(playername));
		system("cls");
		printf("*****************welcome %s to the quiz game**********************",playername);
		printf("\n\n    Here are some tips before starting the game");
        printf("\n\t >> Questions are selected on random basis.\n");
        printf("\n\t >> You will be given 4 options and you have to press A, B ,C or D \n\t    for the right option.\n");
        printf("\n \t>> No negative marking for wrong answers!\n");
        printf("\n\n\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!\n");
        printf("\n\n\t\tPress any key to continue  to start the game!\n");
        getch();
        system("cls");
}

void quizResult(int time_taken[],char ans[],int question_no){
	int total_r_ans=0,total_w_ans=0,total_t_ans=0,total_time=0,i;
	float average_time=0;
	for(i=0;i<=question_no;i++){
		if(ans[i]=='R'){
			total_r_ans+=1;
		}
		if(ans[i]=='W'){
			total_w_ans+=1;
		}
		if(ans[i]=='T'){
			total_t_ans+=1;
		}
		total_time=total_time+time_taken[i];
	}
	average_time=total_time/question_no;
	printf("\n   RIGHT ANSWERS = %d     WRONG ANSWERS = %d    TIME OUTS = %d\n\n   TIME = %d   AVERAGE TIME = %.2f\n\nOVERVIEW\n\n",total_r_ans,total_w_ans,total_t_ans,total_time,average_time);
	
	for(i=0;i<question_no;i++){
		printf(" %c ",ans[i]);
		if(ans[i]=='R'){
			system("color 20");
//			sleep(0.4);
		}
		if(ans[i]=='W'){
			system("color 40");
//			sleep(0.4);
		}
		if(ans[i]=='T'){
			system("color 60");
//			sleep(0.4);
		}
		system("color f0");
//		sleep(0.2);
	}
	system("color f0");
}

