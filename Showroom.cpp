#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAX = 100;
    string merk[MAX], tipe[MAX];
    int tahun[MAX], harga[MAX];
    int jumlah = 0;
    int pilihan;

    do
    {
        cout << "\n=== Showroom Mobil ===\n";
        cout << "1. Tambah Data Mobil\n";
        cout << "2. Tampilkan Data Mobil\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            if (jumlah < MAX)
            {
                cout << "Masukkan Merk Mobil: ";
                cin >> merk[jumlah];
                cout << "Masukkan Tipe Mobil: ";
                cin >> tipe[jumlah];
                cout << "Masukkan Tahun Mobil: ";
                cin >> tahun[jumlah];
                cout << "Masukkan Harga Mobil: ";
                cin >> harga[jumlah];
                jumlah++;
            }
            else
            {
                cout << "Data sudah penuh!\n";
            }
            break;

        case 2:
            if (jumlah == 0)
            {
                cout << "Belum ada data mobil.\n";
            }
            else
            {
                for (int i = 0; i < jumlah; i++)
                {
                    cout << "\nData Mobil ke-" << i + 1 << "\n";
                    cout << "Merk  : " << merk[i] << "\n";
                    cout << "Tipe  : " << tipe[i] << "\n";
                    cout << "Tahun : " << tahun[i] << "\n";
                    cout << "Harga : Rp" << harga[i] << "\n";
                }
            }
            break;

        case 3:
            cout << "Terima kasih!\n";
            break;

        default:
            cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 3);

    return 0;
}