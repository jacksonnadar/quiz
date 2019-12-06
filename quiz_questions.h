void mainWorking(int i,char ans[],int time_taken[],int time_limit,char correct_ans_small,char correct_ans_caps){
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
//			printf("hii total time is %d",t);
//			printf("you hv entered %c",ch);
			if(user_ans=='T'){
				user_ans='z';
			}
			break;
		}
	}
	if(t>=time_limit){
		user_ans='T';
	}
	if(user_ans==correct_ans_small||user_ans==correct_ans_caps){
		ans[i]='R';
	}
	else if(user_ans=='T'){
		ans[i]='T';
	}
	else{
		ans[i]='W';
	}
	time_taken[i]=t;
}


void questionNo1(int i,char ans[],int time_taken[],int time_limit){
    printf("%i: this is one:\n",i+1);
    printf(" A. Lead\t\t\tB. Silicon\n");
    printf(" C. Chromium\t\t\tD. Gold\n");
    mainWorking(i,ans,time_taken,time_limit,'a','A');
}
void questionNo2(int i,char ans[],int time_taken[],int time_limit){
    printf("%i: this is two:\n",i+1);
    printf(" A. Lead\t\t\tB. Silicon\n");
    printf(" C. Chromium\t\t\tD. Gold\n");
    mainWorking(i,ans,time_taken,time_limit,'b','B');

}
void questionNo3(int i,char ans[],int time_taken[],int time_limit){
    printf("%i: this is three:\n",i+1);
    printf(" A. Lead\t\t\tB. Silicon\n");
    printf(" C. Chromium\t\t\tD. Gold\n");
    mainWorking(i,ans,time_taken,time_limit,'c','C');
}
