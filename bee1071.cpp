//problem name->Sum of consecutive Odd numbers I

#include<iostream>
using namespace std;
int main()
{

    int x,y, n=0;
    int min,max;
    cin>>x>>y;
    if(x<y)
    {
        min=x;
        max=y;
    }
    else
    {
        min=y;
        max=x;
    }

    for(int i=(min+1); i<max; i++)
    {
        if(i%2!=0)
        {
            n=n+i;

        }

    }
    cout<<n<<endl;

    return 0;
}
