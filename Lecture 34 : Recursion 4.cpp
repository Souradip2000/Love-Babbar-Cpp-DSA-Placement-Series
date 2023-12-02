// to reverse a string using recursion
#include<iostream>
using namespace std;

// Approach : we would do it using two pointers and an while(i<j) loop
// Recursion : we solve one case and just write the base case
// Follow the same approach as in loops

void reverseStr(string& s, int i, int j){
    if(i>j) return;
    swap(s[i++],s[j--]);
    reverseStr(s,i,j);
}

int main(){
    string s="abcde";
    reverseStr(s, 0, s.length()-1);
    cout<<s;
    return 0;
}




// to solve the above problem using a single pointer

void reverseStr(string& s, int i){
    if(i>=((s.length())/2)) return;
    swap(s[i++],s[s.length()-i-1]);
    reverseStr(s,i);
}






// program to check for palindrome using recursion

#include<iostream>
using namespace std;

// Approach : use two pointers and check if they are equal or not
// Solve one case
// write base case

bool isPalindrome(string s, int i, int j){
    if(i>=j) return true;
    if(s[i]!=s[j])  return false;
    return isPalindrome(s, ++i, --j);
}

int main(){
    string s="abdba";
    if(isPalindrome(s, 0, s.length()-1))    cout<<"yes";
    else cout<<"no";
    return 0;
}






// program for exponentiation using recursion

#include<iostream>
using namespace std;

// naive approach : use a for loop and keep multiplying
// optimised approach : if a^b and b is even 
// then a^b = a^(b/2) * a^(b/2)
// and if b is odd :
// a * a^(b/2) * a^(b/2) 

int exponentiation(int a, int b){
    if(b==0)    return 1;
    if(b%2==0){
        return exponentiation(a, b/2)* exponentiation(a,b/2);
    }
    return a*exponentiation(a, b/2)* exponentiation(a,b/2);
}

int main(){
    int a=2,b=2;
    cout<<exponentiation(a,b);
    return 0;
}






// code for bubble sort
#include<iostream>
using namespace std;

// approach : take the largest element and put it in its rightmost place

void bubbleSort(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[5]={3,5,1,4,2};
    bubbleSort(arr, 5);
    for(int i: arr) cout<<i<<" ";
    return 0;
}
