void mainWorking(int i,char ans[],int time_taken[],
int time_limit,char correct_ans_small,char correct_ans_caps,char question[],
char option_a[],char option_b[],char option_c[],char option_d[],char correct_ans[]){
	int t=0,max_char=20,x;
    char user_ans;
    
    printf("\t%i:%s:\n\n",i+1,question);
    printf("\tA.%s",option_a);
    for(x=0;x<=max_char-strlen(option_a);x++){
    	printf(" ");
	}
	printf("\t\t\t");
    printf("B.%s\n",option_b);
    printf("\tC.%s",option_c);
    for(x=0;x<=max_char-strlen(option_c);x++){
    	printf(" ");
	}
	printf("\t\t\t");
    printf("D.%s\n",option_d);
    

	while(1)
	{
	   if(t>=time_limit)
		{
			printf(" OOPS! :( time up:\n");
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
		printf("correct ans is option %c : %s\n\n",correct_ans_caps,correct_ans);
	}
	if(user_ans==correct_ans_small||user_ans==correct_ans_caps){
		ans[i]='R';
		system("color 20");
		sleep(1);
		printf(" Right answer :) \n\n");
	}
	else if(user_ans=='T'){
		ans[i]='T';
	}
	else{
		ans[i]='W';
		system("color 40");
		sleep(1);
		printf(" :( correct ans is option %c : %s\n\n",correct_ans_caps,correct_ans);
	}
	time_taken[i]=t;
	system("color f0");
}


void questionNo1(int i,char ans[],int time_taken[],int time_limit){
   
    mainWorking(i,ans,time_taken,time_limit,'c','C',"An entire path name, consisting of several sub-directory names can \n\tcontain upto","13 character","36 character","63 character","53 character","63 character");
}
void questionNo2(int i,char ans[],int time_taken[],int time_limit){
    
    mainWorking(i,ans,time_taken,time_limit,'c','C',"In which year the first operating system was developed","1910","1940","1950","1980","1950");
}
void questionNo3(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'b','B',"MS-DOS developed in","1991","1984","1971","1961","1984");
}
void questionNo4(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"Maximum length of DOS command using any optional parameter is","26 characters","87 characters","127 characters","None of the above","127 characters");
}
void questionNo5(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'d','D',"In which version of DOS. CHKDSK command has been changed to SCANDISK?","5.0","6.2","6.0","6.2","6.2");
}
void questionNo6(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'d','D',"CHKDSK command is used to","Analyze the hard disk error","Diagnose the hard disk error","Report the status of files on disk","All of the above","All of the above");
}
void questionNo7(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'a','A',"Which file is the batch file that is read while booting a computer?","Autoexec.bat","Auto-batch","Autoexecutive.bat","Auto.bat","Autoexec.bat");
}
void questionNo8(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'b','B',"Which command is used to backup in DOS 6+ Version","BACKUP","MSBACKUP","MSBACKEDUP","All of the above","MSBACKUP");
}
void questionNo9(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'C','c',"Copy and Xcopy are same in the sense","Both are internal command of DOS","Both are external commands of DOS","Both can be used to copy file or group of files","All of the above","Both can be used to copy file or group of files");
}
void questionNo10(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'a','A',"Which command is used to clear the screen","Cls","Clear","Clscreen","All of the above","Cls");
}
void questionNo11(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"internal command in Dos are","Cls, rd label","Dir, ren, sys","Time, type, dir","Del, disk copy, label","Time, type, dir");
}
void questionNo12(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'a','A',"Which command is used to copy files?","Copy","Diskcopy","type","All of the above","copy");
}
void questionNo13(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"To copy the hidden system files of DOS to another disk you can use the command","Copy","Ren","Sys","Diskcopy","sys");
}
void questionNo14(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'b','B',"Disk copy command in DOS is used to","Copy a file","Copy contents of one floppy disk to another","Copy contents of CD-ROM to another","All of the above","Copy contents of one floppy disk to another");
}
void questionNo15(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'a','A',"SYS command is used to","Copy DOS system files to new disk","Copy DOS configuration files to a new disk","Update the DOS system files","None of the above","Copy DOS system files to new disk");
}
