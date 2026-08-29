#include <stdio.h>
int main()
{
    int n1=10;
    float n2=2.5;
    char c1='a';
    printf("%d\n", n1);
    printf("%f\n", n2);
    printf("%d\n", (int)(n1/n2));
    printf("%d\n", n1/(int)n2);
    printf("%d\n",(int)c1);
    return 0;
    // 명시적 캐스팅이라고 한다 직접 타입을 바꾸어 준다
    // (타입) 값 이렇게 사용한다
    // 실수에서 정수로 명시적 캐스팅을 사용할 때 소숫점은 버린다
}