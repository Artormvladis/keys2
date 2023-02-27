#include"sorti.h"
#include"easy_list.h"
int main(){
    vector <int> mass;
    vector <int> mass2;
    string fun;
    int b = 0;
    string a;
    getline(cin, a);
    for (int x = 0; a[x] != '\0'; x++){
        if(a[x] == ' '){
            mass.push_back(b);
            b = 0;
        }
        else
            b = b * 10 + (a[x] - 48);
    }
    mass.push_back(b);
    cin>>fun;
    while(fun!='*'){
        if(fun=="sa"){
           sa(mass, mass2);
        }
        if(fun=="sb"){
           sb(mass, mass2);
        }
        if(fun=="ss"){
           ss(mass, mass2);
        }
        if(fun=="pa"){
           pa(mass, mass2);
        }
        if(fun=="pb"){
           pb(mass, mass2);
        }
        if(fun=="ra"){
           ra(mass, mass2);
        }
        if(fun=="rb"){
           rb(mass, mass2);
        }
        if(fun=="rr"){
           rr(mass, mass2);
        }
        if(fun=="rra"){
           rra(mass, mass2);
        }
        if(fun=="rrb"){
           rrb(mass, mass2);
        }
        if(fun=="rrr"){
           rrr(mass, mass2);
        }
        cin>>fun;
    }
    cout<<str check(vector <int> &mass);
return 0;
}
