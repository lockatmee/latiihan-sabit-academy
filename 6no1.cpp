#include <iostream>
using namespace std;

int a[]= {2,2,3,2,2,3};
int n = sizeof(a) / sizeof(a[0]);
bool semuaSama = true;

int main(){
    for ( int i = 0; i < n; i++){
        if ( a[i] != a[0]){
            semuaSama = false;

            break;
        }
    }
    
    if (semuaSama){
        cout << " Semua Elemen yang sama. "<< endl;
    } else{
        cout << " Ada elemen yang beda. "<< endl;
    }
}
