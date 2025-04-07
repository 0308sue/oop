#include <iostream>
#include <iomanip>
 
using namespace std;

int main(){
    int size;
    do{
        cout << "표의 크기 입력(2~10) : ";
        cin >> size;
    } while (size < 2 or size > 10);

    cout << "내부만 while문으로 변경" << endl;
    for(int i = 1; i <= size; i++){
        int j = 1;
        while (j <= size){
            cout << setw(4) << i*j;
            j++;
        }
        cout << endl;
    }

    cout << "모두 while문으로 변경" << endl;
    int i = 1;
    while(i <= size){
        int j = 1;
        while (j <= size){
            cout << setw(4) << i*j;
            j++;
        }
        cout << endl;
        i++;
    }
    
    
    return 0;

}