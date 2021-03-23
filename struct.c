//2018038074 임종훈
#include <stdio.h>

struct student1{
    char lastName;
    int studentId;
    char grade;
};// struct만 사용해서 선언한 구조체. 다음에 사용할 때 struct 붙여야 함.

typedef struct {
    char lastName;
    int studentId;
    char grade;
} student2;//선언할 때 typedef를 썼기 때문에 후에 사용할 때 struct 붙일 필요 없음.

void main(){
    struct student1 st1 ={'A', 100, 'A'};//위에서 설명한 것과 같다.

    printf("[2018038074] [임종훈]\n\n");

    printf("st1.lastName = %c\n",st1.lastName);// . 을 통해서 맴버변수에게 접근할 수 있다.
    printf("st1.studentId = %d\n",st1.studentId);
    printf("st1.grade = %c\n",st1.grade);

    student2 st2 ={'B',200,'B'};//위에서 설명한 것과 같다.

    printf("\nst2.lastName = %c\n",st2.lastName);
    printf("st2.studentId = %d\n",st2.studentId);
    printf("st2.grade = %c\n",st2.grade);

    student2 st3;

    st3 = st2; //구조 치환. 사용 가능하다.

    printf("\nst3.lastName = %c\n",st3.lastName);//st2와 같은 값이 나온다.
    printf("st3.studentId = %d\n",st3.studentId);
    printf("st3.grade = %c\n",st3.grade);

    //아래의 동등성 검사 코드는 주석을 해제하면 오류가 난다. 사용할 수 없기 때문.
    /* equality test */
    /*
    if(st3==st2){
        printf("equal\n");
    }
    else{
        printf("not equal\n");
    }
    */
}