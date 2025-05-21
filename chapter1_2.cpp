#include <iostream>
#include <climits>  // 정수형 상수 정의
using namespace std;

int main(){

    // short, int, long, long long에 대해. 상황에 맞는 가장 알맞은 정수형을 선언하기 위해.

    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << n_int << " " << n_short << " " << n_long << " " << n_llong << endl;
    // short는 -32768 ~ 32767 // 3만 정도
    // int = long은 -2147483648 ~ 2147483647 // 20억 정도
    // long long은 엄청 큼

    unsigned int a;  // 이렇게 하면 음의 값을 사용하지 않겠다는 것. 음의 영역을 사용하지 않으니 양의 범위가 2배 늘어남.

    a = -1;
    cout << a << endl; // 양의 int 범위의 2배 범위

    float c = 3.14f;
    int b = 3.14;  // 이렇게 하면 소수점 아래 부분 버려짐
    cout << c << " " << b << endl;  // 3.14 3



}  // 결론 : 데이터 크기에 맞는 정수 자료형을 선택하면 좋다.