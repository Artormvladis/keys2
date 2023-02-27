#include"sorti.h"
#include"easy_list.h"
void rb(vector <int> &mass, vector <int> &mass2){
    itc_lshift_list(mass2);
    }
void rr(vector <int> &mass, vector <int> &mass2){
    itc_lshift_list(mass);
    itc_lshift_list(mass2);
    }

str check(vector <int> &mass) {
	for(int i = 1; i < mass.size(); i++)
		if mass[i] < mass[i-1]:
			return "KO";
	return "OK";
}
