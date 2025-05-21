#include <iostream>  

using namespace std;  
int main()  
{
    cout << "Hello world" << endl; 
    
    /*  신경써야 할 것
    1. 변수의 자료형
    2. 변수의 이름
    3. 변수가 어디에 정의되어야 하는가?(메모리 영역)
    */
    {
        int b;
        {
            int a = 4;
            b = 4;

        }
        // cout<<a;  // 이렇게 하면 안됨.

    }
    int a;

    /*  변수 선언 규칙
    1. 숫자로 시작할 수 없음
    2. c++에서 사용하고 있는 키워드는 사용할 수 없음
    3. white space를 사용할 수 없음
    */
    a = 10;  // 대입
    int b = 4;
    cout << "a = " << a << ", b = " << b << endl;


    cout << "a의 주소 : " << &a << ", b의 주소  : " << &b << endl;

    // 변수는 사용되기 전에 정의되어야 한다.***




    return 0;
}
