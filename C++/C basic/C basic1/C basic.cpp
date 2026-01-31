#include <iostream> //전처리 지시자

using namespace std;
//std::을 안하기 위해서

// int main() {

//     cout << "Hello, World!" << endl;
//     //cout는 콘솔창에 문장 입력, endl은 줄바꿈, <<,>>는 출력 방향 의미
//     return 0;
// }

int main() {
    //변수 선언시 숫자부터 입력하면 오류
    int a;
    a = 7;

    int b = 7;

    cout << "a = " << a << "b = " << b << endl;

    return 0;
}