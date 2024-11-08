#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct Mahasiswa {
    char Npm[9];
    char Nama[30];
    int NMid,NSemester,NAkhir;
    char NHuruf;
} Peg[100];

int main() {
    char Lg = 'Y';
    int N = 0;

    while (Lg == 'Y' || Lg == 'y') {
        system("cls");
        gotoxy(4, 0);
        cout << "--------------------------------------------\n";
        gotoxy(5, 1);
        cout << "Data Nilai Ujian Pemrograman C++\n";
        gotoxy(5, 2);
        cout << "Dosen          : Budiman, S.SI\n";
        gotoxy(4, 3);
        cout << "--------------------------------------------\n";
        N++;
        
        gotoxy(5, 4);
        cout << "NPM : ";
        cin.ignore();
        cin.getline(Peg[N].Npm, 9);
        gotoxy(5, 5);
        cout << "Nama : ";
        cin.getline(Peg[N].Nama, 30);
        gotoxy(5, 6);
        cout << "Nilai Mid : ";
        cin >> Peg[N].NMid;
        gotoxy(5, 7);
        cout << "Nilai Semester : ";
        cin >> Peg[N].NSemester;
        Peg[N].NAkhir = 0.4 * Peg[N].NMid + 0.6 * Peg[N].NSemester;
        gotoxy(5, 8);
        cout << "Nilai Akhir : " << Peg[N].NAkhir << endl;
            
        gotoxy(5, 9);
        cout << "Nilai Huruf    : " << Peg[N].NHuruf << endl;
        gotoxy(4, 10);
        cout << "--------------------------------------------\n";
        gotoxy(5, 11);
        
        cout << "Masih Ingin Menginput Lagi? [Y/T] : ";
        Lg = getch();
    }

    system("cls");
    
    cout << left << setw(5) << "No" 
         << setw(15) << "NPM" 
         << setw(25) << "Nama" 
         << setw(15) << "Nilai Mid" 
         << setw(18) << "Nilai Semester" 
         << setw(15) << "Nilai Akhir" 
         << setw(15) << "Nilai Huruf" << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;

    for (int i = 1; i <= N; i++) {
        cout << left << setw(5) << i 
             << left << setw(15) << Peg[i].Npm 
             << left << setw(25) << Peg[i].Nama 
             << left << setw(15) << Peg[i].NMid 
             << left << setw(18) << Peg[i].NSemester 
             << left << setw(15) << Peg[i].NAkhir 
             << left << setw(15) << Peg[i].NHuruf << endl;
    }

    cout << "--------------------------------------------------------------------------------------------------------" << endl;

    return 0;
}
