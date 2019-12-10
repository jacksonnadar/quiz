#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include<conio.h>
#include"quiz.h"
#include"quiz_questions.h"
#include"quiz_ui.h"
int totalq=3,time_limit=5;

int main() 
{ 
system("color 80");
quizStart();

 time_t seconds; 
	char ans[totalq];
    int num,i,random_no_storage[totalq],time_taken[totalq]; 
  
   storingRandom(random_no_storage, totalq );

   callingQuestions(random_no_storage, ans, time_taken, time_limit,totalq);
   
  for(i=0;i<3;i++){
  	printf("%c   %i\n",ans[i],time_taken[i]);
  }
    return 0; 
} 
