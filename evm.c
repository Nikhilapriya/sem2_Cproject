#include<stdio.h>
int main(){
    int vote1,vote2,vote3,vote4,vote5,vote6,cast,vote,result;
    vote1=10;vote2=12;vote3=34;vote4=78;vote5=2;vote6=44;
    printf("---------------------ELECTRONIC VOTING MACHINE---------------------\n");
    printf("\n\n\n\t\tplease cast your vote :)\n\npress 1 to cast vote.......\n");
    scanf("%d",&cast);
    if (cast==1){
        printf("select the choice you want to vote for\n\t1. JOE BIDEN\n\t2. BERNIE SANDERS\n\t3. ELIZABETH WARREN\n\t4. MICHEAL BLOOMBERG\n\t5. AMY KLOBUCHAR\n\t6. TULSI GLABBARD\n");
        scanf("%d",&vote);
        switch(vote){
        case 1:printf("THANKS!! for voting..^-^\n");
               vote1++;
               break;
        case 2:printf("THANKS!! for voting..^-^\n");
               vote2++;
               break;
        case 3:printf("THANKS!! for voting..^-^\n");
               vote3++;
               break;
        case 4:printf("THANKS!! for voting..^-^\n");
               vote4++;
               break;
        case 5:printf("THANKS!! for voting..^-^\n");
               vote5++;
               break;
        case 6:printf("THANKS!! for voting..^-^\n");
               vote6++;
               break;
        default:printf("PLEASE ENTER THE RIGHT CHOICE x_x\n");
                break;
        }

        printf("enter 2 to view the results...\n");
        scanf("%d",&result);
        if (result==2){
            printf("-------------------the voting results-----------------\n");
            printf("JOE BIDEN             BERNIE SANDERS            ELIZABETH WARREN           MICHEAL BLOOMBERG           AMY KLOBUCHAR             TULSI GLABBARD\n");
            printf("__________________________________________________________________________________________________________________________________________________\n\n");
            printf("%d                        %d                         %d                           %d                        %d                          %d\n",vote1,vote2,vote3,vote4,vote5,vote6);
        }
    }
    }
