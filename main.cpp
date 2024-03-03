#include<bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int n = rand() % 100 + 1;
       int m;
    cout<<"The number between 1 to 100"<<endl;
    cin>>m;
    while(m!=n)
    {
        if(m<n)
        {
            cout<<"Too Low"<<endl;
        }
        else
        {
            cout<<"Too High"<<endl;
        }
        cout<<"Try again"<<endl;
        cin>>m;
    }
    cout<<"Congrats";
    return 0;
}