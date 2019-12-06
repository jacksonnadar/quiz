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


