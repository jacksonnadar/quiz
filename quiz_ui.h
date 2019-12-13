void quizStart(char playername[]){
	int str_len;
	system("color 1f");
	printf("\n\t\t\t\t\tC PROGRAM QUIZ");
	printf("\n\t\t\t-----------------------------------------------");
	printf("\n\n\t\t\t\t\t   WELCOME\n\n\t\t\t\t\t       TO\n\n\t\t\t\t\t       QUIZ WIZ\n");
	printf("\n\t\t\t-----------------------------------------------\n\n\n\n\n\n");
	printf("\n\n\t\t>Press any key to continue to start the game");
	getch();

		system("cls");
		printf("\n  ENTER YOUR NAME (name should atlest be 4 characters): ");
		do {
			strupr(gets(playername));
			str_len = strlen(playername);
			if (str_len<4){
				printf("\n  NAME IS TO SHORT (enter again) : ");
			}
		}while(str_len<4);
		
		system("cls");
		printf("\n\n\t\t\tWELCOME --%s-- TO QUIZ WIZ\n",playername);
		printf("\n\n\tHere are some tips before starting the game\n");
        printf("\n\t >> Questions are selected on random basis.\n");
        printf("\n\t >> You will be given 4 options and you have to press A, B ,C or D \n\t    for the right option.\n");
        printf("\n\t >> You only have 10 seconds to enter your anser\n");
        printf("\n\n\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!\n");
        printf("\n\n\t\tPress any key to continue  to start the game!\n");
        getch();
        system("cls");
}

void quizResult(int time_taken[],char ans[],int question_no,char playername[]){
	int total_r_ans=0,total_w_ans=0,total_t_ans=0,total_time=0,i;
	float average_time=0;
	for(i=0;i<question_no;i++){
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
	printf("\n\t\t\t%s HEARS YOUR RESULT\n",playername);
	printf("\n\n   RIGHT ANSWERS = %d     WRONG ANSWERS = %d    TIME OUTS = %d\n\n\n\n   TIME = %d   AVERAGE TIME = %.2f\n\n\n\n\t\t\t\t\tOVERVIEW\n\n",total_r_ans,total_w_ans,total_t_ans,total_time,average_time);
	
	for(i=0;i<question_no;i++){
		printf(" %c ",ans[i]);
		if(ans[i]=='R'){
			system("color 20");
			Sleep(350);
		}
		if(ans[i]=='W'){
			system("color 40");
			Sleep(350);
		}
		if(ans[i]=='T'){
			system("color 60");
			Sleep(350);
		}
		system("color f0");
		Sleep(150);
	}
	system("color f0");
}

