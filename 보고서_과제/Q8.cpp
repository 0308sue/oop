#include <iostream>
#include <string>
#include <algorithm>
#include <vector> 

using namespace std;

string n;
int i = 0;
vector<string> word;

int main() {
    while(true){
        cin >> n;
        if(n == "*") break;
        word.push_back(n);
    }

    std::sort(word.begin(), word.end());
    for (vector<string>::iterator it = word.begin(); it != word.end(); ++it){
    		cout << *it << " ";
    	}

    return 0;
}
