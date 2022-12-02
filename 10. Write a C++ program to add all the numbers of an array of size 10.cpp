
#include<iostream>
using namespace std;
int main()
{
    int a[10],i,c=0;
    cout<<"enter 10 numbers \n";
    for(i=0;i<10;i++)
    { cin>>a[i]; }
    for(i=0;i<10;i++)
    {
        c=c+a[i];
    }
    cout<<"sum all number is :"<<c;

    return 0;
}

