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
        vector <int> mass3;
        int a;
        a=mass2[mass2.size()-1];
        for(int i=mass2.size()-1; i>0; i--){
            mass2[i]=mass2[i-1];
        }
        mass2.push_back(mass[0]);
        for(int i1=1; i1<mass.size(); i1++){
                    mass[i1-1]=mass[i1];
        }
        int a1;
        a1=mass2[mass2.size()-1];
        for(int i=mass2.size()-1; i>0; i--){
            mass[i]=mass2[i-1];
        }
        mass2[0]=a1;
        for(int i2=0; i2<mass.size()-1; i2++){
            mass3.push_back(mass[i2]);
            }
        mass=mass3;
        }}
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
        for(int i=mass.size()-1; i>0; i--){
            mass[i]=mass[i-1];
        }
        mass[0]=a1;
        for(int i2=0; i2<mass2.size()-1; i2++){
            mass3.push_back(mass2[i2]);
            }
        mass2=mass3;
        }}
