#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, cnt = 0; 
    vector<int> nums;
    
    cin >> n;
    for(int i = 1; i <= n; i++){
        if( n % i == 0) {
            cnt ++;
            nums.push_back(i);
        }
    }
    
    
    
    cout << "총 " << cnt << "개" << endl;
    for (vector<int>::iterator it = nums.begin(); it != nums.end() ; ++it)
	{
		cout << *it << " ";
	}
    return 0;
}
