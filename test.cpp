#include <iostream>
using namespace std;

int main(){
     int c;
     cout<<"Enter your choice: ";
     cin>>c;
     cout<<"\n";

     if(c==1){
        cin.ignore();
        string str1,str2;
        cout<<"Enter string 1: ";
        getline(cin,str1);
        cout<<"\n";

        cout<<"Enter string 2: ";
        getline(cin,str2);
        cout<<"\n";

        cout<<"String: "<<str1+" "+str2;
        cout<<"\n";

    }else{
        cout<< "Something Wrong!";
    }
}
