#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{int i;
    string str ="testsample";
    sort(str.begin(),str.end());
    int count;
    for ( i = 0; i < str.length(); i++)
    {
         if(str[i]==str[i+1])
        {
            count++;
        }
        
        
    }
    if(count>0)
    {
        cout<<str[i];
    }
    
}