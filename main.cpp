#include "sorti.h"
#include "easy_list.h"
int main()
{
    vector <int> mass;
    vector <int> mass2;
    int b;
    int i;
    string a;
    cin>>a;
    while(a!="!"){
        for(i=i+1; i<a.size(); i++){
            if(a[i]=" "){
                break;
            }
            b=0;
            b=b*10+a[i];
            mass.push_back(b-48);
        }
    }
    int minn;
    minn=list_min(mass);
    while(mass2.size()<mass.size()){
    while(mass[0]!=minn){
        rra(mass);
        cout<<rra;
    }
        pb(mass, mass2);
        cout<<pb;
    }
    for(i1=0; i1<mass.size(); i1++){
        pa(mass, mass2);
        cout<<pa;
    }
    return 0;
}
