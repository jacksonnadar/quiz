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
	 	if(i%5==0&&i!=0){
	 		printf("\n\n\tPress ENTER to continue and To exit game press x\n\n");
	 		exit=getch();
	 		system("cls");
	 		if(exit=='x'||exit=='X'){
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
        	case 4: questionNo4(i, ans, time_taken,time_limit);
        			break;
            case 5: questionNo5(i, ans, time_taken,time_limit);
        			break;
            case 6: questionNo6(i, ans, time_taken,time_limit);
        			break;
        	case 7: questionNo7(i, ans, time_taken,time_limit);
        			break;
            case 8: questionNo8(i, ans, time_taken,time_limit);
        			break;
            case 9: questionNo9(i, ans, time_taken,time_limit);
        			break;
        	case 10: questionNo10(i, ans, time_taken,time_limit);
        			break;
            case 11: questionNo11(i, ans, time_taken,time_limit);
        			break;
            case 12: questionNo12(i, ans, time_taken,time_limit);
        			break;
        	case 13: questionNo13(i, ans, time_taken,time_limit);
        			break;
            case 14: questionNo14(i, ans, time_taken,time_limit);
        			break;
            case 15: questionNo15(i, ans, time_taken,time_limit);
        			break;
        	case 16: questionNo16(i, ans, time_taken,time_limit);
        			break;
            case 17: questionNo17(i, ans, time_taken,time_limit);
        			break;
            case 18: questionNo18(i, ans, time_taken,time_limit);
        			break;
        	case 19: questionNo19(i, ans, time_taken,time_limit);
        			break;
            case 20: questionNo20(i, ans, time_taken,time_limit);
        			break;
            case 21: questionNo21(i, ans, time_taken,time_limit);
        			break;
        	case 22: questionNo22(i, ans, time_taken,time_limit);
        			break;
            case 23: questionNo23(i, ans, time_taken,time_limit);
        			break;
            case 24: questionNo24(i, ans, time_taken,time_limit);
        			break;
        	case 25: questionNo25(i, ans, time_taken,time_limit);
        			break;
            case 26: questionNo26(i, ans, time_taken,time_limit);
        			break;
            case 27: questionNo27(i, ans, time_taken,time_limit);
        			break;
        	case 28: questionNo28(i, ans, time_taken,time_limit);
        			break;
            case 29: questionNo29(i, ans, time_taken,time_limit);
        			break;
            case 30: questionNo30(i, ans, time_taken,time_limit);
        			break;
        	case 31: questionNo31(i, ans, time_taken,time_limit);
        			break;
            case 32: questionNo32(i, ans, time_taken,time_limit);
        			break;
            case 33: questionNo33(i, ans, time_taken,time_limit);
        			break;
        	case 34: questionNo34(i, ans, time_taken,time_limit);
        			break;
            case 35: questionNo35(i, ans, time_taken,time_limit);
        			break;
            case 36: questionNo36(i, ans, time_taken,time_limit);
        			break;
        	case 38: questionNo38(i, ans, time_taken,time_limit);
        			break;
            case 39: questionNo39(i, ans, time_taken,time_limit);
        			break;
            case 40: questionNo40(i, ans, time_taken,time_limit);
        			break;
        	case 41: questionNo41(i, ans, time_taken,time_limit);
        			break;
            case 42: questionNo42(i, ans, time_taken,time_limit);
        			break;
            case 43: questionNo43(i, ans, time_taken,time_limit);
        			break;
        	case 44: questionNo44(i, ans, time_taken,time_limit);
        			break;
            case 45: questionNo45(i, ans, time_taken,time_limit);
        			break;
            case 46: questionNo46(i, ans, time_taken,time_limit);
        			break;
        	case 47: questionNo47(i, ans, time_taken,time_limit);
        			break;
        	case 48: questionNo48(i, ans, time_taken,time_limit);
        			break;
            case 49: questionNo49(i, ans, time_taken,time_limit);
        			break;
            case 50: questionNo50(i, ans, time_taken,time_limit);
        			break;
        	case 37: questionNo37(i, ans, time_taken,time_limit);
        			break;
        	
		} 
    }
    system("cls");
    return i;
}
