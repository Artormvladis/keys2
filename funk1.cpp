#include "sorti.h"
#include "easy_list.h"

void sa(vector <int> &mass){
    if(mass.size()>0){
        int a;
        a=mass[0];
        mass[0]=mass[1];
        mass[1]=a;
    }}
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
void rra(vector <int> &mass){
    if (mass.size() > 0){
    int container = mass[mass.size() - 1];
        for(int x = mass.size() - 2; x > -1; x--)
            mass[x+1] = mass[x];
        mass[0] = container;
}
}

int list_min(vector <int> &mass){
    int minimum = 2147483647;
    for(int i = 0; i > mass.size(); i++)
        if (mass[i] < minimum)
            minimum = mass[i] ;   
    return minimum;
}
