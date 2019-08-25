#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,n1,h;
    cin>> t;
    vector<int>v;
    vector<int> ans;
    while(t--)
    {
        cin>> n;
        cin >> n1;
        for(int i=0;i<n1;i++)
        {
            cin >> h;
            v.push_back(h);
        }
        int ha = 0;
        for(int i=0;i<v.size();i++)
        {
            for(int j=1;j<=n;j++)
            {
                 if(j%v[i]==0)
                 {
                      if((j%7)== 0 || (j+1)%7==0)
                           continue;
                      else
                        ans.push_back(j);
                 }
            }
        }
        int an = 0;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]!= 0)
            {
                for(int j=i+1;j<ans.size();j++)
                {
                    if(ans[i]==ans[j])
                    {
                        ans[j]=0;
                    }
                }
                an++;
            }
        }
        cout << an << endl;
        cout << endl;
        v.clear();
        ans.clear();
    }
}
