#include <iostream>
using namespace std;
//Rifki Aditya Hariyanto//2211102150//IF10D
int main()
{

    int hero1_level, hero2_level;
    int hero1_stamina, hero2_stamina;
    string hero1, hero2;
    char lagi, gamau;

    do {

    cout << "Masukan Nama Hero ke 1 : ";
    cin >> hero1;
    cout << endl;
    cout << "Masukan Nama Hero ke 2 : ";
    cin >> hero2;
    cout << endl;

    //ngecek nama sama apa engga
    if (hero1==hero2){
        cout << "Nama Hero Tidak Boleh Sama bro" << endl;
        cout << endl;
    } else {

    //stamina dan level hero 1
    cout << "Masukan Stamina dan level " << hero1 << endl;

    cout << "Stamina : ";
    cin >> hero1_stamina;
    cout << "Level : ";
    cin >> hero1_level ;
    cout << endl;

    //stamina dan level hero 2
    cout << "Masukan Stamina dan level " << hero2 << endl;

    cout << "Stamina : ";
    cin >> hero2_stamina;
    cout << "Level : ";
    cin >> hero2_level ;
    cout << endl;

    //jika stamina dan level kedua hero sama
    if (hero1_stamina==hero2_stamina && hero2_level==hero1_level) {
        cout << "kedua karakter imbang dalam stamina dan level" << endl;
    } else {

    //jika stamina kedua hero sama
    if (hero1_stamina == hero2_stamina) {
        cout << "stamina keduanya imbang" << endl;

    //jika salah satu hero menang stamina
    } else if (hero2_stamina>hero1_stamina) {
        cout << hero2 << " menang dalam jumlah stamina dari " << hero1 << endl;

    //smenghitung selisih stamina
        cout << "selisih stamina : " << hero2_stamina-hero1_stamina << endl;
            cout << endl;
    } else {
        cout << hero1 << " menang dalam jumlah stamina " << hero2 << endl;
        cout << "selisih stamina : " << hero1_stamina-hero2_stamina << endl ;
        cout << endl;
    }


    //jika level kedua hero sama
    if (hero1_level == hero2_level) {
        cout << "level keduanya imbang" << endl;
        cout << endl;

    //jika salah satu hero menang level
    } else if (hero2_level>hero1_level) {
        cout << hero2 << " menang dalam jumlah level dari " << hero1 << endl;

        //menghitung selisih level
        cout << "selisih level : " << hero2_level-hero1_level << endl;
    } else {
        cout << hero1 << " menang dalam jumlah level dari " << hero2 << endl;
        cout << "selisih level : " << hero1_level-hero2_level << endl;
    }
    }
    }

    //perulangan
    cout << endl;
    cout << "Mau input lagi apa engga ? ";
    cin >> lagi;
} while (lagi == 'Y' || lagi == 'y' || gamau == 'N' || gamau == 'n');
    cout << gamau << "y udh kalo g mau";
    return 0;
}
