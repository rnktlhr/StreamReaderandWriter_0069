#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;
    string NamaFile;

    cout << "Masukan Nama File: ";
    cin >> NamaFile;

    //membuka file dalam mode nulis
    ofstream outfile;
    //menunjuk kesebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);

    cout << " >=Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true){
        cout << "- ";
        //mendapatkan karakter setiap satu baris
        getline(cin, baris);
        //loop akan berenti jika anda memasukan karakter q
        if (baris == "q") break;
        outfile << baris << endl;
    }
    outfile.close();

    ifstream infile;
    infile.open(NamaFile + ".txt", ios::in);

    cout << endl << ">= Membuka dan membaca file " << endl;
    
    //jika file ada maka
    if (infile.is_open()){
        //melakukan perulangan setiap baris 
        while (getline(infile, baris)){
            //dan tampilkan disini
            cout << baris << "'\n";

        }
        //tutup file tersebut setelah selesai
        infile.close();
    }
    else cout << "Unable to open file";
    return 0;
}