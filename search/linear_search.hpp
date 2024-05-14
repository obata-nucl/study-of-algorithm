#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H
#endif

#include<bits/stdc++.h>
using namespace std;


double linear_search(vector<double> sample,double target){
    for(int i=0;i<sample.size();i++){
        if(sample[i] == target){
            return i;
        }
        else{
            return -1;
        }
    }
}