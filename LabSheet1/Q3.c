//Store and retrieve the name of the students and obtained marks in c programming in 1st semester using structure.
typedef struct student{
    char name[25];
    float marks;
} st;
#include<stdio.h>
# define max 50

void input(int num, st *rec){
    // printf("This is input function\n");
    for (int i = 0; i < num; i++)
    {
        printf("Enter the name of student:\t\t\t");
        scanf("%s",&rec[i].name);
        printf("Enter the marks of student in C programming:\t");
        scanf("%f",&rec[i].marks);
    }
    
}

void display(int num, st *rec){
    // printf("This is output function\n");
    printf("\nName\t\t\tMarks in C\n");
    for (int i = 0; i < num; i++)
    {
        printf("%s\t\t\t",rec[i].name);
        printf("%.2f\n",rec[i].marks);
    }

}

int main() {
    int num;
    st rec[max];
    printf("Enter the number of student whose data you want to enter:\t");
    scanf("%d",&num);
    input(num,rec);
    display(num,rec);
    return 0;
}