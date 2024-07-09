#include <iostream>
using namespace std;

int main () {

    float a,b,hasil;
    char op;


    cout << "selamat datang di kalkulator case ( kalkulator ini masih tahap beta )" <<endl;
    cout << "silahkan masukan bilangan pertama = ";

    cin >> a;

    cout << "Masukan operasi hitung = ";
    cin >> op;

    cout << "Masukan bilangan kedua = ";
    cin >> b;

    switch (op) {
        case '+' : 
        hasil = a + b;

        break;

        case '-' :
        hasil = a - b;
        
        break;

        case 'x' :
        hasil = a * b;

        break;

        case '/':
        hasil = a/b;

        break;

        default:
        cout << "invalid!!";
    } 

cout << "hasil dari perhitungan " << a << " " <<  op << " " << b << " " << "adalah = " << hasil;



cout << "test commit awokwoakwoa";

    
}