#include <iostream>
#include <string>
#include <fstream>
 
using namespace std;

int main()
{
    string s, k, e;
    ifstream fin;
    
    while(true){
    
    fin.open("animal.txt");

    if(!fin){
        cerr << "Error opening animal.txt" << endl;
        return -1;
    } 

        bool flag = false;
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
                flag = true;
            }
            if(s == e){
                cout << "\t" << k << endl;
                flag = true;
            }
        }
        if(flag == false){
                cout << "\t미등록 단어입니다." << endl;
        }
        
        fin.close();
    }
    
    return 0;

}
