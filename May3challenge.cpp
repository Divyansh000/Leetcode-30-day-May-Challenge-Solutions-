#include<iostream>
using namespace std;
class Solution {
public:
    bool canConstruct(string a, string b)
    {
        int i=0,c=0,j=0;
        for(i=0;i<a.length();i++)
        {
            for(j=0;j<b.length();j++)
            {
                if(a[i]==b[j])
                {
                    a[i]=b[j]='0';
                    c++;
                    break;
                }
            }
        }
        if(c==a.length())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Solution ob;
    cout<<ob.canConstruct("abc","ghdd")<<endl;
    cout<<ob.canConstruct("abc","abcde");
    return 0;
}
