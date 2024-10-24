#include <iostream>
using namespace std;

int main() {
    int N, M;
    int matriks[100][100];
    int reverse_m[100][100];
    
    cin >> N >> M;
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> matriks[i][j];
        }
    }
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            reverse_m[j][N - i - 1] = matriks[i][j];
        }
    }
    
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++) {
            cout << reverse_m[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}


/*
Deskripsi
Pak Dengklek memberikan Anda sebuah matriks berukuran N×M. Cetak kembali matriks tersebut setelah diputar 90 derajat searah jarum jam!

Format Masukan
Baris pertama berisi dua buah bilangan bulat N dan M. N baris berikutnya masing-masing berisi M buah bilangan bulat, yang menyatakan elemen-elemen matriks tersebut.

Format Keluaran
Sebuah matris berukuran M×N dengan format seperti masukan yang merupakan matriks yang sudah diputar.

Contoh Masukan
4 3
34 87 15
66 71 52
47 47 48
45 75 35

Contoh Keluaran
45 47 66 34
75 47 71 87
35 48 52 15

Batasan
- 1 ≤ N, M ≤ 1001
- 1 ≤ (setiap elemen matriks) ≤ 100

*/