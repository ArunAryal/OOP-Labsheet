// Write a program to read name, rollno, address, and phone number of each student in your class using structure. Store the information in file so that you can recover the information later. While recovering the information from the file sort the information alphabetically according to the name.
typedef struct student{
    char name[25];
    int roll;
    char address[25];
    long long phone;
} st;

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void arrange(int num){
    st *records = malloc(num * sizeof(st));
     if (records == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    //reading from file
    FILE *myfile;
    myfile=fopen("record.bin","rb");
     if (myfile == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    fread(records,sizeof(st),num,myfile);
    fclose(myfile);

    // sorting the information alphabetically according to the name
    st temp;
    for (int i=0;i<num;i++)
    {
        for (int j=i+1; j<num; j++)
        {
            if (strcmp((records[i]).name,(records[j]).name)>0)
            {
                temp = records[i];
                records[i] = records[j];
                records[j] = temp;
            }
        }
    }
    printf("Sorted data alphabetically according to the name.\n");


    // writing sorted data to the same file
    myfile=fopen("record.bin","wb");
    if (myfile == NULL) {
        printf("Error opening file for writing.\n");
        free(records);
        exit(1);
    }
    fwrite(records, sizeof(st),  num, myfile);	
    fclose(myfile);
    free(records);
}

void input(int num){
    st rec;
    FILE *myfile;
    myfile=fopen("record.bin","wb");
     if (myfile == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    for (int i = 0; i < num; i++)
    {
        printf("\nEnter the name of student:\t");
        scanf("%s",rec.name);
        printf("Enter the roll number:\t\t");
        scanf("%d",&rec.roll);
        printf("Enter the address:\t\t");
        scanf("%s",rec.address);
        printf("Enter the phone number:\t\t");
        scanf("%lld",&rec.phone);
        fwrite(&rec,sizeof(rec),1,myfile);
    }
    fclose(myfile);
    printf("Record Added!!\n");
}

void displayRecord()
{
    st rec;
    FILE *myfile;
    int count=0;
    myfile=fopen("record.bin","rb");
     if (myfile == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    printf("\nName\t\t\tRoll No.\t\tAddress\t\t\tPhone Number\n");
    while(fread(&rec,sizeof(rec),1,myfile)==1)
    {
        printf("%s\t\t\t%d\t\t\t%s\t\t\t%lld\n",rec.name,rec.roll,rec.address,rec.phone);
        count++;
    }
    fclose(myfile);
    if(count==0)
    {
        printf("No record Found");
    }
    else
    {
        printf("%d Records Found",count);
    }
}


int main() {
    int num;
    printf("Enter the number of student:\t");
    scanf("%d",&num);
    input(num);
    arrange(num);
    displayRecord();
    return 0;
}