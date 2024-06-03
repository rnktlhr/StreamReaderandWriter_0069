#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main(){
    cout << "Awal Program" << endl; //penanda 1:....
    try{
        array<int, 4> data = {8, 4, 7, 2};
        //pesan array int 4 elemen
        cout << data.at(5) << endl;
    }

    catch (exception& e) {
        //penangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karena array data hanya memiliki 4 elemen*/
    }
    cout << "Baris Program Yang Terakhir" << endl;
    //penanda 2 : bahwa program berjalan tanpa berenti
    return 0;
}