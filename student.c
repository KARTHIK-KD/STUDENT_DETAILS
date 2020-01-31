#include<stdio.h>
#include<string.h>
struct student
{
char sname[50],fathername[50],studentname[100],address[100],schoolname[50],username[50],password[50];
char name[50];
int sub,s1,s2,s3,s4,s5,regno,total,age;
float avg,per;
}s[100];
void main()
{
int reg,c=0,aa,n,k=0,kk=0,kkk=0,go;
void registers(int);
void login();
void mark(int);
void display(int);
go:
printf("WELCOME TO GOVERMENT COLLEGE OF TECHNOLOGY\n");
printf("1.REGISTER\n2.LOGIN\n3.ENTER STUDENT MARK\n4.DISPLAY STUDENT DETAILS\n5.EXIT\n");
printf("SELECT YOUR OPTION : ");
scanf("%d",&n);
switch(n)
{
	case 1:
		{
			registers(k);
			k++;printf("\n");goto go;
			break;
		}
	case 2:
		{
			login();printf("\n");goto go;
			break;
		}
	case 3:
		{
			mark(kk);kk++;printf("\n");goto go;	
			break;
		}
	case 4:
		{
			display(kkk);printf("\n");goto go;
			break;
		}
	case 5:
		{
			printf("THANKING YOU \n");
			break;
		}
	default:
		{
			printf("SORRY, WRONG CHOICE SELECTED...!");
			main(); 
		}
}
}
void registers(int k)
{
printf("	WELCOME TO GCT\n");
printf("		Enter Your Name         : ");
scanf("%s",&s[k].studentname);
printf("		enter your father name  : ");
scanf("%s",&s[k].fathername);
printf("		Enter your AGE          : ");
scanf("%d",&s[k].age);
printf("		Your percentage of 12th : ");
scanf("%f",&s[k].per);
printf("		Enter your Username     : ");
scanf("%s",&s[k].username);
printf("		Enter your password     : ");
scanf("%s",&s[k].password);
s[k].regno=k+1;
printf("\nYOUR REGISTER IS COMPLETED....!!HAI %s ,Welcome to goverment college of technology..!! ",s[k].studentname);
printf("\n              IT'S YOUR REGISTER NUMBER : %d\n",s[k].regno); 
}


void login()
{
int i=0,c=0;
char un[50],pass[50];
printf("GCT PORTAL\n");
printf("    Enter Your UserName : ");
scanf("%s",&un);
printf("    Enter your password : ");
scanf("%s",&pass);
while(s[i].regno != 0)
{
if((strcmp(un,s[i].username)==0)&&(strcmp(pass,s[i].password)==0) )
{
printf("**********LOGIN SUCCESSFULL***********\n");
c=1;
}
i++;
}
if(c==0)
{
printf("***********LOGIN FAILD***********\n");
}
}

void mark(int k)
{
int i=0,c=0;
char un[50],pass[50];
printf("STUDENT MARK\n");
printf("    Enter Your UserName : ");
scanf("%s",&un);
printf("    Enter your password : ");
scanf("%s",&pass);
while(s[i].regno != 0)
{
if((strcmp(un,s[i].username)==0)&&(strcmp(pass,s[i].password)==0) )
{
printf("Enter your register number:");
scanf("%d",&s[k].regno);
printf("Enter the marks1:");
scanf("%d",&s[k].s1);
printf("Enter the marks2:");
scanf("%d",&s[k].s2);
printf("Enter the marks3:");
scanf("%d",&s[k].s3);
printf("Enter the marks4:");
scanf("%d",&s[k].s4);
printf("Enter the marks5:");
scanf("%d",&s[k].s5);
s[k].total=s[k].s1+s[k].s2+s[k].s3+s[k].s4+s[k].s5;
s[k].avg=s[k].total/5.0;
c=1;
}
i++;
}
if(c==0)
{
printf("LOGIN FAILD\n");
}

}

void display(int k)
{
int reg,c=0;
printf("Enter your register number:");
scanf("%d",&reg); 
while(s[k].regno!=0)
{
if(reg==s[k].regno)
{
printf("	name =%s\n	regno=%d\n	total=%d\n	avg  =%f\n",s[k].studentname,s[k].regno,s[k].total,s[k].avg);
c=1;
}
k++;
}
if(c==1)
{
printf("Display Your details\n");
}
else
{
printf("Your Register number is wrong....plz enter your register number\n");
}
}










