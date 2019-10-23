#include <iostream>
using namespace std;

int main(){
    int A[] = {1,2,3,4,5,6};
    int i;
    int n = sizeof(A)/sizeof(*A);

    for(i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
