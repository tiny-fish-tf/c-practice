#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
char* solution(const char* my_string, int i, int j)
{
    char* answer=(char*)malloc(strlen(my_string)+1);
    char temp;
    strcpy(answer, my_string);
    while(i<j)
    {
        temp=answer[i];
        answer[i]=answer[j];
        answer[j]=temp;
        i++;
        j--;
    }
    answer[strlen(my_string)]='\0';
    return answer;
}
int main()
{
    char buffer1[100]="abcdefgh";
    char buffer2[100]="challegne";
    printf("buffer1: %s\n",buffer1);
    printf("buffer2: %s\n", buffer2);
    printf("func buffer1: %s\n", solution(buffer1, 2, 5));
    printf("func buffer2: %s\n", solution(buffer2, 5, 8));
    return 0;
}