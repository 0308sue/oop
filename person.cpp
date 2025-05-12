#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;

    // 한글 초성 비교를 위한 첫 글자 추출 함수
    string getFirstChar(const string& str) {
        // UTF-8 한글은 첫 글자가 보통 3바이트
        // 길이 확인 후 3바이트만 잘라내기
        if (str.size() >= 3) {
            return str.substr(0, 3);
        } else {
            return str.substr(0, 1);
        }
    }

public:
    // 생성자
    Person(const string& initName) {
        name = initName;
    }

    // 소멸자
    ~Person() {
        cout << "name destroyed" << endl;
    }

    // 이름 반환
    string getName() {
        return name;
    }

    // 이름 설정
    void setName(const string& newName) {
        string currentFamily = getFirstChar(name);
        string newFamily = getFirstChar(newName);

        if (currentFamily == newFamily) {
            name = newName;
            cout << newName << "(으)로 변경 완료" << endl;
        } else {
            cout << "Family name change not allowed." << endl;
        }
    }
};

// main 함수 (문제에 주어진 그대로)
int main() {
    Person person("고길동");
    cout << "원래 이름: " + person.getName() << endl;
    person.setName("곡식");   // 첫 글자 다름
    person.setName("고구마"); // 첫 글자 같음 (성공)
    person.setName("박길동"); // 첫 글자 다름
    cout << "최종 이름: " + person.getName() << endl;

    return 0;
}