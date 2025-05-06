#include <iostream>
#include <cmath>
#include <cctype>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    float i = 0, j = 0; 
    
    while(true){
        cin >> a >> b >> c;
        if(a == 0 or isdigit(a) != 0) {
            cout << "bye";
            break;
        }
        int pan = (b*b)-(4*a*c);
        if(pan < 0) cout << "허근" << endl;
        if(pan == 0) cout << -b / 2*a << endl;
        if(pan > 0){
            i = (-b+sqrt(pan))/(2.0*a);
            j = (-b-sqrt(pan))/(2.0*a);
            cout << i << " " << j << endl;
        }
        
    }
    
    return 0;
}
