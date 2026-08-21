#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
char* solution(const char* my_string, const char* overwrite_string, int s)
{
    char *answer=(char*)malloc(1000);
    strcpy(answer, my_string);
    int j=0;
    for(int i=s;j<strlen(overwrite_string);i++)
    {
        answer[i]=overwrite_string[j];
        j++;
    }
    return answer;
}
int main()
{
    char s1[1000]="Hello World!";
    char s2[1000]="hyenbo!";
    int n=6;
    char *s3=solution(s1,s2,n);
    printf("%s\n", s3);
    return 0;
}