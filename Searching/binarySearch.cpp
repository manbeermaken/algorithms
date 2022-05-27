#include <iostream>
using namespace std;
int BinarySearch(int A[],int n, int x){
    int start=0;
    int end=n-1;
    while(start <= end){
        int mid = low + (high-low)/2;
        if(A[mid] == x) return mid;
        else if(A[mid] < x) start = mid + 1;
        else end = mid -1;
    }
    return -1;
} 
int RecursiveBinarySearch(int A[], int start , int end , int x){
    int mid = start + (end - start)/2;
    if(start>end) return -1;
    if(A[mid] == x) return mid;
    else if(x < A[mid]) RecursiveBinarySearch(int A[], int start ,mid -1 , int x);
    else RecursiveBinarySearch(int A[], mid + 1 , int end , int x);
}

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    return 0;
}