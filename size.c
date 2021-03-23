//2018038074 임종훈
#include <stdio.h>
#include <stdlib.h>

void main(){
    int **x;//이중포인터 선언
    printf("[2018038074] [임종훈]\n\n");

    printf("sizeof(x)=%lu\n", sizeof(x));//이중 포인터 변수x의 크기. 즉 개발환경마다 차이가 있는 포인터 변수의 크기가 나온다.
    printf("sizeof(*x)=%lu\n", sizeof(*x));//x에 담겨있는 포인터의 크기. 즉 개발환경마다 차이가 있는 포인터 변수의 크기가 나온다.
    printf("sizeof(**x)=%lu\n", sizeof(**x));//이중 포인터 x를 두번 역참조했기 때문에 정수형 int의 변수 크기가 나온다.
}