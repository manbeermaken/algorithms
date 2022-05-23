#include <iostream>
using namespace std;
void Mergesort(int arr[]){
    int n=sizeof(arr),midPoint = n / 2;
    int left[midPoint],right[n-midPoint];
    for(int j=0 ; j<=midPoint ; j++) left[j] = arr[j];
    int i = 0;
    for(int j = midPoint+1 ; j< n ; j++){
        right[i] = arr[j];
        i++;
    }
    Mergesort(left);
    Mergesort(right);
    Merge(left,right,n);
}
void Merge(int left[],int right[],int n){
    int i,j,k=0;
    if(left[i]<=right[j]){
        
    }
}




int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
        
    return 0;
}