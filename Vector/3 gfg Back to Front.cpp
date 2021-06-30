#include<bits/stdc++.h>
//#include <algorithm>
//#include <vector>
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
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;

}




/* #include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int vrr[n];
    for (int i=0; i<n; i++){
        cin>>vrr[i];
    }
    reverse(vrr,vrr+n);

    for(int i=0; i<n; i++)
    {
        cout<<vrr[i]<<" ";
    }
  return 0;

}

*/
