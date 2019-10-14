#include <iostream>
using namespace std;

int max(int x,int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}

int min(int x,int y){
    if(x<y){
        return x;
    }else{
        return y;
    }
}

int avg(int x,int y){
    int average = (x+y)/2;
    return average;
}

int main(){
    int a,b;
    int choice;

    cout<< "1. Maximum"<<endl;
    cout<< "2. Minimum"<<endl;
    cout<< "3. Average"<<endl;
    cout<< "\n";
    cout<< "Enter a choice: ";
    cin>>choice;
    cout<< "\n";

    cout<< "Enter first number: ";
    cin>>a;
    cout<< "Enter second number: ";
    cin>>b;
    cout<< "\n";

    if(choice == 1){
        int maximum = max(a,b);
        cout<< "Maximum number: "<<maximum<<endl;
    }else if(choice == 2){
        int minimum = min(a,b);
        cout<< "Minimum number: "<<minimum<<endl;
    }else if(choice == 3){
        int average = avg(a,b);
        cout<< "Average number: "<<average<<endl;
    }else{
        cout<< "Something wrong! :("<<endl;
    }
}
