#include <iostream>
using namespace std;
int main() {
    int n=0, i=0, numero1=0, numero2=1, successivo=0;
    cin>>n;

    for (i=1; i<=n; i++){

        if (successivo<=n){

            cout<<numero2<<endl;
            successivo=numero1+numero2;
            numero1=numero2;
            numero2=successivo;
        }

    }



        return 0;
}

