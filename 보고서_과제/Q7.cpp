#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <iomanip>
 
using namespace std;

int main()
{
    string name, mname;
    double score, sum =0;
    int cnt=0;
    vector<double> scores;

    ifstream fin;
    fin.open("scores.txt");

    if(!fin){
        cerr << "Error opening scores.txt" << endl;
        return -1;
    } 


    while (fin >> name >> score)
    {
        cnt ++;
        sum += score;
        scores.push_back(score);
    
    }
    
    double avg = sum/cnt, b = 0;
    for (vector<double>::iterator it = scores.begin(); it != scores.end(); ++it){
        double a = pow(*it - avg,2);
        b += a;
    }
    
    cout << fixed << setprecision(2) << showpoint;
    cout << "총 " << cnt << " 명" << endl;
    cout << "평균 : " << avg << endl;
    cout << "표준편차 : " << sqrt(b/cnt) << endl;

    fin.close();
    
    return 0;

}
