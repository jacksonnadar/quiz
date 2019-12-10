void mainWorking(int i,char ans[],int time_taken[],int time_limit,char correct_ans_small,char correct_ans_caps,char correct_ans[]){
	int t=0;
    char user_ans;

	while(!kbhit())
	{
	   if(t>=time_limit)
		{
			printf("time up:\n");
			break;
		}
		sleep(1);
		t=t+1;	
		if( kbhit())
		{
		
	      	user_ans=getch();
			break;
		}
	}
	printf("\n");
	if(t>=time_limit){
		user_ans='T';
		system("color 60");
		sleep(1);
		printf("correct ans is option %c %s\n\n",correct_ans_caps,correct_ans);
	}
	if(user_ans==correct_ans_small||user_ans==correct_ans_caps){
		ans[i]='R';
		system("color 20");
		sleep(1);
		printf("you are right\n\n");
	}
	else if(user_ans=='T'){
		ans[i]='T';
	}
	else{
		ans[i]='W';
		system("color 40");
		sleep(1);
		printf("correct ans is option %c %s\n\n",correct_ans_caps,correct_ans);
	}
	time_taken[i]=t;
	system("color 80");
}


void questionNo1(int i,char ans[],int time_taken[],int time_limit){
    printf("%i:this is one:\n",i+1);
    printf("A.Silicon \t\t\tB.lead\n");
    printf("C.Chromium\t\t\tD.Gold\n");
    mainWorking(i,ans,time_taken,time_limit,'a','A',"Lead");
}
void questionNo2(int i,char ans[],int time_taken[],int time_limit){
    printf("%i:this is two:\n",i+1);
    printf("A.Lead    \t\t\tB.Silicon\n");
    printf("C.Chromium\t\t\tD.Gold\n"); 
    mainWorking(i,ans,time_taken,time_limit,'b','B',"Silicon");
}
void questionNo3(int i,char ans[],int time_taken[],int time_limit){
    printf("%i:this is three:\n",i+1);
    printf("A.Lead    \t\t\tB.Silicon\n");
    printf("C.Chromium\t\t\tD.Gold\n");
    mainWorking(i,ans,time_taken,time_limit,'c','C',"Chromium");
}
