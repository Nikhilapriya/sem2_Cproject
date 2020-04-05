#include<stdio.h>
#include<string.h>

void display(){
    printf("\n\t\t\t(1)NARENDRA MODI ----->BJP\n\t\t\t(2)CHANDRA BABU NAIDU ----->TDP\n\t\t\t(3)MAMTA BENERJEE ----->AITC\n\t\t\t(4)D.RAJA ----->CPI\n\t\t\t(5)SONIA GANDHI ----->INC\n\t\t\t(6)SHARAD PAWAR ----->NCP");
}
int main(){
int vote_no,zero,one,bjp,tdp,aitc,cpi,inc,ncp,v;
bjp=tdp=aitc=cpi=inc=ncp=0;
char name[10],dob[10],pwdname[10],pwddob[10],pass[10],ch,pwd[10];
int c=0,i=0;
printf("\t\t\t\t\t*********************ELECTRONIC VOTING MACHINE*********************\t\t\t\t\t\n"    );
printf("\t\tPlease LOGIN to proceed : \n");
printf("\t\t\t1)NAME\t:\t");
gets(name);
printf("\t\t\t2)DATE OF BIRTH(in ddmmyy format)\t:\t");
gets(dob);
//printf("%s\t%s\n",name,dob);
printf("\t\t\t3)PASSWORD\t:\t");
while(c<4){
    pwddob[c]=dob[5+c-1];
    c++;
}pwdname[4]='\0';
//printf("dob=%s\n",pwddob);
while(i<4){
    pwdname[i]=name[i];
    i++;
}pwdname[4]='\0';
//printf("name=%s\n",pwdname);
strcat(pwdname,pwddob);
//printf("%s\n",pwdname);
//printf("enter pwd: ");
for(i=0;i<8;i++){
        ch=getch();
        pass[i]=ch;
        ch='*';
        printf("%c",ch);
    }
strcpy(pwd,pwdname);
//printf("%s",pwd);
//printf("\n%s\n",pass);
if(strcmp(pwd,pass)==0){
    printf("\nLOGIN succesfull!!!!\n");
    printf("press 0 to cast a vote\n");
    scanf("%d",&zero);
    if(zero == 0){
        //printf("\n\t\t\t(1)NARENDRA MODI ----->BJP\n\t\t\t(2)CHANDRA BABU NAIDU ----->TDP\n\t\t\t(3)MAMTA BENERJEE ----->AITC\n\t\t\t(4)D.RAJA ----->CPI\n\t\t\t(5)SONIA GANDHI ----->INC\n\t\t\t(6)SHARAD PAWAR ----->NCP");
        display();
    }
    printf("\nplease select your choice of vote\n");
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
                  break;
    }
    printf("enter 1 to view the results\n");
    scanf("%d",&one);
    if(one == 1){
        printf("THE ELECTION RESULTS ARE\n\nbjp=%d\ntdp=%d\naitc=%d\ncpi=%d\ninc=%d\nncp=%d\n",bjp,tdp,aitc,cpi,inc,ncp);
    }
    else
        exit(0);
    /*printf("1. vote\n2. exit\n");
    scanf("%d",&v);
    if(v==1){
        login();
    }
    else exit(0);*/
}
else
    printf("\nLOGIN FAILED!!!!!!\n");
    exit(0);

}

