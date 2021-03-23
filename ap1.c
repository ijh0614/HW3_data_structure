//2018038074 임종훈
#include <stdio.h>
#include <stdlib.h>

void main(){
    int list[5]; //크기가 5인 정수 배열 선언
    int *plist[5] ={NULL,};//크기가 5인 포인터 배열 선언과 안의 값 전부 NULL로 초기화

    printf("[2018038074] [임종훈]\n\n");

    plist[0] = (int*)malloc(sizeof(int)); //malloc으로 heap영역의 메모리를 plist[0]에 할당
    
    list[0] =1;
    list[1] =100;//값을 할당

    *plist[0] = 200;//malloc으로 할당받은 주소에 데이터 저장

    printf("value of list[0] =%d\n", list[0]);//값
    printf("address of list[0] =%p\n", &list[0]);
    printf("value of list =%p\n", list);
    printf("address of list (&list) =%p\n", &list);//배열의 이름을 출력하면 배열의 시작 주소가 나온다.

    printf("--------------------------------------------\n\n");

    printf("value of list[1] =%d\n", list[1]);
    printf("address of list[1] =%p\n", &list[1]);
    printf("value of *(list+1) =%d\n", *(list+1));//배열의 이름에 +1을 했더니 다음 배열(list[1])의 주소가 나왔음을 알 수 있다.
    printf("address of list+1 =%p\n", list+1);//위와 같음

    printf("--------------------------------------------\n\n");

    printf("value of *plist[0] = %d\n", *plist[0]);//역참조 연산자를 통해 heap영역에 저장되어 있는 200을 출력
    printf("&plist[0] = %p\n", &plist[0]);
    printf("&plist = %p\n", &plist);
    printf("plist = %p\n", plist);//포인터를 저장하는 배열일 뿐, 배열의 성질은 같다.
    printf("plist[0] = %p\n", plist[0]);//malloc에서 할당받은 주소가 저장되어있음
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);//할당된 주소가 없음

    free(plist[0]);//없어서 추가함
}