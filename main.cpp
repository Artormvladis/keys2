#include "sorti.h"
#include "easy_list.h"


int main(){
    vector <int> mass;
    vector <int> mass2;
    int b;
    int i;
    string a;
    cin >> a;

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
<<<<<<< HEAD

    int minimum=list_min(mass);
    while(mass2.size() < mass.size()){
        while(mass[0] != minimum){
            rra(mass);
            cout<<"rra";
        }
            pb(mass, mass2);
            cout<<"pb";
        }
        for(int i1=0; i1<mass.size(); i1++){
            pa(mass, mass2);
            cout<<"pa";
        }
=======
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
>>>>>>> a372f3d871f7c1656743def3043abe9bff61d503
    return 0;
}
