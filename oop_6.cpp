#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
 
using namespace std;

int main()
{
    string name, mname;
    double score, sum =0, max = -200;
    int cnt=0;

    ifstream fin;
    fin.open("scores.txt");

    if(!fin){
        cerr << "Error opening scores.txt" << endl;
        return -1;
    } 

    ofstream fout("results.txt");
    if(!fout){
        cerr << "Error opening result.txt" << endl;
        return -1;
    } 

    while (fin >> name >> score)
    {
        cnt ++;
        sum += score;
        if (score > max)
        {
            max = score ;
            mname = name ;
        }
    
    }

    fout << fixed << setprecision(2) << showpoint;
    fout << "총 " << cnt << " 명" << endl;
    fout << "합계 : " << sum << endl;
    fout << "평균 : " << sum/cnt << endl;
    fout << "최고점 : " << mname << " " << max << endl;

    fin.close();
    fout.close();

    cout <<  "Results saved in result.txt " <<  endl ;
    
    return 0;

}