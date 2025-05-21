#include <iostream>
using namespace std;
int main(){
    /*
    c++는 복합 데이터형을 제공한다 -> 사용자 정의대로 새로운 데이터형을 만들 수 있다.
    복합 데이터형 : 기본 정수형과 부동소수점의 조합
    */

    // 배열 : 같은 데이터형의 집합
    // typename arrayname[arraysize] 이렇게 선언

    short month[12];  // 이 배열에는 무조건 short 형만 들어옴. 12개의 short 형 요소의 배열

    short m[12] = {1, 2, 3}; // 중괄호 사용. 나머지는 0으로 자동으로 초기화
    
    cout << m << endl;  // 이러면 배열 자체의 주소 값 나옴
    cout << m[0] << " " << m[1] << endl;  // 1 2

    short k[] = {1, 2, 3, 4, 5, 6};  // 이러면 크기를 지정하지 않아도 컴파일러가 자동으로 크기 6의 배열 만듦


    cout << sizeof(k) << endl;  // 2바이트 짜리 6개 -> 12바이트.


    // 문자열
    char a[5] = {'h', 'e', 'l', 'l', 'o'}; 
    char q[] = "hello";  // 이렇게 쌍따옴표로 하면 명시적으로 널 문자 포함시켜줌
    cout << q << endl;



    return 0;

}