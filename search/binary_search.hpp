#include<bits/stdc++.h>
using namespace std;

double binary_search(vector<double> sample, double target){
    int low = 0;
    int high = sample.size()-1;
    while(low <= high){
        int mid = (low + high)/2;
        if(sample[mid] == target){
            return mid;
        }
        else if(sample[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return -1;
}