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
    fflush(stdin);
    char ans=getch();
    int z;
    for(z=0;z<3;z++){
    	if(ans=='A'||ans=='a'||ans=='B'||ans=='b'||ans=='C'||ans=='c'||ans=='d'||ans=='D'){
    		break;
		}
		ans=getch();
	}
	return ans;
}
char questionNo2(int i){
    printf("%i: IC chips used in computers are usually made of:\n",i+1);
    printf(" A. Lead\t\t\tB. Silicon\n");
    printf(" C. Chromium\t\t\tD. Gold\n");
    fflush(stdin);
    char ans=getch();
    int z;
    for(z=0;z<3;z++){
    	if(ans=='A'||ans=='a'||ans=='B'||ans=='b'||ans=='C'||ans=='c'||ans=='d'||ans=='D'){
    		break;
		}
		ans=getch();
	}
	return ans;
}
char questionNo3(int i){
    printf("%i: IC chips used in computers are usually made of:\n",i+1);
    printf(" A. Lead\t\t\tB. Silicon\n");
    printf(" C. Chromium\t\t\tD. Gold\n");
    fflush(stdin);
    char ans=getch();
    int z;
    for(z=0;z<3;z++){
    	if(ans=='A'||ans=='a'||ans=='B'||ans=='b'||ans=='C'||ans=='c'||ans=='d'||ans=='D'){
    		break;
		}
		ans=getch();
		printf(" wrongt try again\n0");
	}
	return ans;
}
