#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>
 
using namespace std;

int main()
{
    string s, k, e;

    ifstream fin;
    fin.open("animal.txt");

    if(!fin){
        cerr << "Error opening scores.txt" << endl;
        return -1;
    } 
    
    while(true){
        cout << "동물 입력 : ";
        cin >> s;
        if(s == "Q" or s == "q") {
            cout << "bye";
            break;
        }
         while (fin >> k >> e)
        {
            if(s == k){
                cout << "\t" << e << endl;
            }
            if(s == e){
                cout << "\t" << k << endl;
            }
        
        }
        
    }

    fin.close();
    
    return 0;

}
