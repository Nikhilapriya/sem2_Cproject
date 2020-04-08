#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>

typedef struct voter_info{
    char id[10];
    char name[20];
    char dob[20];
    char father_name[20];
    char mother_name[20];
    struct voter_info *next;
}node;

node *head;
int count1=0,count2=0,count3=0,count4=0,count5=0;

int main()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t\t\t\t-----WELCOME TO ONLINE VOTING-----\t\t\t\t\t\n");
    printf("\t\t\t\t\t*********************************************\t\t\t\t\t\n");
    printf("\t\t\t-----please enter one(1) for logging vote main loges\n");
    int B;
    scanf("%d",&B);
    if(B==1)
    {
        main_loges();
    }
    return 0;
}

void main_loges()
{
    system("cls");
    printf("\n\n\n");
    printf("       \t\t\t\t1.FOR VOTE ENTRY     - - - - - -|||\n");
    Sleep(300);
    printf("       \t\t\t\t2.FOR ADMIN PANNEL   - - - - - -|||\n");
    Sleep(300);
    printf("       \t\t\t\t3.FOR WINNER         - - - - - -|||\n");
    Sleep(300);
    printf("       \t\t\t\t4.FOR EXIT           - - - - - -|||\n\n\n\n\n\n");
    printf("\t\t- - - - - - After voter entry you can give vote, otherwise you cannot- - - - - -\n");
    Sleep(500);
    printf("\t\t- - - - - - - - - - - -So Please enter (1)- - - - - - - - - - - -\n\n");
    int T;
    scanf("%d",&T);
    if(T==1)
        voter_insert();
    if(T==2)
        admin();
    if(T==3)
        winner();
    if(T==4)
        exitt();
}


int cunt=0,count=0,R=3;
void voter_insert()
{
    node *temp;
    char name[25],dob[20],f_name[20],m_name[20],id[10];
    system("cls");
    printf("\n\n\n\n");
    printf("\tIF NATIONAL ID, YOUR NAME,BIRTH DATE,YOUR FATHER NAME AND YOUR MOTHER NAME MATCH,YOU CAN GIVE VOTE ELSE NO\n\n\n");
    Sleep(300);
    printf("\t\t\tIF YOU DO WRONG FOR 3 TIMES THE PROGRAM AUTOMATICALLY TERMINATES\n\n\n\n");
    Sleep(300);
    printf("\t\tPLEASE - - - - ,\n");
    Sleep(300);
    printf("\t\t\t\tENTER YOUR NATIONAL ID NUMBER    \n");
    gets(id);
    gets(id);
    printf("\t\t\t\tENTER YOUR NAME                  \n");
    gets(name);
    printf("\t\t\t\tENTER YOUR BIRTH DATE            \n");
    gets(dob);
    printf("\t\t\t\tENTER YOUR FATHER NAME           \n");
    gets(f_name);
    printf("\t\t\t\tENTER YOUR MOTHER NAME           \n");
    gets(m_name);
    temp=(node *)malloc(sizeof(node));
    strcpy(temp->id,id);
    strcpy(temp->name,name);
    strcpy(temp->dob,dob);
    strcpy(temp->father_name,f_name);
    strcpy(temp->mother_name,m_name);
    temp->next=NULL;
    head=temp;
    while(temp != NULL)
    {
        if((strcmp(temp->id,"1000001")==0) &&(strcmp(temp->name,"nikhila priya")==0) &&(strcmp(temp->dob,"22-09-2001")==0) &&(strcmp(temp->father_name,"kishore kumar")==0) &&(strcmp(temp->mother_name,"jyothirmayi")==0)  ||
           (strcmp(temp->id,"1000002")==0) &&(strcmp(temp->name,"varshan")==0) &&(strcmp(temp->dob,"23-04-2002")==0) &&(strcmp(temp->father_name,"ramprasad")==0) &&(strcmp(temp->mother_name,"lakshmi")==0)  ||
           (strcmp(temp->id,"1000003")==0) &&(strcmp(temp->name,"himaja")==0) &&(strcmp(temp->dob,"09-09-1999")==0) &&(strcmp(temp->father_name,"ravindra")==0) &&(strcmp(temp->mother_name,"chinmayi")==0)  ||
           (strcmp(temp->id,"1000004")==0) &&(strcmp(temp->name,"sania jain")==0) &&(strcmp(temp->dob,"17-01-2000")==0) &&(strcmp(temp->father_name,"vikram jain")==0) &&(strcmp(temp->mother_name,"pinky")==0)  ||
           (strcmp(temp->id,"1000005")==0) &&(strcmp(temp->name,"rahul nair")==0) &&(strcmp(temp->dob,"30-11-1998")==0) &&(strcmp(temp->father_name,"sujeeth")==0) &&(strcmp(temp->mother_name,"mounika")==0))
           {
            cunt++;
            if(cunt>1)
            {
                not_again();
                break;
            }
            voting();
           }
           else
           {
               R--;
               count++;
               if(count==3)
               {
                   stop();
                   break;
               }
               printf("\n\n\n\n");
               printf("\t\tYour VOTER ID / NAME / BIRTH DATE / FATHER NAME / MOTHER NAME is wrong\n\n");
               Sleep(300);
               printf("\t\t\t\t\tPlease Re-enter\n\n");
               Sleep(300);
               system("pause");
               main_loges();
           }
           temp=temp->next;
    }
}



