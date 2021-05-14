#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int a[40], key=1, temp, i, d[40], e[40];
    srand((unsigned) time(nullptr));
    cout<<"Before sort"<<'\n';
    for (i = 0; i < 40; ++i) {
        a[i]=rand()%90+10;
        cout<<a[i]<<'\t';
        if(a[i]%2==1)
        {
            d[i]=a[i];
            e[i]=-1;
        }
        if(a[i]%2==0)
        {
            e[i]=a[i];
            d[i]=-1;
        }
    }
    while(key==1)
    {
        key=0;
        for(i = 1; i < 40; ++i)
        {
            if(d[i-1]>d[i])
            {
                temp=d[i-1];
                d[i-1]=d[i];
                d[i]=temp;
                key=1;
            }
            if(e[i-1]>e[i])
            {
                temp=e[i-1];
                e[i-1]=e[i];
                e[i]=temp;
                key=1;
            }
        }
    }
    cout<<'\n'<<'\n'<<"After sort"<<'\n';
    for (i = 0; i < 40; ++i) {
        if(d[i]!=-1) {
            cout << d[i] << '\t';
        }
    }
    for (i = 0; i < 40; ++i) {
        if(e[i]!=-1) {
            cout << e[i] << '\t';
        }
    }
    return 0;
}