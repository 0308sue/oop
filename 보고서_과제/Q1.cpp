#include <iostream>
using namespace std;

int main()
{
    int n, enc = 0, onc = 0, ens = 0, ons = 0;
    do{
        cin >> n; 
        if(n == 0) break;
        if(n % 2 == 0){
            enc ++;
            ens += n;
        }else{
            onc ++;
            ons += n;
        }
        
    }while(n != 0);
    
    cout << enc << " " << (float)ens / enc << " " 
    << onc << " " << ((onc == 0) ? 0 :((float)ons / onc)) ;
    return 0;
}
