#include<stdio.h>
#include <windows.h>
#include<conio.h>
#include<stdlib.h>

typedef struct{
    char name[50];
    int id;
}candidates_t;

void candidateInitiallize(candidates_t Cand[58])
{
     strcpy(Cand[1].name,"AQUINO, Juan Gabriel");
     strcpy(Cand[2].name,"ASUNCION, Beal");
     strcpy(Cand[3].name,"CHONG, Jessica");
     strcpy(Cand[4].name,"DACANAY, Therese");
     strcpy(Cand[5].name,"DE LEON, Alveene Joyce");
     strcpy(Cand[6].name,"ESPELETA, Paola");
     strcpy(Cand[7].name,"GABALDON, Neil");
     strcpy(Cand[8].name,"HADAP, Krista");
     strcpy(Cand[9].name,"JUANO, Jeffrey");
     strcpy(Cand[10].name,"KIONG, Jennifer");
     strcpy(Cand[11].name,"LIM, Jeremy");
     strcpy(Cand[12].name,"LO, Jimmy");
     strcpy(Cand[13].name,"NG, Robbie");
     strcpy(Cand[14].name,"ORMOC, Regan");
     strcpy(Cand[15].name,"PANULAYA, Leonila");
     strcpy(Cand[16].name,"RECENO, Roy Justin");
     strcpy(Cand[17].name,"SEVILLA, Nigel");
     strcpy(Cand[18].name,"TAN, Donald");
     strcpy(Cand[19].name,"UY, Jocelle");
     strcpy(Cand[20].name,"VELASCO, Anton");
}

