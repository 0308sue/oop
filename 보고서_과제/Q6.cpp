#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("a.txt"); // a.txt 파일 열기

    if (!file) {
        cerr << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    char ch;
    int scnt = 0;
    int lcnt = 0;
    int wcnt = 0;

    while (file.get(ch)) { // 파일에서 문자 하나씩 읽기
        if (ch == ' ') {
            scnt++;
        } else if (ch == '\n') {
            lcnt++;
        } else {
            wcnt++;
        }
    }

    file.close(); // 파일 닫기

    cout << scnt 
    << " " << lcnt
    << " " << wcnt << endl;

    return 0;
}
