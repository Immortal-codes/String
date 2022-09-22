#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    string str1 = "geeksforgeeks";
    string str2 = "geeksquiz";
    string str;
    int i;
    int j = 0;
    int n = str1.length();
    int m = str2.length();

    for (i = 0; i < n; i++)
    {
        for ( j = i+j; j < m; j++)
        {
             if (str1[i]==str2[j+i])
        {
            if (str2[i]==str1[i+j])
            {
                
            }
            
        }
        }
        
       
        
    }
}