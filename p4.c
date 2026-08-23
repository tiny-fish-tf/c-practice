#include <stdio.h>
#include <math.h>
#include <time.h>
int solution(int a, int b)
{
    int answer;
    int ab;
    int n2=a*b*2;
    ab=pow(10,(int)floor((log10(b)+1)))*a+b;
    if(ab>=n2)
    {
        answer=ab;
        return answer;
    }
    else
    {
        answer=n2;
        return answer;
    }
}
int main()
{
    srand(time(NULL));
    for(int i=0; i<10; i++)
    {
        int n1, n2;
        n1=rand()%10+1;
        n2=rand()%10+1;
        printf("n1: %d, n2: %d value: %d\n", n1,n2,solution(n1,n2));
    }
    return 0;
}