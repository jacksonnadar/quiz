int printRandoms(int total) 
{ 
    int lower = 1, upper = total, count = 1;
    int i,num; 
    for (i = 0; i < count; i++) { 
         num = (rand() % 
           (upper - lower + 1)) + lower; 
    } 
     return num; 
} 

char questionNo1(int i){
    printf("%i: IC chips used in computers are usually made of:\n",i+1);
    printf(" A. Lead\t\t\tB. Silicon\n");
    printf(" C. Chromium\t\t\tD. Gold\n");
    	int t=0;
    char ch;

	while(!kbhit())
	{
	   if(t>5)
		{
			printf("time up:\n");
			break;
		}
		sleep(1);
		t=t+1;	
		if( kbhit())
		{
		
	      	ch=getch();
			printf("hii total time is %d",t);
			printf("you hv entered %c",ch);
			break;
		}
	}
	return ch;
}
char questionNo2(int i){
    printf("%i: IC chips used in computers are usually made of:\n",i+1);
    printf(" A. Lead\t\t\tB. Silicon\n");
    printf(" C. Chromium\t\t\tD. Gold\n");
    	int t=0;
    char ch;

	while(!kbhit())
	{
	   if(t>5)
		{
			printf("time up:\n");
			break;
		}
		sleep(1);
		t=t+1;	
		if( kbhit())
		{
		
	      	ch=getch();
			printf("hii total time is %d",t);
			printf("you hv entered %c",ch);
			break;
		}
	}
	return ch;
}
char questionNo3(int i){
    printf("%i: IC chips used in computers are usually made of:\n",i+1);
    printf(" A. Lead\t\t\tB. Silicon\n");
    printf(" C. Chromium\t\t\tD. Gold\n");
    	int t=0;
    char ch;

	while(!kbhit())
	{
	   if(t>5)
		{
			printf("time up:\n");
			break;
		}
		sleep(1);
		t=t+1;	
		if( kbhit())
		{
		
	      	ch=getch();
			printf("hii total time is %d",t);
			printf("you hv entered %c",ch);
			break;
		}
	}
	return ch;
}
