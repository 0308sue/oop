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
    int spaceCount = 0;
    int newlineCount = 0;
    int otherCount = 0;

    while (file.get(ch)) { // 파일에서 문자 하나씩 읽기
        if (ch == ' ') {
            spaceCount++;
        } else if (ch == '\n') {
            newlineCount++;
        } else {
            otherCount++;
        }
    }

    file.close(); // 파일 닫기

    cout << "스페이스 수: " << spaceCount << endl;
    cout << "개행 수: " << newlineCount << endl;
    cout << "그 외 문자 수: " << otherCount << endl;

    return 0;
}
