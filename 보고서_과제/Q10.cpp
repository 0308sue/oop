#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, k, a = 0;
string t, p;
string str[100];

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> p;
        if(p.rfind(t, 0) == 0){
            str[i] = p;
        }else {
            str[i] = '~';
        }
    }
    std::sort(str, str + n);
    // for (int i = 0; i < n; i++) {
    //     cout << str[i+a]  << endl;
    // }
    cout <<"출력 : " << str[k-1];
    return 0;
}
