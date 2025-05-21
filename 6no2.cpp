#include <iostream>
using namespace std;

int main(){

int a[2][3]= { {1,2,3},{6,7,8}};
int max = a[0][0];
int min = a[0][0];
int b = 5;
bool cari = true;

cout << "Apakah 5 ada di matriks? "<< endl;
cout << "Matriks : "<< endl;

    for ( int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";

            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
                
            if( b != a[i][j]){
                cari = false;
            }
           
        }
        
        cout << endl;

    }
    if (cari){
        cout << "Nilai ada di matriks."<< endl;
    }else{
        cout << "Nilai tidak ada di matriks."<< endl;
    }

    cout << "Elemen terbesar : " << max << endl;
    cout << "Elemen terkecil : " << min << endl;


    return 0;
}