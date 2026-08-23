#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int solution(int a, int b)
{
    int answer;
    int a1=(int)floor(log10(b)+1);
    int b1=(int)floor(log10(a)+1);
    int ab=a*pow(10,a1)+b;
    int ba=b*pow(10,b1)+a;
    answer=(ab>=ba)? ab:ba; 
    return answer;
}
int main()
{
    int n1=solution(9,91);
    int n2=solution(10,10);
    printf("9,91 solution: %d\n", n1);
    printf("10,10 solution: %d\n", n2);
    return 0;
}