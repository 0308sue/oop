#include <iostream>
 
using namespace std;

int main()
{
    int a, b;
    cout << "두 수 입력: ";
    cin >> a >> b;

    cout << (a>b ? a :b)<< endl;
    cout << (b<0 ? b*-1 :b)<< endl;
    cout << (a%2==0 ? "짝":"홀")<< endl;
    
    return 0;

}