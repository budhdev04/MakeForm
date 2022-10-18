#include <iostream>

using namespace std;

int main()
{
    
    //test cases so t and while t-- basic 
    int t;
    cin>>t;
    
    int arr[100]; //NOTE SO THAT TIME LESS LE 100 IS THE GIVEN COMSTRAINT
    while(t--) {
        
        //size of exact input
        int n;
        cin>>n;
        
        for(int i=0;i<n;i++) {
            
            cin>>arr[i];
        }
        
        //reverse array , so need index of first and last elem 
        for(int i =0,j = n-1;i<n/2;i++,j--) {  //NOTE HOW TO MANAGE TWO INDEX AT A TIME
            
            //swapping so temp 
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
        for(int i = 0;i<n;i++) {
            
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
    

    return 0;
}
