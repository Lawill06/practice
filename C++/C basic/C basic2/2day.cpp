#include <iostream>

using namespace std;

//char형
/*int main() {
    // char : 작은 문자형
    char b[] = { 'a', 'b', 'c', '\0' };
    //null 문자 '\0'
    // "" >> 명시적으로 null문자가 포함 => string
    cout << b << endl;
    return 0;
}*/

//bool형
/*int main() {
    //bool : 0 혹은 1
    bool a = 0;
    bool b = 1;
    bool c = 10;
    cout << a << " " << b << " " << c << endl;
    return 0;
}*/

//상수
/*int main() {

    // const float PIE = 3.14159265358976323846264338;

    // int r = 3;
    // float s = r * r * PIE;

    // int r2 = 3;
    // float s2 = r2 * r2 * PIE;

    // cout << s << endl;
    
    // return 0;
}*/

//데이터형 변환
int main() {
    int a = 3.141592;
    cout << a << endl;
    //강제적 형 변환
    //typeName(a) (typeName)a
    char ch = 'M';
    cout << static_cast<int>(ch) << " " << int(ch) << endl;

    //C++ 스타일 형 변환
    //static_cast<typeName>

    return 0;
}