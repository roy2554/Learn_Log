#include <stdio.h>
int main(){
    int a;//int = integer,즉 정수형 (자연수) 4byte
    float b;//float = 실수 4byte
    double c;//float = 실수 8byte
    char d;//character = 문자 저장 (대부분 1개) 1byte

    //각각 메모리
    printf("int : %lu\n",sizeof(a));
    printf("int : %lu\n",sizeof(b));
    printf("int : %lu\n",sizeof(c));
    printf("int : %lu\n",sizeof(d));

    return 0;
}
//실행결과 위와 같이 나왔을것이다.
//그럼 왜 이런 매모리 용량이 존재하느냐.
//바로 프로그램의 최적화 때문이다.
//컴퓨터의 사양이 정해져 있는데
//쓸때없이 매모리만 차지하면 최적화에서 분리하다.
//예시로 1.2를 저장하는데 굳이 double로 선언해야할까?
//만약 그 수가 소수점이 많아지게 변할일이 없는 이상
//double로 변수를 선언할 필요는 없을것이다.

//결론은 최적화 때문에 이렇게 다양한 매모리를 가진 자료형(int,float,double,char...)이 존재하는 것이다.
//그리고 C/C++이 이런식으로 매모리를 건들일수 있는 언어이고 안정적이기 때문에 임베디드 시스템같은 곳에 자주 사용된다.
//그래서 프로그래밍을 할때는 C/C++은 무조건 알아야 한다고 생각한다.