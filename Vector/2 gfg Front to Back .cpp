#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;

}
