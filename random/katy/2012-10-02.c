#include <stdio.h>
#include <math.h>
#define HOT 85
#define COLD 60
#define SENTINAL -1

int main(void)
{  
    int count=0;
    int runningTotal=0;
        
    int currentTemp;
    printf("Enter the current temperature> ");
    scanf("%d", &currentTemp);
    
    while(currentTemp!=SENTINAL)
        {
        
                if(currentTemp>=HOT)
                    {
                        printf("hot %d\n", currentTemp);
                    }
                else if(currentTemp>=COLD && currentTemp<=HOT)
                    {
                        printf("pleasent, %d\n", currentTemp);
                    }
                else
                    {
                        printf("cold, %d\n", currentTemp);
                    }
            
            count++;
            runningTotal+=currentTemp;
            printf("Enter the current temperature> ");
            scanf("%d", &currentTemp);
        }
        
    printf("The average of %d days, is %d", count, (runningTotal/count) ); 
    return (0);
}
