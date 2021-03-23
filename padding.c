//2018038074 임종훈
#include <stdio.h>

struct student {
    char lastName[13]; /* 13bytes */
    int studentId; /*4bytes*/
    short grade; /*2bytes*/
}; // 구조체 선언. 19bytes임을 알 수 있다.
void main(){
    struct student pst; //typedef가 없었기 때문에 struct를 붙여야 함.
    printf("[2018038074] [임종훈]\n\n");

    printf("size of student = %ld\n",sizeof(struct student));//구조체의 크기
    //위에서 선언한 실제 크기는 19bytes인데 실제 출력은 24bytes이다.
    /*이는 lastName 배열이 16byte, int 4byte, short가 4byte씩 
    경계를 가졌고 빈 곳은 padding되었기 때문.*/
    printf("size of int = %ld\n",sizeof(int));
    printf("size of short = %ld\n",sizeof(short));
}