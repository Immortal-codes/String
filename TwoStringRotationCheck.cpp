#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    string s1="geeksforgeeks";
    string s2="forgeeksgeeks";
    string s3;

    rotate(s1.begin(), s1.begin()+5 ,s1.end());
    cout<<s1;
    if (s2==s3)
    {
       cout<<"yes";
    }
    else{
        //cout<<"No";
    }
    


}