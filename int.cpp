#include <iostream>
using namespace std;

int main ()
{
    // Pendeklarasian variebel;
    int a, b = 2;
    
    int hasil ;

    // operasi

    a = 5; //assigment operator bukan inisialisasi
    a = a + 1;
    hasil = a - b;

    // output hasil operasi diatas
    cout <<"Hasil dari operasi variabel adalah :"<<hasil;

    return 0;
}