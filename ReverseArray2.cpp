#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr){
    int left = 0;
    int right = arr.size() - 1;
    while(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main(){
    vector<int> arr = {12,1,4,2,7,43,32,6};

    reverseArray(arr);
    for(int i=0; i<arr.size(); i++){
        cout<< arr[i] << " ";
    }
    return 0;
}