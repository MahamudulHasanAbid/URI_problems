//Problem name-> Array selection I

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    double x, a[100];

    for(i=0; i<100; i++)
    {
        cin>>x;
        a[i] = x;
    }
    for(i=0;i<100;i++)
    {
        if(a[i]<=10)
        {
            cout << "A[" << i << "] = " <<fixed<<setprecision(1)<<a[i]<<endl;
        }
    }

    return 0;
}

