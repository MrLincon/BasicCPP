#include <iostream>
using namespace std;

int main(){
    int i;
    cout<< "Enter a number: ";
    cin>>i;
    cout<< "\n";

    if(i<10){
        cout<<i<<" "<< "is smaller than 10"<<endl;
    }if(i>10){
        cout<<i<<" "<< "is greater than 10"<<endl;
    }
}
