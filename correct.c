#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include<conio.h>
#include<windows.h>
#include"quiz.h"
#include"quiz_questions.h"
#include"quiz_ui.h"
int totalq=50,time_limit=10;

int main() 
{ 
	time_t seconds; 
	char ans[totalq],playername[20];;
    int num,i,random_no_storage[totalq],time_taken[totalq]; 
    
	system("color f0");
	quizStart(playername);
	
   	storingRandom(random_no_storage, totalq );

  	int question_no = callingQuestions(random_no_storage, ans, time_taken, time_limit,totalq);
   
   quizResult(time_taken, ans,question_no,playername);
    return 0; 
} 
