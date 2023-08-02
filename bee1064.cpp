//problem name-> Positive and Average(beginner)
#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    float sum=0, n,avg;
    int count=0;
    for(int i=0; i<6; i++)
    {
        cin>>n;
        if(n>0)
        {
            sum=sum+n;
            count++;
        }
    }
    avg=sum/count;
    cout<<count<<" valores positivos"<<endl;
    cout<<fixed<<setprecision(1)<<avg<<endl;


    return 0;
}
