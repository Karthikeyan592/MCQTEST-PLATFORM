
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>
#include<math.h>
#include<conio.h>
#include<time.h>

#include "password.c"
#include "username.c"
void stup(){
    int tn, i, count=0;
    char tname[100], sname[100], snum[100], dum[10], a1[50], tr[100], ta[100], du[50];
    system("cls");
    system("color F5");
    printf(" PSG EXAMINATION     \\ +\t\t\t\t\t\t\t\t\t\t\t   | X\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("<-  ->  G | PSG ONLINE TEST PLATFORM |..\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n\n\n\n");
    printf("\n            \t|\t Tests Available to write:");
    FILE*t;
    t=fopen("globaltest.txt", "r");
    int line = 0;
    char input[512];
    while( fgets( input, 512, t )) {
    line++;
    printf("\n            \t|\t -->%s",input);
    }
    fclose(t);
    printf(".");
    gets(du);
    printf("\n\n            \t|\t Give the test name to start the test: ");
    gets(tname);


   system("cls");
    system("color F5");
    printf(" PSG EXAMINATION     \\ +\t\t\t\t\t\t\t\t\t\t\t   | X\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n");
    printf("<-  ->  G | PSG ONLINE TEST PLATFORM |..\n");
    printf("----------------------------------------------------------------------------------------------------------------------\n\n\n\n");
    printf("\n\t\t\t\t      * Test Name : ~ %s ~ *\n\n",tname);
    printf("            \t\t Your name:");
    gets(sname);
    printf("\n            \t\t Your roll number:");
    gets(snum);
    printf("\n\n\n            \t\t Enter 'start' to start the test:");
    gets(dum);
    if(strcmp(dum,"start")==0){
        system("cls");
        system("color F5");
        printf(" PSG EXAMINATION     \\ +\t\t\t\t\t\t\t\t\t\t\t   | X\n");
        printf("----------------------------------------------------------------------------------------------------------------------\n");
        printf("<-  ->  G | PSG ONLINE TEST PLATFORM |..\n");
        printf("----------------------------------------------------------------------------------------------------------------------\n\n\n\n");
        printf("            \t\t Read the questions and give the option as answer - All the best\n");
        tn = strlen(tname);
        tname[tn+0]='.';
        tname[tn+1]='t';
        tname[tn+2]='x';
        tname[tn+3]='t';
        tname[tn+4]='\0';
        FILE*t1;
        t1=fopen(tname, "r");
        int line = 0;

        char in[512];

        while( fgets( in, 512, t1 )) {
		line++;
		printf("%s",in);
	    }
        fclose(t1);
        printf("\n\n            \t\t Give the correct option:\n\n");
        FILE*x;
        x=fopen("answer.txt","w");
        for(i=1;i<=5;i++){
                printf("            \t\t %d. ",i);
                gets(a1);
                fprintf(x,"%s\n",a1);

        }
        fclose(x);
        FILE*lo;
        lo=fopen("answer.txt","r");
        strcpy(ta, tname);
        FILE*t2;
        ta[tn+0]='a';
        ta[tn+1]='n';
        ta[tn+2]='s';
        ta[tn+3]='.';
        ta[tn+4]='t';
        ta[tn+5]='x';
        ta[tn+6]='t';
        ta[tn+7]='\0';
        t2=fopen(ta, "r");
        int li8 = 0, li=0;
        char in3[512], in4[512];
        while( fgets( in3, 512, t2 )) {
		li8++;
            while( fgets( in4, 512, x )) {
            li++;
            if(strcmp(in3,in4)==0){
                count++;
            }
            break;

            }
        }
        fclose(t2);
        fclose(lo);
        strcpy(tr, tname);
        FILE*q;
        tr[tn+0]='r';
        tr[tn+1]='e';
        tr[tn+2]='s';
        tr[tn+3]='.';
        tr[tn+4]='t';
        tr[tn+5]='x';
        tr[tn+6]='t';
        tr[tn+7]='\0';
        q=fopen(tr, "a");
        printf("            \t\t rollno:%s - %s - %d marks obtained.",snum,sname,count);
        fprintf(q,"rollno:%s - %s - %d marks obtained.\n",snum,sname,count);
        fclose(q);
        printf("\n\t\t\t\t\tPress any key to continue");
        getch();
        main();
    }
    else{
        stup();
    }
    }



typedef struct{
	char login_id[50];
	char login_pass[50];
}signin;
typedef struct{
	char chk[100];
}check1;
check1 chck1[100];
signin log_in[100];
void login(){
	system("cls");
	fflush(stdin);

	system("color F5");//FC white red and 0C black red
	printf(" PSG EXAMINATION     \\ +\t\t\t\t\t\t\t\t\t\t\t   | X\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("<-  ->  G | PSG ONLINE TEST PLATFORM |..\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("\n\n\n");

	//delay(100);
	int i=0;
	char p[200]="\t\t\t\t\t               \"O U R M A I L\"          \n\n\n";
	while (p[i]!='\0')
	{
		printf("%c",p[i]);
		i++;
	}

	printf("\t\t\t\t\t       'Sign in to continue to Gmail'     \n");
	printf("\t\t\t\t\t____________________________________________\n");
	printf("\t\t\t\t\t|                                          |\n");
	printf("\t\t\t\t\t|              Enter   Cancel              |\n");
	printf("\t\t\t\t\t|              -----   ------              |\n");
	printf("\t\t\t\t\t|                                          |\n");
	printf("\t\t\t\t\t|   Login ID: ");
	fflush(stdin);
	gets(log_in[i].login_id);

	//for checking username exists or not
	FILE *secret;
	secret=fopen("abc.pop","r");
	char x='y';
	int line_no=1;
	int abc=0;

	while(x!=EOF){
			x=fgetc(secret);
			chck1[line_no].chk[abc]=x;
			abc++;
			if(x=='\n')
			{
				line_no++;
				abc=0;
			}

			if(x==EOF)break;
		}

	int flag=0;
	int k;

	int len1=0,len2=0;
	//printf("%s",cpy_id);
	//printf("\n%s",lencnt);
	for(k=2;k<=line_no;k+=6){
			len1=strlen(log_in[i].login_id);
			len2=strlen(chck1[k].chk);
			chck1[k].chk[len2-1]=NULL;
		if(strcmp(log_in[i].login_id,chck1[k].chk)!=0){
			flag=0;
		}
		else{
			flag=1;
			break;
		}
	}
	if(flag==0){
		char opt5[3];

		printf("\t\t\t\t\t|                                          |\n");
		printf("\t\t\t\t\t|          Sorry, ourmail doesn't          |\n");
		printf("\t\t\t\t\t|           recognize that email.          |\n");
		printf("\t\t\t\t\t|__________________________________________|\n");
		printf("\t\t\t\t\t\t     Try Again?(y/n): ");
		gets(opt5);
		if(strcmp(opt5,"y")==0 || strcmp(opt5,"Y")==0){
			login();
		}
		else if(strcmp(opt5,"n")==0 || strcmp(opt5,"N")==0){
			exit(1);
		}
		else{
			printf("\t\t\t\t\t\t  Returning to main menu\t\n\t\t\t\t\t\t     (Press any key)");
			getch();
			return;
		}


	}//for password check
	else{

		//for checking password matched or not
		char password[50], ch;
		//strcpy(password,log[i].login_pass);
   		int x;

		printf("\t\t\t\t\t|                User exits                |\n");
		printf("\t\t\t\t\t|   Password: ");
   		while (1){
      		if (x < 0){
         		x = 0;
      		}

      		ch = getch();

	      	if (ch == 13)
    	     	break;
      		else if (ch == 8 ){ /*ASCII value of BACKSPACE */
         		putch('\b');
         		putch(NULL);
         		putch('\b');
         		x--;
         		continue;
      			}

      		log_in[i].login_pass[x++] = ch;
      		ch = '*';
      		putch(ch);
   		}
   		log_in[i].login_pass[x] = '\0';

		char str3[50];
		int len1,len=0,len2=0;
		flag=0;
		k=k+2;
//		printf("\n%s",chck1[k].chk);
//		printf("\n%s",log_in[i].login_pass);
		len1=strlen(log_in[i].login_pass);
		len2=strlen(chck1[k].chk);
		//strncpy(str3,chck1[k].chk,len-1);
//		char cpy_loginpass[50];
//		char *login_pass;
//		login_pass=(char *)malloc(50*sizeof(char));
//		strcpy(cpy_loginpass,log_in[i].login_pass);
//
//		login_pass=cpy_loginpass;
//		len1=strlen(login_pass);
//		login_pass[len1]='\0';

//		for(k=4;k<=line_no;k+=6){
//			len=strlen(log_in[i].login_pass);
//			len2=strlen(chck1[k].chk);

			chck1[k].chk[len2-1]=NULL;
			if(strcmp(log_in[i].login_pass,chck1[k].chk)!=0 ){
				flag=0;
			}
			else{
				flag=1;
//				break;

			}
//		}
//			printf("\nlen enter %d",len1);
//			printf("\nlen file %d",len2);
//				printf("\n%s\n",cpy_loginpass);
//				printf("%s",chck1[4].chk);
//
//				getch();

		if(flag==0){ //incorrect password;
			char opt6[3];

			printf("\n\t\t\t\t\t|                                          |\n");
			printf("\t\t\t\t\t|            Password InCorrect            |\n");
			printf("\t\t\t\t\t|__________________________________________|\n");
			printf("\t\t\t\t\t\t     Try Again?(y/n): ");
			gets(opt6);
			if(strcmp(opt6,"y")==0 || strcmp(opt6,"Y")==0){
 				login();
			}
			else if(strcmp(opt6,"n")==0 || strcmp(opt6,"N")==0){
				exit(1);
			}
			else{
				printf("\t\t\t\t\t\t  Returning to main menu\t\n\t\t\t\t\t\t     (Press any key)\n");
				getch();
				return;
			}

		}
		else{
			printf("\n\t\t\t\t\t|             Password Correct             |\n");
			printf("\t\t\t\t\t|                                          |\n");
			printf("\t\t\t\t\t|__________________________________________|");
			delay3(800);

			loading(log_in[i].login_id);
			//getch();
			account(log_in[i].login_id);
		}

//	printf("\n%s",chck[1].chk);
//	printf("\n%s",chck[5].chk);

	fclose(secret);
	}


}

loading(char loadname[]){
	system("cls");
	fflush(stdin);
	char load[100]="*************************************************|";
	system("color FC");
	printf(" PSG EXAMINATION     \\ +\t\t\t\t\t\t\t\t\t\t\t   | X\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("<-  ->  G | PSG ONLINE TEST PLATFORM |..\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	int i=0;

	printf("\n\n");
	printf("\t\t\t\t\t     Loading  %s....",loadname);
	printf("\n\t\t\t\t   ___________________________________________________");
	printf("\n\t\t\t\t   |");
	while (load[i]!='\0')
	{
		printf("%c",load[i]);
		delay3(50);
		i++;
	}

	delay3(700);

}
void account(char a[]){
    int opt, n1, nl, rl, dumm;
	char choice1[100];
	char testn[100];
	char testa[50];
	char testr[100];
	char tttn[100];
	system("cls");

	system("color F5");
	printf(" PSG EXAMINATION     \\ +\t\t\t\t\t\t\t\t\t\t\t   | X\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("<-  ->  G | PSG ONLINE TEST PLATFORM |..\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\tHi!, Welcome to Ourmail mails\n\n");
	printf("\n   Mail +\t|\t\t\t\t\t\t\t\t\t\t\t\t   | *");
	printf("\n            \t|\t");
	printf("\n            \t|\t");
	printf("\n            \t|\t   What you want to Do,Sir?");
	printf("\n            \t|\t");
	printf("\n            \t|\t  ___________________");
	printf("\n            \t|\t  |   New Test       |   To create a new test.   (write new)");
	printf("\n            \t|\t  -------------------");
	printf("\n            \t|\t  ___________________");
	printf("\n            \t|\t  | Result   - Tests |  To check result for the test.    (write tests)");
	printf("\n            \t|\t  -------------------");
	printf("\n            \t|\t  ___________________");
	printf("\n            \t|\t  |      Logout      |  To logout from current userid.    (write logout)");
	printf("\n            \t|\t  -------------------");
	printf("\n            \t|");
	printf("\n            \t|\t  Enter Your choice: ");
	gets(choice1);
	if(strcmp(choice1,"new")==0){
        system("cls");

	system("color F5");
	printf(" PSG EXAMINATION     \\ +\t\t\t\t\t\t\t\t\t\t\t   | X\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("<-  ->  G | PSG ONLINE TEST PLATFORM |..\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("\n            \t|\t");
	printf("\n            \t|\t Give Test name: ");
	gets(testn);
	nl = strlen(testn);
	FILE*t;
	t=fopen("globaltest.txt", "a");
	fprintf(t,"\n  %s\n",testn);
	fclose(t);
	FILE*z;
	strcpy(testr, testn);
	testr[nl+0]='r';
    testr[nl+1]='e';
    testr[nl+2]='s';
    testr[nl+3]='.';
    testr[nl+4]='t';
    testr[nl+5]='x';
    testr[nl+6]='t';
    testr[nl+7]='\0';
	z=fopen(testr,"w");
	fprintf(z,"            \t\tResult for %s\n", testn);
	fclose(z);

	strcpy(testa, testn);
	int i=1, n;
    char data[25];
    char q[500];
    char option[100];
    char ans[100];
	nl = strlen(testn);
	testn[nl+0]='.';
    testn[nl+1]='t';
    testn[nl+2]='x';
    testn[nl+3]='t';
    testn[nl+4]='\0';
    testa[nl+0]='a';
    testa[nl+1]='n';
    testa[nl+2]='s';
    testa[nl+3]='.';
    testa[nl+4]='t';
    testa[nl+5]='x';
    testa[nl+6]='t';
    testa[nl+7]='\0';

    FILE*a;
    a=fopen(testa, "w");
    FILE *p;
    p=fopen(testn,"w");
    for(i=1;i<=5;i++)
    {
        fprintf(p,"            \t|\t %d. ",i);
        printf("\n            \t|\t %d. ",i);
        gets(q);
        fprintf(p,"%s\n\n",q);
        fprintf(p,"            \t|\t A. ");
        printf("            \t|\t A. ");
        gets(option);
        fprintf(p,"%s\n",option);
        fprintf(p,"            \t|\t B. ");
        printf("            \t|\t B. ");
        gets(option);
        fprintf(p,"%s\n",option);
        fprintf(p,"            \t|\t C. ");
        printf("            \t|\t C. ");
        gets(option);
        fprintf(p,"%s\n",option);
        fprintf(p,"            \t|\t D. ");
        printf("            \t|\t D. ");
        gets(option);
        fprintf(p,"%s\n\n",option);
        printf("            \t|\t Ans:");
        gets(ans);
        printf("            \t|\t \n\n");
        fprintf(a,"%s\n",ans);




    }

    fclose(p);
    fclose(a);
    printf("\n\t\t\t\t\tPress any key to continue");
    getch();
    account(a);



	}
	else if(strcmp(choice1,"tests")==0){
        system("cls");

	system("color F5");
	printf(" PSG EXAMINATION     \\ +\t\t\t\t\t\t\t\t\t\t\t   | X\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("<-  ->  G | PSG ONLINE TEST PLATFORM |..\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("\n            \t|\t");
	printf("\n            \t|\t Available Tests: ");
	FILE *usraccnt2;
		int lenght=0;


        FILE*tz;
        tz=fopen("globaltest.txt", "r");
        int line = 0;

        char kp[512];

        while( fgets( kp, 512, tz )) {
        line++;
        printf("\n            \t|\t--> %s",kp);
        }
        fclose(tz);
        printf("\n\n            \t|\tGive test name to view the result: ");
        gets(tttn);
        rl=strlen(tttn);

        FILE*l;
        tttn[rl+0]='r';
        tttn[rl+1]='e';
        tttn[rl+2]='s';
        tttn[rl+3]='.';
        tttn[rl+4]='t';
        tttn[rl+5]='x';
        tttn[rl+6]='t';
        tttn[rl+7]='\0';
        l=fopen(tttn, "r");
        int ly = 0;

        char ik[512];

        while( fgets( ik, 512, l )) {
        ly++;
        printf("\n            \t|\t%s",ik);
        }
        fclose(l);
        printf("\n\t\t\t\t\tPress any key to continue");
        getch();
        account(a);
	}
	else if(strcmp(choice1,"logout")==0){
        printf("\n\t\t\t\t\tPress any key to continue");
        getch();
        main();
	}
    else{
				account(a);
    }
}
void delay3(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

typedef struct{
	char f_name[100];
	char l_name[100];
	char username[100];
	char gender[10];
}signup;

typedef struct{
	char chk[100];//structure for filing
}check;

check chck[100];
signup sign[100];
int num;
void signup_account();


void signup_account(){
	system("cls");
	fflush(stdin);
	int i;
	i=num;
	num++;
	system("color F5");
	printf(" PSG EXAMINATION     \\ +\t\t\t\t\t\t\t\t\t\t\t   | X\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("<-  ->  G | PSG ONLINE TEST PLATFORM |..\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("\n\n\n");

	delay3(100);
	printf("\t\t\t\t  ___________________________________\n");
	printf("\t\t\t\t ");
	char title[200]="*|   Create your OurMail Account   |*";
	while (title[i]!='\0'){

		printf("%c",title[i]);
 	   	delay3(100);
		i++;
	}
	delay3(100);
	printf("\n\t\t\t\t *|_________________________________|*\n");
	printf("\t\t\t\t *************************************\n");
	printf("\t\t\t\t *************************************\n\n");



	//For name
	fflush(stdin);
	printf("\t\t\t\t\t________________________\n");
	printf("\t\t\t\t\t|    Enter your Name   |\n");
	printf("\t\t\t\t\t|______________________|\n");

	printf("\t\t\t\t    First Name: ");
	gets(sign[i].f_name);
	fflush(stdin);
	printf("\t\t\t\t    Last Name: ");
	gets(sign[i].l_name);
	fflush(stdin);
	printf("\n\t\t\t\t -------------------------------------\n\n");

	//For user name
	printf("\t\t\t\t\t________________________\n");
	printf("\t\t\t\t\t|  Creating a Username |\n");
	printf("\t\t\t\t\t|______________________|\n");
	printf("\t\t\t\t      Example: user or us or us11\n");
	printf("\t\t\t\t               ----    --    ----\n");

	signup_username();
	printf("\n\t\t\t\t -------------------------------------\n\n");

	//For paswword
	signup_password();
	printf("\n\t\t\t\t -------------------------------------\n\n");



	//For Gender
	printf("\t\t\t\t\t________________________\n");
	printf("\t\t\t\t\t|  Selecting a Gender  |\n");
	printf("\t\t\t\t\t|______________________|\n");
	printf("\t\t\t\t      Male* or Female* or other*\n");
	printf("\t\t\t\t    Enter your Gender: ");
	gets(sign[i].gender);
	while(1){
		if(strcmp(sign[i].gender,"Male")==0 || strcmp(sign[i].gender,"male")==0 || strcmp(sign[i].gender,"MALE")==0){
			fflush(stdin);
			printf("\n\t\t\t\t -------------------------------------\n\n");			break;
		}
		else if(strcmp(sign[i].gender,"Female")==0 || strcmp(sign[i].gender,"female")==0 || strcmp(sign[i].gender,"FEMALE")==0){
			fflush(stdin);
			printf("\n\t\t\t\t -------------------------------------\n\n");			break;
		}
		else if(strcmp(sign[i].gender,"Other")==0 || strcmp(sign[i].gender,"other")==0 || strcmp(sign[i].gender,"OTHER")==0){
			fflush(stdin);
			printf("\n\t\t\t\t -------------------------------------\n\n");			break;
		}
		else{
			fflush(stdin);
			printf("\n\t\t\t\t      Don't enter new option!!\n\t\t\t\t      Enter same as above mention.\n");
			printf("\t\t\t\t    Enter your Gender: ");
			gets(sign[i].gender);

		}
	}





	//filing
	FILE *signup;
	char *filename;
	int y;
	char cpy_username[100];
	filename=(char *)malloc(100*sizeof(char));
	strcpy(cpy_username,user.acc_username);

	filename=cpy_username;
	y=strlen(filename);
	filename[y]='.';
	filename[y+1]='t';
	filename[y+2]='x';
	filename[y+3]='t';
	filename[y+4]='\0';

	signup=fopen(filename,"w");

	fprintf(signup,"\t\t'USER DATA'\n");
	fprintf(signup,"Name: %s",sign[i].f_name);
	fprintf(signup," %s",sign[i].l_name);
	fprintf(signup,"\nUsername: %s",user.acc_username);
	fprintf(signup,"\nGender: %s",sign[i].gender);
	fprintf(signup,"\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	fprintf(signup,"\t\t'MAIL BOX'\n");
	fclose(signup);


	//for checking username exist or not
	FILE *secret;
	secret=fopen("abc.pop","a+");
	char x='y';
	int line_no=1;
	int abc=0;

	while(x!=EOF){
			x=fgetc(secret);
			chck[line_no].chk[abc]=x;
			abc++;
			if(x=='\n')
			{
				line_no++;
				abc=0;
			}

			if(x==EOF)break;
		}

	int flag=0;
	int k;

	int len=0,len2=0;
	for(k=2;k<=line_no;k+=6){
			len=strlen(user.acc_username);
			len2=strlen(chck[k].chk);
			chck[k].chk[len2-1]=NULL;
		if(strcmp(user.acc_username,chck[k].chk)!=0 ){
			flag=0;
		}
		else{
			flag=1;
			break;
		}
	}
	if(flag==0){
		fprintf(secret,"User name: \n");
		fprintf(secret,"%s\n",user.acc_username);
		fprintf(secret,"Password: \n");
		fprintf(secret,"%s",pass.acc_pass);
		fprintf(secret,"\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
	}
	else
		printf("User already exits");


	fclose(secret);
	printf("\n\t\t\t\t\tPress any key to continue");
    getch();
	main();


}

int main()
{
    system("cls");
    system("color F5");
    int i,l1,l2;

    printf(" PSG EXAMINATION     \\ +\t\t\t\t\t\t\t\t\t\t\t   | X\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("<-  ->  G | PSG ONLINE TEST PLATFORM |..\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("\n\n\n");
	delay3(100);
	printf("\t\t\t\t   _____________________________________\n");
	printf("\t\t\t\t ");
	char title[200]="*|   Welcome to Online Test Platform   |*";
	while (title[i]!='\0'){
		printf("%c",title[i]);
 	   	delay3(100);
		i++;
	}
	delay3(100);
	printf("\n\t\t\t\t *|_____________________________________|*\n");
	printf("\t\t\t\t   *************************************\n");
	printf("\t\t\t\t   *************************************\n\n");
	printf("\t\t\t\t      ________________________________\n");
	printf("\t\t\t\t      |    Enter the type of login   |\n");
	printf("\t\t\t\t      |______________________________|\n\n\n");
	printf("\t\t\t\t      < 1 > Tutor login\n");
	printf("\t\t\t\t      < 2 > Student Login\n\n\n\n\n\n");
	printf("\t\t\t\t Give the input as 1 or 2 :");
	scanf("%d",&l1);
    if(l1==1)
    {

        system("cls");
		system("color F5");
		printf(" PSG EXAMINATION     \\ +\t\t\t\t\t\t\t\t\t\t\t   | X\n");
		printf("----------------------------------------------------------------------------------------------------------------------\n");
		printf("<-  ->  G | PSG ONLINE TEST PLATFORM |..\n");
		printf("----------------------------------------------------------------------------------------------------------------------\n\n\n\n");
		printf("\t\t\t\t       ___________________\n");
		printf("\t\t\t\t      *|    LOGIN PAGE   |*\n");
        printf("\t\t\t\t       |_________________|\n\n\n");
        printf("\t\t\t\t      < 1 > Sign in \n");
        printf("\t\t\t\t      < 2 > New User - Sign up\n\n\n\n\n\n");
        printf("\t\t\t\t Give the input as 1 or 2 :");
        scanf("%d",&l2);
        if(l2==2)
        {
            signup_account();
        }
        else if(l2==1)
        {
            login();
        }

    }
    else if(l1==2){
        stup();
    }
}
