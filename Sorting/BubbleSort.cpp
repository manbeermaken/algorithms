#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i = 1 ; i <= n-1 ; i++){
        int flag = 0;
       for(int j; j<=n-i-1; j++){
           if(arr[i]>arr[j]){
               int temp = arr[i];
               arr[i] = arr[i+1];
               arr[i+1]=temp;
               flag = 1;
           }
       }
       if(flag == 0) break;
    }
} 
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    return 0;
}