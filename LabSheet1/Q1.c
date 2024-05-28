// Write a program to find the average expenditure of a company for each month of each year, each year and average over the range of years specified. Use arrays to construct a table, display the table of expenditure and find the sum and average.

#include <stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct expenditure
{
    int year;
    int month[12];
    float expenses[12];

}exp;

void soloanalysis(exp *e,int n)
{
    int in,yr;
    float sum=0;
    printf("\tEnter any year whose data you want to analyze:\t");
    scanf("%d",&in);
    for (int i = 0; i < n; i++)
    {
        if(in==e[i].year)
        yr=i;
    }
    system("cls");
    printf("\t\tData Analaysis of year %d \n",e[yr].year);
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
    printf("\tMonth\t\t\tExpenditure\n");
    for (int i = 0; i < 12; i++)
    {
    printf("\t%d\t\t\t%.3f\n",e[yr].month[i]+1,e[yr].expenses[i]);
    sum=sum+e[yr].expenses[i];
    }
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
    printf("\tTotal expenditure in year %d is %.3f\n",e[yr].year,sum);
    printf("\tThe average expenditure per month in year %d is %.3f",e[yr].year,sum/12);
}

void comparision(exp *e,int n)
{
    int y1,y2,n1=-1,n2=-1,temp=0;
    float sum=0;
    printf("\tEnter range of years for which you want comparision:\t");
    scanf("%d%d",&y1,&y2);
    for (int i = 0; i < n; i++){
        if(y1==e[i].year)
        n1=i;
        if(y2==e[i].year)
        n2=i;
    }
    if(n1==-1 || n2==-1)
    {
        printf("Sorry! please input valid range of years");
        getche();
        exit(1);
    }
    if(n1>n2){
        temp=n1;
        n1=n2;
        n2=temp;
    }
    system("cls");
    for ( int i = n2; i >= n1; i--)
    {
        printf("\t\tData Analaysis of year %d \n",e[i].year);
        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
        printf("\tMonth\t\t\tExpenditure\n");
        for (int j = 0; j < 12; j++)
        {
            printf("\t%d\t\t\t%.3f\n",(e[i].month[j])+1,e[i].expenses[j]);
            sum=sum+e[i].expenses[j];
        }
        printf("__________________________________________________________\n");
        printf("\tTotal expenditure in year %d is %.3f\n",e[i].year,sum);
        printf("\tThe average expenditure per month in year %d is %.3f\n\n\n\n",e[i].year,sum/12);
    }
    printf("\tOVERALL STATS BETWEEN %d AND %d :\n",e[n2].year,e[n1].year);
        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
    printf("\tTotal expenditure from year %d to %d is %.3f\n",e[n2].year,e[n1].year,sum);
    printf("\tThe average expenditure per year between %d to %d is %.3f\n",e[n2].year,e[n1].year,sum/n); 
    printf("\tThe average expenditure per per month between %d to %d is %.3f",e[n2].year,e[n2].year,sum/(n*12));   
}

int main()
{
    exp e[50];
    int n=0,ch;
    system("cls");
    printf("\tFor how many past years would you like to enter data?\t");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        system("cls");
        e[i].year=2024-i-1;
        printf("\n\t\tData Entry for year %d \n",e[i].year);
         printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n");
        for(int j=0;j<12;j++)
        {
            e[i].month[j]=j;
            printf("\tEnter expenditure for month %d:\t",j+1);
            scanf("%f" ,&e[i].expenses[j]);
        }
        printf("\n");
    }
    system("cls");
    printf("\n\t1.Data analaysis of single year\n\t2.Comparision of over a period of time\n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
    printf("\tEnter your choice:\t");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        soloanalysis(e,n);
        break;
    
    case 2:
        comparision(e,n);
        break;

    default:
        printf("\tSorry,Enter valid option!");
        break;
    }
    getch();
    return 0;
}
