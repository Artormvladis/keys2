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

    for(int d1=0; d1<mass.size(); d1++){
        cout<<mass[d1]<<endl;
    }
    return 0;
}
