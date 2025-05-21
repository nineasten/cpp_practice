#include <iostream>
// #define PI 3.1415926535  // 이렇게 상수 정의할 수도 있음. --> 이건 C 스타일
using namespace std;

int main(){
    //원의 넓이를 구하는 프로그램

    const float PI = 3.1415926535; // const 자료형 변수명 = 변수값. 무조건 선언과 동시에 값을 넣어줘야 함.

    int r = 3;
    float s = r*r*PI;
    cout<<s<<endl;

    // 원주율 같이 바뀔 필요가 없는, 혹은 바뀌어선 안되는 수를 상수로 관리할 수 있음.



    // 데이터형 변환
    /*
    1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입할때
    2. 수식에 데이터형을 혼합하여 사용할때
    3. 함수에 매개변수를 전달할 때
    */
    
    int a = 3.141592;  // 이러면 소수점 무시하고 걍 3만 입력됨
    cout << a << endl;

    // 강제적으로 데이터 형 변환하기
    // typename(a) or (typename)a 둘 중 하나 사용
    char ch = 'm';
    cout << int(ch) << " " << (int)ch << endl;  // 109 109

    //static_cast<typename>(a) 이렇게도 할 수 있음
    cout << static_cast<int>(ch) <<endl;  // 109

    return 0;


}