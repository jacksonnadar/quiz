void mainWorking(int i,char ans[],int time_taken[],
int time_limit,char correct_ans_small,char correct_ans_caps,char question[],
char option_a[],char option_b[],char option_c[],char option_d[],char correct_ans[]){
	int t=0,max_char=20,x;
    char user_ans;
    
    printf("%i:%s:\n\n",i+1,question);
    printf("A.%s",option_a);
    for(x=0;x<=max_char-strlen(option_a);x++){
    	printf(" ");
	}
	printf("\t\t\t");
    printf("B.%s\n",option_b);
    printf("C.%s",option_c);
    for(x=0;x<=max_char-strlen(option_c);x++){
    	printf(" ");
	}
	printf("\t\t\t");
    printf("D.%s\n",option_d);
    

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
   
    mainWorking(i,ans,time_taken,time_limit,'c','C',"An entire path name, consisting of several sub-directory names can contain upto","13 character","36 character","63 character","53 character","63 character");
}
void questionNo2(int i,char ans[],int time_taken[],int time_limit){
    
    mainWorking(i,ans,time_taken,time_limit,'c','C',"In which year the first operating system was developed","1910","1940","1950","1980","1950");
}
void questionNo3(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'b','B',"MS-DOS developed in","1991","1984","1971","1961","1984");
}
