#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a, b, c;

    while (true) {
        cin >> a;

        if (a == "*") break;  // 종료 조건

        cin >> b >> c;

        string words[3] = {a, b, c};
        sort(words, words + 3);  // 사전 순 정렬

        cout << words[0] << " " << words[1] << " " << words[2] << endl;
    }

    return 0;
}
