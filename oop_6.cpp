#include <iostream>
#include <fstream>
 
using namespace std;

int main()
{
    int n, sum=0;

    ifstream fin;
    fin.open("aaa.txt");

    while (fin >> n)
    {
        sum += n;
    }
    

    fin.close();

    cout <<  "sum의 값은 " << sum <<  endl ;
    
    
    return 0;

}