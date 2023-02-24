#include "sorti.h"
#include "easy_list.h"
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
    int min;
    min=list_min(mass);
    while(mass2.size<mass.size){
    while(mass[0]!=min){
        rra(mass);
        cout<<rra;
    }
        pb(mass, mass2);
        cout<<pb;
    }
    for(i1=0; i1<mass.size; i1++){
        pa(mass, mass2);
        cout<<pa;
    }
    return 0;
}
