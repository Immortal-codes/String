#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    string str="adgkbdhlceilcfjm";
    int n=str.length();
    int m=n/4;
    sort(str.begin(),str.end());
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            
            if (str[i]==str[i+1])
            {
                break;
                 cout<<str[i];
            }
            
          
           
        }
        cout<<endl;
        


        
    }
    
}