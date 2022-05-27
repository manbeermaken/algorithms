#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int iMin = i;
        for(int j = i+1; j<n ; j++){
            if(arr[j]<arr[iMin]){
                iMin=j;
            }
        int temp = arr[i];
        arr[i] = arr[iMin];
        arr[iMin] = temp;
        }
    }
}
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int arr[3] = {3,1,6};
    selectionSort(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}