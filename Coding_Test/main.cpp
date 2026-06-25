#include <string>
#include <vector>
#include <numeric>
#include <set>
#include <cmath>
#include <array>

using namespace std;

string solution(string bin1, string bin2);

int main(void)
{
    solution("10", "11");
    return 0;
}



int strinigToint(string str)
{
    int idx {1};
    int answer{};

    reverse(str.begin(), str.end());

    for (char c : str)
    {
        if (c == '1')
        {
            answer += idx;
        }
        idx *= 2;
    }
    return answer;
}

string intToString(int i)
{
    string str;
    int answer = i;

    while (true)
    {
        int ahrt{ answer / 2 };
        int skajwl{ answer % 2 };

        if (skajwl == 1)
            str.push_back('1');
        else if (skajwl == 0)
            str.push_back('0');

        if (ahrt == 0)
        {
            break;
        }
        
        answer = ahrt;
    }
    reverse(str.begin(), str.end());
    return str;
}

string solution(string bin1, string bin2) {

    int a = strinigToint(bin1);
    int b = strinigToint(bin2);

    return intToString(a + b);
}