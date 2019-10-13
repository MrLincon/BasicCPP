#include <iostream>
using namespace std;

int main(){
    int i;
    cout<< "Enter a number: ";
    cin>>i;
    cout<< "\n";

    if(i<5){
        cout<<i<<" "<< "is smaller than 5"<<endl;
    }else if(i<10){
        cout<<i<<" "<< "is smaller than 10"<<endl;
    }else if(i>10){
        cout<<i<<" "<< "is greater than 10"<<endl;
    }
}

