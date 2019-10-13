#include <iostream>
using namespace std;

int main(){
    int i,j,p;
    string choice;

    lable:
    cout<< "1. Continue + Jump"<<endl;
    cout<< "2. Break + Jump"<<endl;
    cout<< "\n";

    cout<< "Choose 1 or 2: ";
    cin>>p;
    cout<< "\n";

    cout<< "Enter the number you want to exclude between 1-10: ";
    cin>>j;
    cout<< "\n";

    if(p==1){
        for(i=1;i<=10;i++){
            if(i==j){
                continue;
            }else{
                cout<<i<<" ";
            }
        }
    }else if(p==2){
        for(i=1;i<=10;i++){
            if(i==j){
                break;
            }else{
                cout<<i<<" ";
            }
        }
    }


    cout<< "\n"<<endl;
    cout<< "Do you want to select again? Y/N  ";
    cin>>choice;
    cout<< "\n";
    if(choice == "Y" || choice == "y"){
        goto lable;
        cout<< "\n";
    }else{
        cout<< "Thank You!"<<endl;
    }

    return 0;
}




