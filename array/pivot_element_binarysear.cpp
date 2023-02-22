#include<iostream>
using namespace std;
int pivotsearch(int arr[], int n){
    int s = 1;
    int e = n;
    int mid = s + (e - s)/2;

    while (s < e)
    {
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;

}
int main(){
    int arr[5] = {3, 7, 8, 9, 1};

    cout<<"pivot element is "<< pivotsearch(arr, 5);
}