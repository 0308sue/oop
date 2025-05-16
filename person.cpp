#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    string getFirstChar(const string& str);  // 내부 전용 유틸리티 함수

public:
    Person(const string& initName);
    ~Person();
    string getName();
    void setName(const string& newName);
};

// 생성자
Person::Person(const string& initName) {
    name = initName;
}

// 소멸자
Person::~Person() {
    cout << "name destroyed" << endl;
}

// getName() 함수
string Person::getName() {
    return name;
}

// 한글 첫 글자 추출 함수
string Person::getFirstChar(const string& str) {
    if (str.size() >= 3) {
        return str.substr(0, 3);  // UTF-8 한글 한 글자는 보통 3바이트
    } else {
        return str.substr(0, 1);
    }
}

// setName() 함수
void Person::setName(const string& newName) {
    string currentFamily = getFirstChar(name);
    string newFamily = getFirstChar(newName);

    if (currentFamily == newFamily) {
        name = newName;
        cout << newName << "(으)로 변경 완료" << endl;
    } else {
        cout << "Family name change not allowed." << endl;
    }
}

// 테스트용 main 함수
int main() {
    Person person("고길동");
    cout << "원래 이름: " + person.getName() << endl;
    person.setName("곡식");   // 첫 글자 다름 → 실패
    person.setName("고구마"); // 첫 글자 같음 → 성공
    person.setName("박길동"); // 첫 글자 다름 → 실패
    cout << "최종 이름: " + person.getName() << endl;

    return 0;
}
