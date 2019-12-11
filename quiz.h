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

void callingQuestions(int random_no_storage[],char ans[],int time_taken[],int time_limit,int totalq){
	int i;
	 for(i=0;i<totalq;i++){
        switch(random_no_storage[i]){
        	case 1: questionNo1(i, ans, time_taken,time_limit);
        			break;
            case 2: questionNo2(i, ans, time_taken,time_limit);
        			break;
            case 3: questionNo3(i, ans, time_taken,time_limit);
        			break;
        	case 4: questionNo4(i, ans, time_taken,time_limit);
        			break;
		} 
    }
}
