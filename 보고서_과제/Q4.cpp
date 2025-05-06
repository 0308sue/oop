#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0; 
    bool chk = true;
    
    cin >> n;
    for(int i = 2; i <= n; i++){
        for(int j = 2; j < i; j++){
            if(i % j == 0) chk = false;
        }
        if(chk) {
            cnt ++;
        }
        chk = true;
    }
    
    
    
    cout << cnt << "개" << endl;
    return 0;
}
