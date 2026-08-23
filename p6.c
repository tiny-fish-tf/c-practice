#include <stdio.h>
#include <stdbool.h>
int solution(int a, int b, bool flag)
{
    int answer=flag? a+b:a-b; // 조건연산자
    return answer;
}
int main()
{
    int n1=6, n2=4;
    bool flag= 1;
    printf("solution(6,4,flag=1): %d\n", solution(n1,n2,flag));
    return 0;
}