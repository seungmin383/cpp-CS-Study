#include <string>
#include <vector>

using namespace std;
int GCD(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int LCM(int a, int b)
{
    return a / GCD(a, b) * b;
}

int solution(vector<vector<int>> signals)
{
    /* ≥ª «Æ¿Ã */
    vector<vector<bool>> vecCycles;
    int lcmTime = 1;
    
    for (vector<int> blinker : signals)
    {
        vector<bool> cycle;
        int totalCycle = 0;

        for (int i = 0; i < blinker.size(); i++)
        {
            for (int j = 0; j < blinker[i]; j++)
            {
                if (i == 1)
                    cycle.push_back(true);
                else
                    cycle.push_back(false);
            }

            totalCycle += blinker[i];
        }

        vecCycles.push_back(cycle);
        lcmTime = LCM(lcmTime, totalCycle);
    }

    for (int i = 0; i < lcmTime; i++)
    {
        bool isYellow = true;

        for (vector<bool> cycles : vecCycles)
        {
            if (!cycles[i % cycles.size()])
            {
                isYellow = false;
                break;
            }
        }

        if (isYellow)
            return i + 1;
    }
    return -1;

    /* */
}