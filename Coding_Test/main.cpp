#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <set>
#include <cmath>

using namespace std;

string solution(vector<string> arr);

int main(void)
{
    return 0;
}

int MyPow(int a, int Num);

int solution(int a, int b, int c) {
    int answer{1};

    set<int> s = { a,b,c };
    int Num = s.size(); // 1이면 444 / 2면 441 / 3이면 432

    for (int i = 1; i <= (4 - Num); ++i)
    {
        answer *= MyPow(a, i) + MyPow(b, i) + MyPow(c, i);
    }
 
    return answer;
}

int MyPow(int a, int Num)
{
    if (Num == 0)
        return 1;
    else if (Num == 1)
        return a;

    int aa = { 1 };
    for (int i = 0; i < Num; ++i)
    {
        aa *= a;
    }
    return aa;
}