#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,a,q,p,ne,seen,j,m;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>a>>q;
        char s[q];
        cin>>s;
        seen=a;
        m=0;
        ne=0;
        if(a==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            for(j=0;j<strlen(s);j++)
            {
                if(s[j]=='-')
                {
                    ne=ne+1;
                }
                else if(s[j]=='+')
                {
                    if(ne!=0)
                    {
                        ne=ne-1;
                        m=m+1;
                    }
                    else
                    {
                    seen=seen+1;                        
                    }
                }
            }
            if(seen>=n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                if((seen+m)>=n)
                {
                    cout<<"MAYBE"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
        }

    }
    return 0;
}