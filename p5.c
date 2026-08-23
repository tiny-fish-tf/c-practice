#include <stdio.h>
#include <math.h>
int solution(int n)
{
    int answer=0;
    if(n%2==0)
    {
        for(int i=n; n>0; n-=2)
        {
            answer+=n*n;
        }
        return answer;
    }
    else
    {
        for(int i=n; n>0; n-=2)
        {
            answer+=n;
        }
        return answer;
    }
}