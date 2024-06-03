// Write a program to find the position of the character 'C' in the sentence "idea without execution is worthless" using pointer and string.
#include<stdio.h>
int main() {
    int i=0;
    char a='a', string[]="idea without execution is worthless";
    printf("%s\n",string);
    while (a!='\0')
    {
        a=*(string+i);
        if(a=='c') 
        break;
        i++; 
    }
    printf("The position of C is %d",i+1);
    return 0;
}