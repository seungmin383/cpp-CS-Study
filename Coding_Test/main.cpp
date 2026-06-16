#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2);

int main(void)
{
    cout << solution("aaaaa", "bbbbbbbbbb");

    return 0;
}

string solution(string str1, string str2) {
    string answer = "";

    int index{};

    while (true)
    {
        bool isFin1 = false;
        bool isFin2 = false;

        if (str1.length() <= index)
        {
            isFin1 = true;
        }

        if (str2.length() <= index)
        {
            isFin2 = true;
        }

        if (isFin1 && isFin2)
        {
            break;
        }
        else if (isFin1 && !isFin2)
        {
            answer += str2[index];
        }
        else if (!isFin1 && isFin2)
        {
            answer += str1[index];
        }
        else
        {
            answer += str1[index];
            answer += str2[index];
        }

        index++;
    }

    return answer;
}