#include <bits/stdc++.h>
using namespace std;

void func(string s1,string s2) 
{
    vector <char> c{};
    for(int i=0;i<s1.length();i++)
    {
       for(int j=0;j<s2.length();j++)
       {
          if(s1[i]==s2[j])
             c.push_back(s1[i]);    
           
       }    
       
    }
    int k=c.size();
    
    for(int i=0;i<k;i++)
    {
       for(int j=i+1;j<k;)
       {
          if(c[i]==c[j])
          {
             for(int l=j;l<k-1;++l)
                 c[l]=c[l+1];
             --k;
          }
          else
              ++j;
       }    
    
    }
    cout<<k;


}

int main()
{

    string s1{"shinchan"};
    string s2{"noharaaa"};
    
    
    
    func(s1,s2);
    return 0;
       
    
}