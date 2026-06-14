#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s);

int main(void)
{
    cout << solution("He11oWor1d", "lloWorl", 2);

    return 0;
}

string solution(string my_string, string overwrite_string, int s) {

    /* 내 풀이 */
    string answer{};

    int iMaxIndex = my_string.length();
    int iIndex{};
    bool isLarge{ false };

    if (iMaxIndex < overwrite_string.length())
    {
        iMaxIndex = overwrite_string.length();
    }
    else
    {
        isLarge = true;
    }

    for (int i = 0; i < s; ++i)
    {
        answer += my_string[i];
        iIndex++;
    }

    answer += overwrite_string;
    iIndex += overwrite_string.length();

    if (isLarge)
    {
        for (iIndex; iIndex < iMaxIndex; ++iIndex)
        {
            answer += my_string[iIndex];
        }
    }

    /* string 제공 함수 */
    string answer = "";
    answer = my_string.replace(s, overwrite_string.size(), overwrite_string);
    return answer;

    /* 좋다고 생각한 풀이 */
    for (auto i = 0; i < overwrite_string.size(); ++i)
    {
        my_string[i + s] = overwrite_string[i];
    }
    return my_string;

    return answer;
}