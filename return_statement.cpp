#include <iostream>
using namespace std;

int SUM(int a, int b){
    int sum = a+b;
    return sum;
}

int main(){
    int x,y;
    cout<< "Enter two numbers:"<<endl;
    cout<< "\n";
    cin>>x;
    cout<< "\n";
    cin>>y;
    cout<< "\n";

    int sum = SUM(x,y);

    cout<< "Sum: "<<sum<<endl;

    return 0;
}
