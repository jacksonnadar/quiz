int randomNoGenerated(int total) 
{ 
    int lower = 1, upper = total, count = 1;
    int i,num; 
    for (i = 0; i < count; i++) { 
         num = (rand() % 
           (upper - lower + 1)) + lower; 
    } 
     return num; 
} 

void storingRandom(int random_no_storage[],int totalq ){
	int i,j,rand_no,repeat=0;
	 srand(time(NULL));
      for(i=0;i<totalq;i++){
              
          while(1){
              rand_no =  randomNoGenerated(totalq);
              for(j=0;j<=i;j++){
                  if(rand_no==random_no_storage[j]){
                      repeat+=1;
                  }
                  if(repeat>0){
                      break;
                  }
              }
              if(repeat!=0){
                  repeat=0;
                  continue;
              }
              if(repeat==0){
                  break;
              }
          }
              random_no_storage[i]=rand_no;
      }
}

int callingQuestions(int random_no_storage[],char ans[],int time_taken[],int time_limit,int totalq){
	int i;
	char exit='q';
	 for(i=0;i<totalq;i++){
	 	if(i%5==0){
	 		printf("Press ENTER to continue and To exit game press x\n\n");
	 		exit=getch();
	 		system("cls");
	 		if(exit=='x'){
	 			return i;
			 }
		}
        switch(random_no_storage[i]){
        	case 1: questionNo1(i, ans, time_taken,time_limit);
        			break;
            case 2: questionNo2(i, ans, time_taken,time_limit);
        			break;
            case 3: questionNo3(i, ans, time_taken,time_limit);
        			break;
        	case 4: questionNo1(i, ans, time_taken,time_limit);
        			break;
            case 5: questionNo2(i, ans, time_taken,time_limit);
        			break;
            case 6: questionNo3(i, ans, time_taken,time_limit);
        			break;
        	case 7: questionNo1(i, ans, time_taken,time_limit);
        			break;
            case 8: questionNo2(i, ans, time_taken,time_limit);
        			break;
            case 9: questionNo3(i, ans, time_taken,time_limit);
        			break;
        	case 10: questionNo1(i, ans, time_taken,time_limit);
        			break;
            case 11: questionNo2(i, ans, time_taken,time_limit);
        			break;
            case 12: questionNo3(i, ans, time_taken,time_limit);
        			break;
        	case 13: questionNo1(i, ans, time_taken,time_limit);
        			break;
            case 14: questionNo2(i, ans, time_taken,time_limit);
        			break;
            case 15: questionNo3(i, ans, time_taken,time_limit);
        			break;
//        	case 16: questionNo1(i, ans, time_taken,time_limit);
//        			break;
//            case 17: questionNo2(i, ans, time_taken,time_limit);
//        			break;
//            case 18: questionNo3(i, ans, time_taken,time_limit);
//        			break;
		} 
    }
    system("cls");
    return i;
}
