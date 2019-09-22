/* Program to create a Student structure array, pass it to function, print that array
in that function*/

#include<stdio.h>
#include<string.h>

struct Student {
 char name[20];
 int rollNo;
};
void printstruct(struct Student studentArray[5]);
void main()
{
     struct Student studentArray[5];
     strcpy(studentArray[0].name,"Sai");
     studentArray[0].rollNo=31;
     strcpy(studentArray[1].name,"Kumar");
     studentArray[1].rollNo=32;
     strcpy(studentArray[2].name,"ramesh");
     studentArray[2].rollNo=33;
     strcpy(studentArray[3].name,"suresh");
     studentArray[3].rollNo=56;
     strcpy(studentArray[4].name,"ravi");
     studentArray[4].rollNo=23;
     printstruct(studentArray);     
}

void printstruct(struct Student studentArray[5])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Name : %s\trollNo : %d\n",studentArray[i].name,studentArray[i].rollNo);
    }
}