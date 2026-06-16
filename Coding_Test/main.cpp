#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

string solution(vector<string> arr);

int main(void)
{
    //cout << solution("aaaaa", "bbbbbbbbbb");

    return 0;
}

string solution(vector<string> arr) 
{
    /* 내가 푼 풀이 */
    string answer = "";

    for (string str : arr)
    {
        answer += str;
    }
    
    return answer;

    /* 다른 사람이 푼 풀이 */
    return accumulate(arr.begin(), arr.end(), string(""));
}