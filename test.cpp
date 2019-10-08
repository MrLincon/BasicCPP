#include <iostream>
using namespace std;

int main(){
     int choice;
     cout<<"Enter your choice: ";
     cin>>choice;

     if(choice==1){
        string str1,str2;
        cout<<"Enter string 1: ";
        getline(cin,str1);
        cout<<"\n";

        cout<<"Enter string 2: ";
        getline(cin,str2);
        cout<<"\n";

        cout<<"String: "<<str1+" "+str2;
        cout<<"\n";

    }

}
