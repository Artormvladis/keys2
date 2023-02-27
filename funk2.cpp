#include"sorti.h"
#include"easy_list.h"
void rra(vector <int> &mass, vector <int> &mass2){
    if(mass.size()>0){
        int a;
        a=mass[mass.size()-1];
        for(int i=mass.size()-1; i>0; i--){
            mass[i]=mass[i-1];
        }
        mass[0]=a;
    }}
void rrb(vector <int> &mass, vector <int> &mass2){
    if(mass2.size()>0){
        int a;
        a=mass2[mass2.size()-1];
        for(int i=mass2.size()-1; i>0; i--){
            mass2[i]=mass2[i-1];
        }
        mass2[0]=a;
    }}
void rrr(vector <int> &mass, vector <int> &mass2){
    rra(mass, mass2);
    rrb(mass, mass2);
}
void ra(vector <int> &mass, vector <int> &mass2){
    itc_lshift_list(mass);
    }
int list_max(vector <int> &mass){
    int maximum = 0;
    for(int i = 0; i < mass.size(); i++)
        if (mass[i] > maximum)
            maximum = mass[i] ;
    return maximum;
}
