// Write a program to read name, rollno, address, and phone number of each student in your class using structure. Store the information in file so that you can recover the information later. While recovering the information from the file sort the information alphabetically according to the name.
typedef struct student{
    char name[25];
    int roll;
    char address[25];
    int phone;
} st;

#include<stdio.h>
#include<string.h>
# define max 50

void input(int num,st *rec){
    // printf("This is input function\n");
    for (int i = 0; i < num; i++)
    {
        printf("Enter the name of student:\t");
        scanf("%s",&rec[i].name);
        printf("Enter the roll number:\t\t");
        scanf("%d",&rec[i].roll);
        printf("Enter the address:\t\t");
        scanf("%s",&rec[i].address);
        printf("Enter the phone number:\t\t");
        scanf("%d",&rec[i].phone);
    }
}

void arrange(int num,st *rec){
    char temp[25];
    // printf("This is arrange function\n");
    for (int i=0;i<num;i++)
    {
        for (int j=i+1; j<num; j++)
        {
            if (strcmp((rec+i)->name,(rec+j)->name)>0)
            {
                strcpy(temp,(rec+i)->name);
                strcpy((rec+i)->name,(rec+j)->name);
                strcpy((rec+j)->name,temp);
            }
        }
    }	
}

void display(int num,st *rec){
    // printf("This is Output function\n");
    printf("\nName\t\t\tRoll No.\t\tAddress\t\tPhone Number\n");
    for (int i = 0; i < num; i++)
    {
        printf("%s\t\t\t",rec[i].name);
        printf("%d\t\t\t",rec[i].roll);
        printf("%s\t\t\t",rec[i].address);
        printf("%d\n",rec[i].phone);
    }
}


int main() {
    st rec[max];
    int num;
    printf("Enter the number of student:\t");
    scanf("%d",&num);
    input(num,rec);
    arrange(num,rec);
    display(num,rec);
    return 0;
}