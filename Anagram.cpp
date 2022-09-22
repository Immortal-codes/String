#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    string str ="cddgk";
    string str2="gcd";
    int count;

    for (int i = 0; i < str.length(); i++)
    {
       for (int j = 0; j < str2.length(); j++)
       {
            if (str[i+j]==str2[j])
            {
                count++;
            }
           
            
            
       }
       
    }
    cout<<count;
    
}