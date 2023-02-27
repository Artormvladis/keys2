#include "sorti.h"
#include "easy_list.h"
int main()
{
    vector <int> mass;
    vector <int> mass2;
    int b = 0;
    string a;
    getline(cin, a);

    // Transform str to vector of <int>

    for (int x = 0; a[x] != '\0'; x++){
        if(a[x] == ' '){
            mass2.push_back(b);
            b = 0;
        }
        else
            b = b * 10 + (a[x] - 48);
    }
    mass2.push_back(b);

    // Transfer to mass2
    itc_rev_list(mass2);
    for (int i = 0; i < mass2.size(); i++)
        cout << "pb\n";

    // Roulette sort from mass2 to mass

    while(mass2.size() > 0){
        if (mass2.size() && (mass2[0] == list_max(mass2))){
            cout << "pa\n";
            itc_lshift_list(mass2);
            mass2.pop_back();
    }
        else{
            cout << "rrb\n";
            rrb(mass, mass2);
        }
    }
    return 0;
}
