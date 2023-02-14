#include "sorti.h"
void sa(vector <int> &mass){
    if(mass.size()>0){
        int a;
        a=mass[0];
        mass[0]=mass[1];
        mass[1]=a;
    }}
void pb(vector <int> &mass, vector <int> &mass2){
    if(mass.size()>0){
        mass2.push_back(0);
        int a;
        a=mass2[mass2.size()-1];
        for(int i=mass2.size()-1; i>0; i--){
            mass2[i]=mass2[i-1];
        }
        mass2[0]=a;
        mass2[0]=(mass[0]);
        for(int i1=1; i1<mass.size(); i1++){
                    mass[i1-1]=mass[i1];
        }}}
void pa(vector <int> &mass, vector <int> &mass2){
    if(mass2.size()>0){
        int a;
        a=mass[mass.size()-1];
        for(int i=mass.size()-1; i>0; i--){
            mass[i]=mass[i-1];
        }
        mass[0]=a;
        mass[0]=(mass2[0]);
        for(int i=mass2.size()-1; i>0; i--){
            mass2[i]=mass2[i-1];
        }
    }}
