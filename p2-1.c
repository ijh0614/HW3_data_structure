//2018038074 임종훈
#include <stdio.h>

#define MAX_SIZE 100

float sum(float[], int);//함수 선언
float input[MAX_SIZE], answer;
int i;//전역변수 선언



void main(void){
    printf("[2018038074] [임종훈]\n\n");
    
    for(i=0; i<MAX_SIZE; i++){
        input[i] =i;
    }
    /* for checking call by reference*/
    printf("address of input =%p\n", input);
    

   answer = sum(input, MAX_SIZE);//함수에 배열의 이름을 보내서 call by reference
   printf("The sum is: %f\n", answer);//sum함수에서 반환 받은 덧셈을 입력한다.
}

float sum(float list[], int n){
    /**/
    printf("value of list = %p\n", list);//input의 주소가 값으로 들어있다.
    printf("address of list = %p\n\n", &list);//list의 주소가 출력된다. input의 주소와 다름
    

   int i;
   float tempsum =0;
   for(i=0;i<n;i++){
       tempsum += list[i];//input배열에 접근
   }
   return tempsum;//0에서 99까지 더한 값이므로 4050이 나온다.
}