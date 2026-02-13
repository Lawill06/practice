#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++programing";

    cout << "하이" << name2 << u8"�Դϴ�! ������ ��� �ǽó���?\n";
    cin >> name1;
    cout << u8"�ݰ����ϴ�!" << name1 << u8"��!" << endl;
    cout << strlen(name1) <<  u8"���Դϴٸ�\n";
    cout << sizeof(name1) << u8"����Ʈ �޸𸮸� ����մϴ�.\n";
    name2[3] = '\0';
    cout << u8"�� �̸��� " << name2 << u8"�Դϴ�.\n";
    cout << name2 << endl;

    return 0;
}