int main()
{
int vote=0,ctr,winner;
int tally[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
for(ctr=1;ctr<=3;ctr++)
{

printf("Voter #: %d\n ",ctr);

      candidates_t Cand[20];
      int votes[12];
      int numberchoosen = 0;
      int found=0;
      candidateInitiallize(Cand);

      int i,j;
      int s;
      int votee;

      {
      printf("\n");
      printf("\t\t\t\t OFFICIAL BALLOT\n");
      printf("\t\t OFFICIAL LIST OF STUDENT COUNCIL CANDIDATES 2010\n");
      printf("\t\t\tDE LA SALLE UNIVERSITY-MANILA\n\n\n");

      printf("1. AQUINO, Juan Gabriel\n");
      printf("2. ASUNCION, Beal\n");
      printf("3. CHONG, Jessica\n");
      printf("4. DACANAY, Therese\n");
      printf("5. DE LEON, Alveene Joyce\n");
      printf("6. ESPELETA, Paola\n");
      printf("7. GABALDON, Neil\n");
      printf("8. HADAP, Krista\n");
      printf("9. JUANO, Jeffrey\n");
      printf("10. KIONG, Jennifer\n");
      printf("11. LIM, Jeremy\n");
      printf("12. LO, Jimmy\n");
      printf("13. NG, Robbie\n");
      printf("14. ORMOC, Regan\n");
      printf("15. PANULAYA, Leonila\n");
      printf("16. RECENO, Roy Justin\n");
      printf("17. SEVILLA, Nigel\n");
      printf("18. TAN, Donald\n");
      printf("19. UY, Jocelle\n");
      printf("20. VELASCO, Anton\n\n");

      system("pause");
      system("cls");

      printf("INSTRUCTION:\n");
      printf("TO VOTE FOR A CANDIDATE,INPUT THE NUMBER CORRESPONDING TO YOUR\n");
      printf("CHOSEN STUDENCT COUNCIL CANDIDATE.\n\n");
      printf("Enter Candidate Number (1-20) you want to Vote: \n\n\n");

      {
      for(i=0;i<12;i++)
      {
          printf("Vote: ");
          scanf("%d",&votes[i]);

          //scan if napili na or hindi
          found = 0;
          for(j=0;j<numberchoosen;j++)
          {
               if(votes[i] == votes[j])
               {
                   printf("Invalid Vote! Please Try Again\n");
                   found = 1;
               }
               else if (votes[i]>20)
               {
                    printf("Invalid Vote! Please Try Again\n");
                    found = 1;
               }
          }

          if(found == 0)
          {
              numberchoosen++;
          }
          else{
              i--;
          }
      }
      system("cls");
      printf("You're Elected Candidates: \n\n");
      for(i=0;i<12;i++)
      {
          printf("%s\n",Cand[votes[i]].name);
      }
      printf("\n\n");
      system("pause");
      system("cls");
      printf("CONGRATULATIONS! YOUR VOTE HAS BEEN ACCEPTED!\n");
      printf("THE NEXT VOTER WILL NOW INPUT HIS/HER VOTE.\n");
      printf("THANK YOU FOR VOTING!\n");
      printf("\n\n");
      system("pause");
      system("cls");
      }
      }
	      tally[vote-1]++;
	    }

	    for(ctr=0;ctr<20;ctr++)
	    {
	      switch(ctr)
	      {
             case 1:printf("AQUINO, Juan Gabriel got %d votes\n",tally[ctr]++);
	         break;
             case 2:printf("ASUNCION, Beal got %d votes\n",tally[ctr]++);
	         break;
             case 3:printf("CHONG, Jessica got %d votes\n",tally[ctr]++);
	         break;
             case 4:printf("DACANAY, Therese got %d votes\n",tally[ctr]++);
	         break;
             case 5:printf("DE LEON, Alveene Joyce got %d votes\n",tally[ctr]++);
	         break;
             case 6:printf("ESPELETA, Paola got %d votes\n",tally[ctr]++);
	         break;
             case 7:printf("GABALDON, Neil got %d votes\n",tally[ctr]++);
	         break;
             case 8:printf("HADAP, Krista got %d votes\n",tally[ctr]++);
             break;
             case 9:printf("JUANO, Jeffrey got %d votes\n",tally[ctr]++);
	         break;
             case 10:printf("KIONG, Jennifer got %d votes\n",tally[ctr]++);
	         break;
             case 11:printf("LIM, Jeremy got %d votes\n",tally[ctr]++);
	         break;
             case 12:printf("LO, Jimmy got %d votes\n",tally[ctr]++);
	         break;
             case 13:printf("NG, Robbie got %d votes\n",tally[ctr]++);
	         break;
             case 14:printf("ORMOC, Regan got %d votes\n",tally[ctr]++);
	         break;
             case 15:printf("PANULAYA, Leonila got %d votes\n",tally[ctr]++);
	         break;
             case 16:printf("RECENO, Roy Justin got %d votes\n",tally[ctr]++);
             break;
             case 17:printf("SEVILLA, Nigel got %d votes\n",tally[ctr]++);
	         break;
             case 18:printf("TAN, Donald got %d votes\n",tally[ctr]++);
	         break;
             case 19:printf("UY, Jocelle got %d votes\n",tally[ctr]++);
	         break;
             case 20:printf("VELASCO, Anton got %d votes\n",tally[ctr]++);
             break;
	      }
	    }
	    winner=0;
    for(ctr=0;ctr<20;ctr++)
	    {
     	 if(tally[winner]<tally[ctr])
	        winner=ctr;
    }
    switch(winner)
    {
          case 1:printf("The winner is AQUINO, Juan Gabriel\n");
	      case 2:printf("The winner is ASUNCION, Beal\n");
	      case 3:printf("The winner is CHONG, Jessica\n");
          case 4:printf("The winner is DACANAY, Therese\n");
          case 5:printf("The winner is DE LEON, Alveene Joyce\n");
	      case 6:printf("The winner is ESPELETA, Paola\n");
	      case 7:printf("The winner is GABALDON, Neil\n");
	      case 8:printf("The winner is HADAP, Krista\n");
	      case 9:printf("The winner is JUANO, Jeffrey\n");
	      case 10:printf("The winner is KIONG, Jennifer\n");
	      case 11:printf("The winner is LIM, Jeremy\n");
          case 12:printf("The winner is LO, Jimmy\n");
          case 13:printf("The winner is NG, Robbie\n");
	      case 14:printf("The winner is ORMOC, Regan\n");
	      case 15:printf("The winner is PANULAYA, Leonila\n");
	      case 16:printf("The winner is RECENO, Roy Justin\n");
          case 17:printf("The winner is SEVILLA, Nigel\n");
	      case 18:printf("The winner is TAN, Donald\n");
	      case 19:printf("The winner is UY, Jocelle\n");
	      case 20:printf("The winner is VELASCO, Anton\n");
          break;
	    }
	    system("pause");
        return 0;
	}
