// My code

#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter the number of rows and cols: ";
    cin>>n>>m;
    
    int* * arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }
    
    cout<<endl<<"Enter the elements of the 2D array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    cout<<"Displaying the 2D array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0;i<n;i++){
        delete []arr[i];
    }
    
    delete []arr;
    
    return 0;
}








________________________________________________________________________________________________________________________________________________________
















include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    // creation
    
    int* * arr = new int*[n];
    
    for(int i=0;i<n;i++ ){
      arr[i]=new int[n];
    }
    
    // set values
    
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>arr[i][j];
      }
    }
    
    // print
    
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
    return 0;
}





// first i am creating an array of pointers, pointing to an array of integers
// i am creating this on heap memory
// statement : 
// int* * arr= new int[rows];
// then I am creating n columns by creating a row of size n and making each element pointing to such array
// pseudocode:
// for(int i=0;i<n;i++){
//      arr[i] = new int[n];
//  }
// creation done
// i have created an array of pointers, pointing to an integer array
// first part "int*" is the data type the array of pointers is pointing to
// the second star is to denote it is a pointer 


}

