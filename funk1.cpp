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
        int a;

        a = mass[0];
        itc_lshift_list(mass);
        mass.pop_back();
        itc_rshift_list(mass);

        itc_lshift_list(mass2);
        mass2.push_back(a);
        itc_rshift_list(mass2);
    }
}
void pa(vector <int> &mass, vector <int> &mass2){
    if(mass2.size()>0){
        int a;
        vector <int> mass3;
        a=mass[mass.size()-1];
        for(int i=mass.size()-1; i>0; i--){
            mass[i]=mass[i-1];
        }
        mass[0]=a;
        mass.push_back(mass2[0]);
        for(int i=mass2.size()-1; i>0; i--){
            mass2[i]=mass2[i-1];
        }
        int a1;
        a1=mass[mass.size()-1];
        }}
void rra(vector <int> &mass){
    if(mass.size()>0){
        int a;
        a=mass[mass.size()-1];
        for(int i=mass.size()-1; i>0; i--){
            mass[i]=mass[i-1];
        }
        mass[0]=a;
    }}
