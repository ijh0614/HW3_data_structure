//2018038074 임종훈
#include <stdio.h>
#include <stdlib.h>

void main(){
    int list[5];
    int *plist[5];//정수 배열과 포인터 배열 선언

    printf("[2018038074] [임종훈]\n\n");
    list[0]=10;
    list[1]=11;//배열에 값 저장
    
    plist[0] =(int*)malloc(sizeof(int));//plist[0]에 동적할당

    printf("list[0] \t=%d\n",list[0]);
    printf("adress of list \t=%p\n",list);
    printf("adress of list[0] \t=%p\n",&list[0]);
    printf("adress of list + 0 \t= %p\n", list+0);//위의 4개 모두 배열의 시작 주소를 출력한다.
    printf("adress of list + 1 \t= %p\n", list+1);
    printf("adress of list + 2 \t= %p\n", list+2);
    printf("adress of list + 3 \t= %p\n", list+3);
    printf("adress of list + 4 \t= %p\n", list+4);//배열의 이름(즉 주소)에 증감연산을 하면 
    printf("adress of list[4] \t=%p\n", &list[4]);

    free(plist[0]);//할당된 메모리 해제
}