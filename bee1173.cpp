//Problem name-> Array fill I

#include<iostream>
using namespace std;
int main()
{
    int v, n[10],i;
    cin>>v;
    for(i=0; i<10; i++)
    {
        n[i]=v;
        cout<<"N["<<i<<"] = "<<n[i]<<endl;
        v=v*2;

    }
    return 0;
}


