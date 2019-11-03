#include <iostream> 
// program untuk konversi angka ke huruf romawi
/*
Dik:
M = 1000
D = 500
C = 100
L = 50
X = 10
I = 1
*/
using namespace std;
int main()
{
    int tahun;
    cout << "Tahun (1 - 3999): ";
    cin >> tahun;

    if(tahun < 1 || tahun > 3999)
     cout << "Tahun harus dalam jangkauan 1 - 3999";
    else{
         while(tahun >= 1000){
           cout << "M";
           tahun -= 1000;
         }

         if(tahun >= 500){
           if(tahun >= 900){
             cout << "CM";
             tahun -= 900;
           }
           else{
             cout << "D";
             tahun -= 500;
           }
         }


         while(tahun >= 100){
           if(tahun >= 400){
            cout << "CD";
            tahun -= 400;
           }
           else{
             cout << "C";
             tahun -= 100;
           }
         }

         if(tahun >= 50){
           if(tahun >= 90){
             cout << "XC";
             tahun -= 90;
           }
           else{
             cout << "L";
             tahun -= 50;
           }
         }

         while(tahun >= 10){
           if(tahun >= 40){
             cout << "XL";
             tahun -= 40;
           }
           else{
             cout << "X";
             tahun -= 10;
           }
         }

         if(tahun >= 5){
           if(tahun==9){
             cout << "IX";
             tahun -= 9;
           }
           else{
             cout << "V";
             tahun -= 5;
           }
         }

         while(tahun >= 1){
           if(tahun==4){
             cout << "IV";
             tahun -= 4;
           }
           else{
             cout << "I";
             tahun -= 1;
           }
         }
    }
    cout << endl;
    system("pause");
}
