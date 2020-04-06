#include<stdio.h>
#include<string.h>
int login(){
int vote_no,zero,one,bjp,tdp,aitc,cpi,inc,ncp,v;
bjp=tdp=aitc=cpi=inc=ncp=0;
char name[10],dob[10],pwdname[10],pwddob[10],pass[10],ch,pwd[10];
int c=0,i=0;
printf("\t\tPlease LOGIN to proceed : \n");
printf("\t\t\t1)NAME\t:\t");
scanf("%s",name);
printf("\t\t\t2)DATE OF BIRTH(in ddmmyy format)\t:\t");
scanf("%s",dob);
printf("\t\t\t3)PASSWORD\t:\t");
while(c<4){
    pwddob[c]=dob[5+c-1];
    c++;
}
pwdname[4]='\0';
while(i<4){
    pwdname[i]=name[i];
    i++;
}
pwdname[4]='\0';
strcat(pwdname,pwddob);
for(i=0;i<8;i++){
        ch=getch();
        pass[i]=ch;
        ch='*';
        printf("%c",ch);
    }
strcpy(pwd,pwdname);
if(strcmp(pwd,pass)==0){
    printf("\nLOGIN succesfull!!!!\n");
    return 1;
}
else {
    printf("\nLOGIN UNSUCCESFUL!!!\n");
    exit(0);}}

void display(){
    printf("\n\t\t\t(1)NARENDRA MODI ----->BJP\n\t\t\t(2)CHANDRA BABU NAIDU ----->TDP\n\t\t\t(3)MAMTA BENERJEE ----->AITC\n\t\t\t(4)D.RAJA ----->CPI\n\t\t\t(5)SONIA GANDHI ----->INC\n\t\t\t(6)SHARAD PAWAR ----->NCP");
}
void vote(){
    char name[10],dob[10],pwdname[10],pwddob[10],pass[10],ch,pwd[10];
    int c=0,i=0;
    int vote_no,zero,one,bjp,tdp,aitc,cpi,inc,ncp,v;
    bjp=tdp=aitc=cpi=inc=ncp=0;
    printf("\nchoose any one to cast ur vote\n");
    scanf("%d",&vote_no);
    switch(vote_no){
        case 1: printf("Thanks for voting!!! :):):)\n");
                bjp++;
                break;
        case 2: printf("Thanks for voting!!! :):):)\n");
                tdp++;
                break;
        case 3: printf("Thanks for voting!!! :):):)\n");
                aitc++;
                break;
        case 4: printf("Thanks for voting!!! :):):)\n");
                cpi++;
                break;
        case 5: printf("Thanks for voting!!! :):):)\n");
                inc++;
                break;
        case 6: printf("Thanks for voting!!! :):):)\n");
                ncp++;
                break;
        default : printf("Please enter right choice\n");
                  display();
                  vote();
    }
    printf("enter 2 to view reslts\n");
    int oneres;
    scanf("%d",&oneres);
    if(oneres==2)
    printf("THE ELECTION RESULTS ARE\n\nbjp=%d\ntdp=%d\naitc=%d\ncpi=%d\ninc=%d\nncp=%d\n",bjp,tdp,aitc,cpi,inc,ncp);
    else exit(0);
    printf("\n1)LOGIN TO VOTE\n2)exit\n\n");
}


int main(){
    int a;
    char name[10],dob[10],pwdname[10],pwddob[10],pass[10],ch,pwd[10];
    int c=0,i=0;
    int vote_no,zero,one,bjp,tdp,aitc,cpi,inc,ncp,v;
    bjp=tdp=aitc=cpi=inc=ncp=0;
    printf("\t\t\t\t\t\twelcome\n");
    printf("\n1)LOGIN TO VOTE\n2)exit\n\n");

    do{
    scanf("%d",&a);
    if(a==1){
    login();
    if(1){
        display();
        vote();}
        }
    else exit(0);
    }while(a!=0);
}
