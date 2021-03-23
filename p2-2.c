//2018038074 임종훈
#include <stdio.h>

void print1 (int *ptr, int rows);//함수 선언

void main(){
    int one[] ={0,1,2,3,4};//크기가 5인 배열

    printf("[2018038074] [임종훈]\n\n");

    printf("one = %p\n", one);
    printf("&one = %p\n", &one);
    printf("&one[0] = %p\n", &one[0]);//셋다 같은 표현
    printf("\n");

    print1(&one[0], 5);//배열의 주소를 보내서 call by reference한다.
}

void print1 (int *ptr, int rows)
{/*print out a one-dimensional array using a pointer*/
    int i;
    printf("Address \t Contents \n");
    for (i=0;i<rows;i++){
        printf("%p \t %5d\n", ptr+i,*(ptr+i));//배열 주소+숫자 로 다음 배열에 접근한다
    }
    printf("\n");
}