#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
 
using namespace std;

int main()
{
    ifstream fin("triangle.txt");      // 파일오픈성공체크if문추가
    ofstream fout("triangle_result.txt");   // 여기도if문추가

    if(!fin){
        cerr << "Error opening triangle.txt" << endl;
        return -1;
    } 

    if(!fout){
        cerr << "Error opening triangle_result.txt" << endl;
        return -1;
    } 

    int num, a, b, c;
    while(fin >> num >> a >> b >> c) {
        if( a) fout<< num << " X" << endl;
        else if(a) fout<< num << " O 정삼각형"<<endl; 
        else if(a) fout<< num << " O 이등변삼각형"<<endl; 
        else fout<< num << " O" << endl; 
    }
    cout<< "완료. 출력파일을확인해보세요."<< endl;
    fin.close();
    fout.close();

}