void voting()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t        * * * * * * list if candidates * * * * * *      \n\n\n");
    Sleep(300);
    printf("\t\t\t NAME - - - - - - - - - - - - - - - - - - -SYMBOL\n\n");
    Sleep(300);
    printf("\t\t\t 1. NARENDRA MODI (BJP)                    1. Lotus\n");
    Sleep(300);
    printf("\t\t\t 2. CHANDRABABU NAIDU (TDP)                2. Axe\n");
    Sleep(300);
    printf("\t\t\t 3. SONIA GANDHI (CPI)                     3. Hand\n");
    Sleep(300);
    printf("\t\t\t 4. MAMTA BENARJEE (AITC)                  4. Flower\n");
    Sleep(300);
    printf("\t\t\t 5.  SHARAD PAWAR(NCP)                     5. Clock\n");

    int B,j;
    printf("\t\t\tPlease enter your choice - - -     ");
    for(j=0;j<=1;j++)
    {
        scanf("%d",&B);
        if(B==1)
            count1++;
        if(B==2)
            count2++;
        if(B==3)
            count3++;
        if(B==4)
            count4++;
        if(B==5)
            count5++;
        if(B!=1 && B!=2 && B!=3 && B!=4 && B!=5)
        {
            printf("\t\t\tyour vote is INVALID\n");
            main_loges();
        }
    }
    int R;
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t\t If you want to see present winner Enter one(1) OR zero(0) for main loges\n");
    scanf("%d",&R);
    if(R==1)
        winner();
    if(R!=1)
        main_loges();
}


void admin()
{
    int B;
    printf("\n\n\n\n");
    printf("\t\t\tenter password to unlock admin panel\n\n");
    scanf("%d",&B);
    if(B==123456)
        show();
    else
        printf("WRONG PASSWORD\n");

}

void show()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t\t   How many votes who got\n\n\n");
    Sleep(500);
    printf("\t\t\t   NARENDRA MODI ----------------%d  votes\n",count1);
    Sleep(500);
    printf("\t\t\t   CHANDRABABU NAIDU ------------%d  votes\n",count2);
    Sleep(500);
    printf("\t\t\t   SONIA GANDHI -----------------%d  votes\n",count3);
    Sleep(500);
    printf("\t\t\t   MAMTA BENARJEE ---------------%d  votes\n",count4);
    Sleep(500);
    printf("\t\t\t   SARDAR PAWAR -----------------%d  votes\n",count5);
    Sleep(500);

    int R;
    printf("\t\t\t Enter one(1) for main loges OR zero(0) for exit\n");
    scanf("%d",&R);
    if(R==1)
        main_loges();
    else
        exitt();
}

void winner()
{
    system("cls");
    printf("\n\n\n\n");
    if(count1>count2 && count1>count3 && count1>count4 && count1>count5)
        printf("\t\t\tThe present Winner is NARENDRA MODI and he got %d votes\n\n\n\n\n",count1);
    if(count2>count1 && count2>count3 && count2>count4 && count2>count5)
        printf("\t\t\tThe present Winner is CHANDRABABU NAIDU and he got %d votes\n\n\n\n\n",count2);
    if(count3>count1 && count3>count2 && count3>count4 && count3>count5)
        printf("\t\t\tThe present Winner is SONIA GANDHI and she got %d votes\n\n\n\n\n",count3);
    if(count4>count1 && count4>count2 && count4>count3 && count4>count5)
        printf("\t\t\tThe present Winner is MAMTA BENARJEE and she got %d votes\n\n\n\n\n",count4);
    if(count5>count1 && count5>count2 && count5>count3 && count5>count4)
        printf("\t\t\tThe present Winner is SARDAR PAWAR and he got %d votes\n\n\n\n\n",count5);

    int T;
    printf("\t\t\t\t Enter one(1) for main loges or zero(0) for exit\n\n");
    scanf("%d",&T);
    if(T==1)
        main_loges();
    if(T!=1)
        exitt();
}



void stop()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\t - - - - - - - -(:- SORRY YOU CANNOT VOTE , WRONG ENTRY (3) TIMES\n\n");
    Sleep(500);
    printf("\t\t\t* * * * * * ------------PLEASE TRY AGAIN AFTER A FEW MOMENTS------------* * * * * * *\n\n\n");
    Sleep(500);
    printf("\t\t\t\t* * * * * ------THANK YOU------ * * * * *\n\n\n");
    Sleep(500);
}

void not_again()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t- - - - - - - - - - - - - - - YOU HAVE GIVEN YOUR VOTE SUCCESFULLY - - - - - - - - - - - - - - \n\n");
    Sleep(300);
    printf("\t\t\t\t- - - - - -SO,YOU CANNOT VOTE AGAIN- - - - - -\n\n\n");
    Sleep(300);
    printf("\t\t\t     if you want to see present winner Enter one(1) / two(2) for main loges /  zero(0) to exit\n\n");
    int R;
    scanf("%d",&R);
    if(R==1)
        winner();
    if(R==2)
        main_loges();
    if((R!=1) || (R!=2))
        exitt();
}



void exitt()
{
    system("cls");
    printf("\n\n\n\n");
    printf("\t\t\t- - - - - - - - - - - - -@ @ @ @ YOU HAVE VOTED SUCCESFULLY @ @ @ @- - - - - - - - - - - - -\n\n");
    Sleep(500);
    printf("\t\t\t\t\t\t* * * * * * *~~~~THANK YOU~~~~* * * * * * *\n\n\n");
    Sleep(500);
}
