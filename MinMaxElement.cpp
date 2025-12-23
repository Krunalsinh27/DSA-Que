#include<iostream>
#include<vector>
using namespace std;

vector<int> findMinMax(vector<int>& arr){
    int n = arr.size();
    int mini, maxi, i;

    if(n%2 == 1){
        mini = maxi = arr[0];
        i = 1; 
    }else{
        if(arr[0] < arr[1]){
            mini = arr[0];
            maxi = arr[1];
        }else{
            mini = arr[1];
            maxi = arr[0];
        }
        i = 2;
    }

    while(i < n-1){
        if(arr[i] < arr[i + 1]){
            mini = min(mini, arr[i]);
            maxi = max(maxi, arr[i+1]);
        }else{
            mini = min(mini, arr[i+1]);
            maxi = max(maxi, arr[i]);
        }
        i += 2;
    }

    return {mini, maxi};
}


int main(){
    vector<int> arr = {2, 3, 53, 6, 23, 5, 7, 1};
    vector<int> result = findMinMax(arr);
    if(!result.empty()){
        cout << result[0] << " " << result[1] << endl;
    }
}