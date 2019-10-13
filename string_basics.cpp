#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

void stringConcatenation1();
void stringConcatenation2();
void stringCase();
void stringCaseWithLoop();

int main(){
    int choice;
    string again;

    cout<< "List of programs:"<<endl;
    cout<< "1:  stringConcatenation1()"<<endl;
    cout<< "2:  stringConcatenation2()"<<endl;
    cout<< "3:  stringCase()"<<endl;
    cout<< "4:  stringCaseWithLoop()"<<endl;
    lable:
    cout<< "\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    cout<< "\n";

   switch(choice){
        case 1:
                stringConcatenation1();
            break;
        case 2:
                stringConcatenation2();
            break;
        case 3:
                stringCase();
            break;
        case 4:
                stringCaseWithLoop();
            break;
        default:
                cout<< "Something wrong!"<<endl;
                cout<< "\n";
            break;
    }
     cout<< "\n";
     cout<< "Would you like to choose again? Y/N ";
                cin>>again;
                if(again == "y" || again == "Y"){
                    goto lable;
                }else{
                     cout<< "\n";
                     cout<< "Thank you!";
                }

        return 0;
}

void stringConcatenation1(){
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
}

void stringConcatenation2(){
        cin.ignore();
        char s1[20],s2[20];
        cout<<"Enter string 1: ";
        cin.getline(s1,20);
        cout<<"\n";
        cout<<"Enter string 2: ";
        cin.getline(s2,20);
        cout<<"\n";

        cout<<"String: "<<strcat(s1,s2);
        cout<< "\n";
}

void stringCase(){
        cin.ignore();
        char str[15];
        cout<<"Enter your string: ";
        cin.getline(str,15);
        cout<<"\n";

        cout<<"Upper Case: "<<strupr(str)<<endl;

        cout<<"Lower Case: "<<strlwr(str)<<endl;
        cout<< "\n";
}

void stringCaseWithLoop(){
        cin.ignore();
        string str;
        cout<<"Enter your string: ";
        getline(cin,str);
        cout<<"\n";

        for_each(str.begin(),str.end(),[](char & c){
                 c = toupper(c);
                 });

        cout<<"Upper Case: "+str<<endl;

        for_each(str.begin(),str.end(),[](char & c){
                 c = tolower(c);
                 });

        cout<<"Lower Case: "+str<<endl;
        cout<< "\n";
}



