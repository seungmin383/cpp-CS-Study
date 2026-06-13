#include <iostream>
#include <string>

#include <cctype>

using namespace std;

int main(void)
{
    /* 내 풀이 */
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = tolower(str[i]);
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = toupper(str[i]);
        }
        else
            return 0;
    }
    cout << str;

    /* 좋다고 생각한 풀이 */
    string str;
    cin >> str;

    for (char c : str)
    {
        if (c >= 'A' && c <= 'Z')
            c += 'a' - 'A';
        else
            c -= 'a' - 'A';

        cout << c;
    }

    return 0;
}