#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include<conio.h>
#include"quiz.h"
int totalq=3;

int main() 
{ 
	char ans[totalq];
    int num,i,array[totalq],randno,repeat=0,j; 
  
    // Use current time as  
    // seed for random generator 
      srand(time(NULL));
      for(i=0;i<totalq;i++){
              
          while(1){
              randno = printRandoms(totalq);
              for(j=0;j<=i;j++){
                  if(randno==array[j]){
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
              array[i]=randno;
      }

    for(i=0;i<totalq;i++){
        switch(array[i]){
        	case 1: ans[i]=questionNo1(i);
        			break;
            case 2: ans[i]=questionNo2(i);
        		break;
            case 3: ans[i]=questionNo3(i);
        		break;
		} 
    }
  
    return 0; 
} 
