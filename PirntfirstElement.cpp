#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    string str ="geeks for geeks";
    int count=0;
    for (int i = 0; i < str.length(); i++)
    {
        if (i==0)
        {
           cout<<str[i];
        }
        
        if (str[i]==32)
        {
            cout<<str[i+1];
        }
        
        
    }
   
    
    
}