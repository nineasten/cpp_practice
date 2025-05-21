#include <iostream>

using namespace std;

int main(){

    // char : 작은 문자형
    int a = 77;
    char b = a;  // 이러면 77을 아스키코드에서 변환해서 정의됨
    cout << b << endl;  // M이 출력. 아스키 코드 상에서 77 = M이기 때문.

    char d = 'c'; // c++에서는 작은 문자형(char)을 선언할 때에는 작은 따옴표 ''을 사용해줘야 함. 문자열(string)만  "" 사용.
    // " "에는 명시적으로 null 문자가 포함되어있음. 이게 string 형 변수.
    // char 형에는 한 가지의 문자열만 저장할 수 있는데, "a" 이렇게 해버리면 null 문자까지 포함하는 꼴이 되므로 오류가 생김.
    cout << d << endl;

    char e[] = {'a', 'b', 'c', '\0'};  // 이렇게 해 줘야 원하는 만큼 출력이 됨. char 형 변수에는 null 문자를 포함해줘야 출력이 끝나는 부분을 알 수가 있음
    char f[] = {'a', 'b', 'c'};

    cout << f << endl; // << endl << f;


    // bool : 0 또는 1.

    cout << true << " " << 1 << endl;

    bool a1 = 0;
    bool b1 = 1;
    bool c1 = 10;
    // bool로 선언한 변수는 무조건 0 or 1만 저장함.
    
    cout << a1 << b1 << c1 << endl;  // 011나옴. c는 어쨌건 0이 아니므로 truthy가 되는 개념.




    return 0;

}
