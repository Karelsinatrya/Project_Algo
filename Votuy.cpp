#include <iostream>
using namespace std;

int main()
{
    const int JUMLAH_KANDIDAT = 3;
    string kandidat[JUMLAH_KANDIDAT] = {
        "Kandidat A",
        "Kandidat B",
        "Kandidat C"};
    int suara[JUMLAH_KANDIDAT] = {0, 0, 0};
    int pilihan, vote;
    char ulang;

    do
    {
        cout << "\n=== SISTEM VOTING ===\n";
        cout << "1. Voting\n";
        cout << "2. Lihat Hasil Voting\n";
        cout << "3. keluar\n";
        cout << "pilih menu (1-3): ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "\ndaftar kandidat:\n";
            for (int i = 0; i < JUMLAH_KANDIDAT; i++)
            {
                cout << i + 1 << ". " << kandidat[i] << endl;
            }

            cout << "Pilih kandidat (1-" << JUMLAH_KANDIDAT << "): ";
            cin >> vote;

            if (vote >= 1 && vote <= JUMLAH_KANDIDAT)
            {
                suara[vote - 1]++;
                cout << "Terima kasih telah memberikan suara untuk " << kandidat[vote - 1] << "!\n";
            }
            else
            {
                cout << "Pilihan Tidak Valid!\n";
            }
            break;

        case 2:
            cout << "\nHasil Voting:\n";
            for (int i = 0; i < JUMLAH_KANDIDAT; i++)
            {
                cout << kandidat[i] << ": " << suara[i] << " suara\n";
            }
            break;

        case 3:
            cout << "Keluar dari sistem voting. Terima kasih!\n";
            break;

        default:
            cout << "Pilihan tidak valid.\n";
        }

    } while (pilihan != 3);

    return 0;
}