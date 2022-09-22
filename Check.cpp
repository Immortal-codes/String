#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    string str ="machine";
    int count=0;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str.length(); j++)
        {
            if (str[i+j]==str[i])
            {
                count++;
            }
            else{
                count--;
            }
            
        }
        
    }
    if (count>0)
    {
        cout<<"yes it is isogram";
    }
    else
    {
        cout<<"No";
    }
    
    
}