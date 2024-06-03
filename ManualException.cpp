#include <iostream>
using namespace std;

int main(){
    try{
        cout << "Selmat Belajar di Prodi TI UMY" << endl;
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch(int a) {
        cout << "Pengecualian akan dieksekusi" << endl;
    }

    catch(...){
        cout << "Default Pengecualian diexsekusi" << endl;
    }
    return 0;
}