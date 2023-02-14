#include "sorti.h"
int main()
{
    vector <int> mass;
    vector <int> mass2;
    int b;
    string a;
    cin>>a;
    while(a!="!"){
        for(int i=0; i<a.size(); i++){
            b=0;
            b=b*10+a[i];
            mass.push_back(b-48);
        }
        cin>>a;
    }
    sa(mass);
    pb(mass, mass2);
    pb(mass, mass2);
    pb(mass, mass2);
    sa(mass2);
    pa(mass, mass2);
    sa(mass2);
    pa(mass, mass2);
    pa(mass, mass2);
    for(int d=0; d<mass.size(); d++){
        cout<<mass[d]<<endl;
    }
    for(int d1=0; d1<mass2.size(); d1++){
        cout<<mass2[d1]<<endl;
    }
    return 0;
}

