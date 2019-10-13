#include <iostream>
using namespace std;

int main(){
    int i;
    cout<< "Enter a number between 1-10: ";
    cin>>i;
    cout<< "\n";


    switch(i){
        case 1:
            cout<<i<<" "<< "is an odd number!"<<endl;
            break;
        case 2:
            cout<<i<<" "<< "is an even number!"<<endl;
            break;
        case 3:
            cout<<i<<" "<< "is an odd number!"<<endl;
            break;
        case 4:
            cout<<i<<" "<< "is an even number!"<<endl;
            break;
        case 5:
            cout<<i<<" "<< "is an odd number!"<<endl;
            break;
        case 6:
            cout<<i<<" "<< "is an even number!"<<endl;
            break;
        case 7:
            cout<<i<<" "<< "is an odd number!"<<endl;
            break;
        case 8:
            cout<<i<<" "<< "is an even number!"<<endl;
            break;
        case 9:
            cout<<i<<" "<< "is an odd number!"<<endl;
            break;
        case 10:
            cout<<i<<" "<< "is an even number!"<<endl;
            break;
        default:
            cout<< "Something wrong!"<<endl;

    }

    return 0;

}


