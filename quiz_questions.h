void mainWorking(int i,char ans[],int time_taken[],
int time_limit,char correct_ans_small,char correct_ans_caps,char question[],
char option_a[],char option_b[],char option_c[],char option_d[],char correct_ans[]){
	int t=0,max_char=55,x,key_press;
    char user_ans;
    
    printf("\n\n\n\t%i:%s:\n\n",i+1,question);
    printf("\tA.%s",option_a);
    for(x=0;x<=max_char-strlen(option_a);x++){
    	printf(" ");
	}
    printf("B.%s\n\n",option_b);
    printf("\tC.%s",option_c);
    for(x=0;x<=max_char-strlen(option_c);x++){
    	printf(" ");
	}
    printf("D.%s\n\n",option_d);
    

	while(1)
	{
	   if(t>=time_limit)
		{
			printf("\n\n  :( OOPS!  time up:");
			break;
		}
		printf(" * ");
		sleep(1);
		t=t+1;
		key_press=kbhit();		
		if( key_press )
		{
	      	user_ans=getch();
			break;
		}
	}
	printf("\n\n");
	if(t>=time_limit){
		user_ans='T';
		system("color 6f");
		sleep(1);
		printf("\n  correct ans is option %c : %s\n\n",correct_ans_caps,correct_ans);
	}
	if(user_ans==correct_ans_small||user_ans==correct_ans_caps){
		ans[i]='R';
		system("color 2f");
		sleep(1);
		printf("\n :) Right answer  \n\n");
	}
	else if(user_ans=='T'){
		ans[i]='T';
	}
	else{
		ans[i]='W';
		system("color 4f");
		sleep(1);
		printf(" :( correct ans is option %c : %s\n\n",correct_ans_caps,correct_ans);
	}
	time_taken[i]=t;
	system("color 1f");
	sleep(3);
	system("cls");
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
void questionNo44(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'d','D',"Which command be used to clear display the operating system prompt on the first line of the display?","Cd","Md","Rename","cls","cls");
}
void questionNo16(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'b','B',"The command used to copy a file named temp.doc from drive C: to drive A: is","Copy temp.doc to a:","Copy c:temp.doc a:","Copy c: a:","Copy temp a: c:","Copy c:temp.doc a:");
}
void questionNo17(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'B','b',"External command in DOS are","Copy, edit, sys, format","Edit, sys, chkdsk","Chkdsk, prompt, date","Sys, ver, vol","Edit, sys, chkdsk");
}
void questionNo18(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"Which keys can be pressed quit without saving in DOS","Ctrl + A","Ctrl + B","Ctrl + C","Ctrl + D","Ctrl + C");
}
void questionNo19(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'a','A',"Which command is used to get the current date only?","Date","Time","Second","All of the above","Date");
}
void questionNo20(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'d','D',"Generally, the DATE is entered in the form","DD-YY-MM","YY-DD-MM","MM-YY-DD","MM-DD-YY","MM-DD-YY");
}
void questionNo21(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'a','A',"DEL command is used to","Delete files","Delete directory","Delete labels","Delete contents of file","Delete files");
}
void questionNo22(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"Which command be used to ask you to confirm that you want to delete the directory?","Deltree","Deltree/f","Del *.*/p","Erase *.*","Del *.*/p");
}
void questionNo23(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"Which statement is correct?","Directories can be kept inside a file","Files can not be kept inside a directory","1 millisec = 10 ^ 3 sec","None of above","1 millisec = 10 ^ 3 sec");
}
void questionNo24(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'d','D',"CHKDSK can be used to find","Disks bad portion","Occupied space","Free space","All of above","All of above");
}
void questionNo25(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'a','A',"DIR command is used to display","a list of files","contents of files","ype of files","All of above","Display a list of files in a directory");
}
void questionNo26(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"The deleted file in MS-DOS can be recovered if you use the command mention below immediately, the command is:","DO NOT DELETE","NO DELETE","UNDELETE","ONDELETE","UNDELETE");
}
void questionNo27(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"To copy the file command.com from drive c: to drive a:","Drive c: copy drive a:\command.com","C:A: copy command.com","Copy c:\command.com a:","Both b and c","Copy c:\command.com a:");
}
void questionNo28(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'a','A',"While working with MS-DOS which key is used to get the p[revious command used:","F3","F1","F6","F9","F3");
}
void questionNo29(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"FAT stands for","File Accomodation Table","File Access Tape","File Allocation Table","File Activity Table","File Allocation Table");
}
void questionNo30(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'d','D',"xcopy command can copy","individual files or group of files","directories including subdirectories","to diskette of a different capacity","all of above","all of above");
}
void questionNo31(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'a','A',"Which command is used to make a new directory?","Md","Cd","Rd","None of above","Md");
}
void questionNo32(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"Full form of MS-DOS is","Micro System Disk Operating System","Micro Simple Disk Operating System","Micro Soft Disk Operating System","Micro Sort Disk Operating System","Micro Soft Disk Operating System");
}
void questionNo33(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"Operating System is like a","Parliament","Secretary","Government","None of the above","Government");
}
void questionNo34(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"Format command is used to","Prepare a blank disk","Create a new blank disk from a used one","Both of above","None of above","Both of above");
}
void questionNo35(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'b','B',"The following command set is correct according to their function","RD can MD","DEL and ERASE","CD and RD","COPY and RENAME","DEL and ERASE");
}
void questionNo36(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"Which command is used to change the file name?","Ren","Rename","Both of above","None of above","Both of above");
}
void questionNo37(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'d','D',"While working with MS-DOS, which command is used to copying the files to transfer from one PC to another one?","Rename","Path","Dir","Copy","Copy");
}
void questionNo38(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'a','A',"RESTORE command is used to","Restore files from disks made using the BACKUP command","Restore files which are deleted","Restore files from recycle bin","Restore files which are deleted recently","Restore files from disks made using the BACKUP command");
}
void questionNo39(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"The vol command is used to","see the value of list","see the veriety of language","see the disk volume label","see the volume of largest","see the disk volume label");
}
void questionNo40(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'b','B',"In MS-DOS you can use small or capital letter of combination of both to enter a command\n\t but internally MS-DOS work with.","Small letter","Capital letter","Both a and b","None of above","Capital letter");
}
void questionNo41(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'b','B',"The maximum length in DOS commands is","80 chars","127 chars","100 chars","8 chars","127 chars");
}
void questionNo42(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'d','D',"The time command is used to display _____ time.","US time","Greenwich Mean Time","Julian Time","System Time","System Time");
}
void questionNo43(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'d','D',"WWW stands for ?","World Whole Web","Wide World Web","Web World Wide","World Wide Web","World Wide Web");
}
void questionNo45(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'b','B',"Which of the following are components of Central Processing Unit(CPU)?","Arithmetic logic unit,Mouse","Arithmetic logic unit,Control unit","Arithmetic logic unit, Integrated Circuits","Control Unit,Monitor","Arithmetic logic unit,Control unit");
}
void questionNo46(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'a','A',"Which among following first generation of computers had?","Vaccum Tubes and Magnetic Drum","Integrated Circuits","Magnetic Tape and Transistors","All of above","Vaccum Tubes and Magnetic Drum");
}
void questionNo47(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"Where is RAM located?","Expansion Board","External Drive","Mother Board","All of above","Mother Board");
}
void questionNo48(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'b','B',"If a computer has more than one processor then it is known as?","Uniprocess","Multiprocessor","Multithreaded","Multiprogramming","Multiprocessor");
}
void questionNo49(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'c','C',"If a computer provides database services to other, then it will be known as?","Web server","Application server","Database server","FTP server","Database server");
}
void questionNo50(int i,char ans[],int time_taken[],int time_limit){
	
     mainWorking(i,ans,time_taken,time_limit,'a','A',"Full form of URL is?","Uniform Resource Locator","Uniform Resource Link","Uniform Registered Link","Unified Resource Link","Uniform Resource Locator");
}
