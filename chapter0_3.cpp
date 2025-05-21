#include <iostream>  // 전처리 지시자

/*
c++에서 함수를 사용하고자 한다면 반드시 그 함수의 원형을 미리 정의해야 한다.

전처리 지시자에서 cout을 미리 정의한 것.
*/

using namespace std;  // 이게 없으면 std::cout, std::endl 이렇게 사용해야 함.

int main()  // C++코드에는 반드시 main의 이름을 가지고 있는 함수가 있어야 한다.
{
    cout << "Hello world" << endl;  // ; : 종결자. ;이 찍혀야 문장의 끝으로 인식함.
    // cout : << 이후의 것을 출력
    // endl : 줄바꿈.

    
    return 0;
}
