#include<iostream>
#include<forward_list> 
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        forward_list<int> v;
        //auto it = l.begin();
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        { 
            int element;
            cin>>element;
            //v.push_front(element);
            v.push_front(element);
        }
        for(int x:v)
        {
            cout<<x<<" ";
        }

    }
}
