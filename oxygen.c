/*

Question Source Credits: prepinsta
Selection of MPCS exams include a fitness test which is conducted on ground. 
There will be a batch of 3 trainees, appearing for running test in track for 3 rounds. 
You need to record their oxygen level after every round. 
After trainee are finished with all rounds, calculate for each trainee his average oxygen level over the 3 rounds and select one with highest oxygen level as the most fit trainee. 
If more than one trainee attains the same highest average level, they all need to be selected.

Display the most fit trainee (or trainees) and the highest average oxygen level.

Note:

The oxygen value entered should not be accepted if it is not in the range between 1 and 100.
If the calculated maximum average oxygen value of trainees is below 70 then declare the trainees as unfit with meaningful message as “All trainees are unfit.
Average Oxygen Values should be rounded.
Example 1:

INPUT VALUES
            95

            92

            95

            92

            90

            92

            90

            92

            90

OUTPUT VALUES
Trainee Number : 1
Trainee Number : 3
Note:

Input should be 9 integer values representing oxygen levels entered in order as

Round 1

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Round 2

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Round 3

Oxygen value of trainee 1
Oxygen value of trainee 2
Oxygen value of trainee 3
Output must be in given format as in above example. For any wrong input final output should display “INVALID INPUT”

*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int trainee[3][3], i, j,avg1=0, avg2=0, avg3=0,flag=0;
    
    for (i=0; i < 3; i++){
        for(j=0; j< 3; j++){
            scanf("%d", &trainee[i][j]);
            if (trainee[i][j] < 1 || trainee[i][j] > 100) 
            {   
                flag = 1;
                trainee[i][j] = 0;
            }
            
        }
    }
    
    if (flag != 0) 
    {
        printf("INVALID INPUT");
        exit(0);
        
    }
        
    
    avg1 = (trainee[0][0] + trainee[1][0] + trainee[2][0] )/3;
    avg2 = (trainee[0][1] + trainee[1][1] + trainee[2][1] )/3;
    avg3 = (trainee[0][2] + trainee[1][2] + trainee[2][2] )/3;
    
    
    if (avg1 < 70 || avg2 < 70 || avg3 < 70) 
    {
        printf("All the trainees are unfit");
        exit(0);
    }    
    
    
    if ((avg1 == avg2) && (avg1== avg3))
    {
        printf("Trainee Number: 1\nTrainee Number: 2\nTrainee Number: 3");
        exit(0);

    }
    
    if (avg1 == avg2)
    { 
        printf("Trainee Number: 1\nTrainee Number: 2"); 
        exit(0);
    }
        
    if (avg2 == avg3) 
    {
     printf("Trainee Number: 2\nTrainee Number: 3");
     exit(0);
    }
    
    if (avg1 == avg3) 
    {
     printf("Trainee Number: 1\nTrainee Number: 3");
     exit(0);
    }
    
    if (avg1 > avg2)
    {
     if(avg1 > avg3) printf("Trainee Number: 1");
     else if(avg2 > avg3) printf("Trainee Number: 2");
          else printf("Trainee Number: 3");
    }

    return 0;
}

