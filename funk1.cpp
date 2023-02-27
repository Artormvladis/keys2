#include "sorti.h"
#include "easy_list.h"

void sa(vector <int> &mass, vector <int> &mass2){
    if(mass.size()>0){
        int a;
        a=mass[0];
        mass[0]=mass[1];
        mass[1]=a;
    }}
void sb(vector <int> &mass, vector <int> &mass2){
    if(mass2.size()>0){
        int a;
        a=mass2[0];
        mass2[0]=mass2[1];
        mass2[1]=a;
    }}
void ss(vector <int> &mass, vector <int> &mass2){
    sa(mass, mass2);
    sb(mass, mass2);
}
void pb(vector <int> &mass, vector <int> &mass2){
    if(mass.size()>0){
        int a = mass[0];

        itc_lshift_list(mass);
        mass.pop_back();

        mass2.push_back(a);
        itc_rshift_list(mass2);
    }
}
void pa(vector <int> &mass, vector <int> &mass2){
    if(mass2.size()>0){
        int a = mass2[0];

        itc_lshift_list(mass2);
        mass2.pop_back();

        mass[mass.size()]=a;
        itc_rshift_list(mass);
    }
}
