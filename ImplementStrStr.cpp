#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    string str = "GeeksForGeeks";
    string S = "fx";

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; i < S.length(); i++)
        {
            if (str[i] == S[i])
            {
                return 1;
            }
            else
            {
               return -1;
            }
        }
    }
}