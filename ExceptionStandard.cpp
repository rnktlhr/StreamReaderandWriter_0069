#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main(){
    cout << "Awal Program" << endl;
    try{
        array<int, 4> data = {8, 4, 7, 2};
        cout << data.at(5) << endl;
    }

    catch (exception& e) {
        cout << e.what() << endl;
    }
    cout << "Baris Program Yang Terakhir" << endl;
    
}