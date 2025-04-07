#include <iostream>
#include <iomanip>
 
using namespace std;

int main(){
    int size;
    do{
        cout << "표의 크기 입력(2~10) : ";
        cin >> size;
    } while (size < 2 or size > 10);

    for(int i = 1; i <= size; i++){
        int j = 1;
        while (j <= size){
            cout << setw(4) << i*j;
            j++;
        }
        cout << endl;
    }
    
    
    return 0;

}