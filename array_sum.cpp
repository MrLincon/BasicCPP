#include <iostream>
using namespace std;

int main(){

    int i,sum = 0,length;
    cout<< "Enter the length of the array: ";
    cin>>length;
    cout<< "\n";
    int A[length];

    cout<< "Enter your numbers:"<<endl;

    for(i=0;i<length;i++){
        cin>>A[i];
    }
    cout<< "\n";

    int n = sizeof(A)/sizeof(*A);

    for(i=0;i<n;i++){
        cout<<A[i]<<" ";
         sum = sum + A[i];

    }
    cout<< "\n\n";
    cout<< "Sum: "<<sum<<endl;

}

