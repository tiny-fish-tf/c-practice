#include <stdio.h>
int main()
{
    char c1='a';
    int n1=1;
    int digit=c1-n1;
    printf("%d\n", digit);
    char str[5];
    strcpy(str, "abc");
    for(int i=0; i<3; i++)
    {
        printf("before str[i]= %d\n", str[i]);
        printf("before str[i]= %c\n", str[i]);
        str[i]+=1;
        printf("after str[i]= %d\n", str[i]);
        printf("after str[i]= %c\n", str[i]);
    }
    return 0;
    /*
    cpu가 연산을 할때 char형이어도 int형으로 승격시켜서 계산하는 것이 효율적이라 int로 승격시켜서 계산한다
    char도 -128~127의 숫자니까
    a=97 이렇듯이 정수 승격이라고 한다
    */
}