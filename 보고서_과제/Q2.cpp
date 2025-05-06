#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char a = 0, b = 0, c = 0;
    int cnt = 0; 
    
    while (true) {
        c = b;
        b = a;
        cin.get(a);
        if (a == '&') break;
        if ((c == 'O' and b == 'O' and a == 'P') or (c == 'o' and b == 'o' and a == 'p')) cnt++;
    }
    
    
    cout << cnt;
    return 0;
}
